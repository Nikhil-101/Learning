import { useEffect, useState } from "react"
import styles from './App.module.css'

export const App = () => {
  const [apiData, setApiData] = useState({});
  const [pokemonData, setPokemonData] = useState([]);
  const [fetchLoading, setFetchingLoading] = useState(true);
  const [pokemonLoading, setPokemonLoading] = useState(true);
  const [error, setError] = useState('');

  const apiURL = 'https://pokeapi.co/api/v2/pokemon?limit=10&offset=0';

  const fetchData = async (apiURL) => {
    try {
      const res = await fetch(apiURL);
      setApiData(await res.json());
      setFetchingLoading(false);
    } catch (error) {
      console.log(error);
      setError(error);
      setFetchingLoading(false);
    }
  }

  const fetchPokemonData = async (apiURL) => {
    try {
      const res = await fetch(apiURL);
      const data = await res.json();
      setPokemonData((prev)=>([...prev, data]));
    } catch (error) {
      console.log(error);
      setError(error);
      setPokemonLoading(false);
    }
  }


  useEffect(() => {
    fetchData(apiURL);
  }, [])

  useEffect(()=>{
    if(!fetchLoading){
    apiData.results.map((pokemon)=>{
      fetchPokemonData(pokemon.url);
    })
    setPokemonLoading(false);
    }
  // eslint-disable-next-line react-hooks/exhaustive-deps
  }, [fetchLoading]);

  

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
      <header>
        <h1>Let&apos;s Catch Pokemon</h1>
      </header>
      <section>
        <ul className={styles['pokemon-list']}>
          {
            pokemonData.map((pokemon)=>(
              <li key={pokemon.id} className={styles.card}>
                <img className={styles["card-img"]} src={pokemon.sprites.other.dream_world.front_default} alt={pokemon.name} />
                <p className={styles['pokemon-name']} key={pokemon.id}>{pokemon.name}</p>
                <p className={styles['pokemon-types']}>
                  {
                    pokemon.types.map((val, index)=>(
                      <span key={val.slot}>
                        {`${val.type.name}`}
                        {index==pokemon.types.length-1? '': ', '}
                      </span>
                    ))
                  }
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