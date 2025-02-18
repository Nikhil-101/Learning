import { useState } from 'react'
import './App.css'

function App() {
  let [status, setStatus] = useState(false)
  function handleClick(){
    setStatus((status) => !status);
  }

  function textSelect(){
    return status > 0 ? "ON" : "OFF";
  }

  function btnColor(){
    return status > 0 ? "btn btn-green" : "btn btn-red";
  }
  
  function circleColor(){
    return status > 0 ? "circle circle-green" : "circle circle-red";
  }

  return (
    <>
      <div className={btnColor()} onClick={handleClick}>
        <div className={circleColor()}>
          <p>{textSelect()}</p>
        </div>
      </div>
    </>
  )
}

export default App
