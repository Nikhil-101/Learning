import { useEffect, useState } from "react"

export const App = () => {
  const [count, setCount] = useState(0);
  const [name, setName] = useState('');

  useEffect(()=>{
    document.title = `Count: ${count}`
  }, [count]);

  useEffect(()=>{
    console.log(`Name: ${name}`);
  }, [name]);

  // testing useeffect for interval
  // useEffect(()=>{
  //   const interval = setInterval(() => {
  //     setCount((prev)=>prev+1);
  //     // setCount(count+1);
  //     console.log(count);
      
  //   }, 1000);

  //   return () => clearInterval(interval)
  // // eslint-disable-next-line react-hooks/exhaustive-deps
  // }, []);

  const handleInputChange = (value) => {
    setName(value);
  }


  return (
    <>
      <h1>useEffect Challange</h1>
      <p><span>Count: </span>{count}</p>
      <button onClick={()=>{
        setCount(count + 1)
        }}>Increment</button>
      <p><span>Name: </span>{name}</p>
      <input type="text" value={name} onChange={(e)=>handleInputChange(e.target.value)} />
    </>
  )
}