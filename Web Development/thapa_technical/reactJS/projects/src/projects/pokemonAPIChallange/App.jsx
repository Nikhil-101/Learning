import { useEffect, useState } from "react"
import styles from './App.module.css'

export const App = () => {
  // const [apiData, setApiData] = useState({});
  const [pokemonData, setPokemonData] = useState([]);
  // const [fetchLoading, setFetchingLoading] = useState(true);
  const [pokemonLoading, setPokemonLoading] = useState(true);
  const [searchPokemon, setSearchPokemon] = useState('')
  const [error, setError] = useState('');

  const pokeNumber = 52;

  const apiURL = `https://pokeapi.co/api/v2/pokemon?limit=${pokeNumber}&offset=0`;


    const fetchData = async (apiURL) => {
    try {
      const res = await fetch(apiURL);
      const allData = await res.json();
      // setApiData(await res.json());

      let reqData = allData.results.map(async (pokemon)=>{
        const response = await fetch(pokemon.url);
        const pokeData = await response.json();
        return pokeData;
      })
      reqData = await Promise.all(reqData);
      setPokemonData(reqData);
      setPokemonLoading(false);
      // setFetchingLoading(false);
    } catch (error) {
      console.log(error);
      setError(error);
      setPokemonLoading(false);
      // setFetchingLoading(false);
    }
  }

// Custom made API Call
  // const fetchData = async (apiURL) => {
  //   try {
  //     const res = await fetch(apiURL);
  //     setApiData(await res.json());
  //     setFetchingLoading(false);
  //   } catch (error) {
  //     console.log(error);
  //     setError(error);
  //     setFetchingLoading(false);
  //   }
  // }

  // const fetchPokemonData = async (apiURL) => {
  //   try {
  //     const res = await fetch(apiURL);
  //     const data = await res.json();
  //     setPokemonData((prev)=>([...prev, data]));
  //   } catch (error) {
  //     console.log(error);
  //     setError(error);
  //     setPokemonLoading(false);
  //   }
  // }

  const searchData = pokemonData.filter((val)=>val.name.toLowerCase().includes(searchPokemon.toLowerCase()));

  useEffect(() => {
    fetchData(apiURL);
  }, [])

  // useEffect(()=>{
  //   if(!fetchLoading){
  //   apiData.results.map((pokemon)=>{
  //     fetchPokemonData(pokemon.url);
  //   })
  //   setPokemonLoading(false);
  //   }
  // // eslint-disable-next-line react-hooks/exhaustive-deps
  // }, [fetchLoading]);

  

  if (pokemonLoading) {
    return (
      <>
        <h2>Fetching Data...</h2>
      </>
    )
  }

  if (error) {
    return (
      <>
        <h2>Error: {error.message}</h2>
      </>
    )
  }


  return (
    <>
      <header className={styles['heading-section']}>
        <h1>Let&apos;s Catch Pokemon</h1>
        <input className={styles['search-input']} type="text" placeholder="Search Pokemon" value={searchPokemon} onChange={(e)=>setSearchPokemon(e.target.value)}/>
      </header>
      <section>
        <ul className={styles['pokemon-list']}>
          {
            searchData.map((pokemon)=>(
              <li key={pokemon.id} className={styles.card}>
                <img className={styles["card-img"]} src={pokemon.sprites.other.dream_world.front_default} alt={pokemon.name} />
                <p className={styles['pokemon-name']} key={pokemon.id}>{pokemon.name}</p>
                <p className={styles['pokemon-types']}>
                    {pokemon.types.map((values)=>values.type.name).join(', ')}
                  {/* {
                    pokemon.types.map((val, index)=>(
                      <span key={val.slot}>
                        {`${val.type.name}`}
                        {index==pokemon.types.length-1? '': ', '}
                      </span>
                    ))
                  } */}
                </p>
                <div className={styles['pokemon-stats']}>
                  <p><span>Height: </span>{pokemon.height}</p>
                  <p><span>Weight: </span>{pokemon.weight}</p>
                  <p><span>Speed: </span>{pokemon.stats[5].base_stat}</p>
                  <p><span>Experiance: </span>{pokemon.base_experience}</p>
                  <p><span>Attack: </span>{pokemon.stats[1].base_stat}</p>
                  <p><span>Abilities: </span>{pokemon.abilities[0].ability.name}</p>
                </div>
                <div className={styles['img-background']}></div>
              </li>
            ))
          }
        </ul>
      </section>
    </>
  )
}