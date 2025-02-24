import { useRef } from "react"

export const App = () => {
  let username = useRef('abc');

  const handleClick = () =>{
    console.log(username.current.value);
  }

  

  return(
    <>
      <input type="text" id="username" ref={username} onClick={handleClick}/>
    </>
  )
}