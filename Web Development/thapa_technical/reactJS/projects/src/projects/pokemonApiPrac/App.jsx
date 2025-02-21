import { useEffect, useState } from "react";

export const App = () => {
  const [data, setData] = useState(null);
  const [loading, setLoading] = useState(true);
  const [err, setErr] = useState('');
  const API = "https://pokeapi.co/api/v2/pokemon/charizard";

  // using async and await
  const fetchAPI = async (API) => {
    try {
      const res = await fetch(API);
      setData(await res.json());
      setLoading(false);
    } catch (error) {
      console.log(error);
      setErr(error);
      setLoading(false);
    }
       
  };
  // using Promises
  // const fetchAPI = (API) => {
  //      fetch(API)
  //     .then((res) => res.json())
  //     .then((data) => setData(data))
  //     .catch((err) => console.log(err));
  // };

  const printData = () => {
    console.log(data);
  }

  useEffect(() => {
    fetchAPI(API);
  }, []);
  printData();

  if(loading){
    return <h2>Fetching Data...</h2>
  }

  if(err){
    return <h2>Error: {err.message}</h2>
  }

  return (
  <>
    <h1>Let&apos;s Catch Pokemon</h1>
    <h3 style={{textTransform: 'Capitalize'}}>Name: {data.name}</h3>
    <p>Weight: {data.weight}</p>
    <p>Height: {data.height}</p>
    <p>Speed: {data.stats[5].base_stat}</p>
    <img src={data.sprites.other.dream_world.front_default} alt="{data.name}" />
  </>
);
  
  
  
};
