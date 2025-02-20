import { useState } from "react"

export const App = () => {
  const [count, setCount] = useState(0);
  const [steps, setSteps] = useState(1);

  const handleSteps = (value) => {
    value = NaN ? 0 : value;
    setSteps(Number(value));
  }

  return (
    <>
      <p><span>Count: </span>{count}</p>
      {/* controlled input field for steps */}
      <input type="text" value={steps} onChange={(e)=>handleSteps(e.target.value)}></input>
      {/* count will not go above 100 */}
      <button onClick={()=>setCount((count + steps) >= 100 ? 100 : Number(count + steps))} disabled={count>=100}>Increment</button>
      {/* count will not go below 0 */}
      <button onClick={()=>setCount((count - steps) <= 0 ? 0 : Number(count - steps))} disabled={count<=0}>Decrement</button>
      {/* Reset all fields */}
      <button onClick={()=>{
        setCount(0);
        setSteps(1);
      }}>Reset</button>
    </>
  )
}