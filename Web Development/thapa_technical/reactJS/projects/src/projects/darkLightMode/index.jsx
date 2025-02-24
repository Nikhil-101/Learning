import { use } from "react"
import { ModeContext } from "./Context"
import './styles.css';

export const Display = () => {
  const { darkMode, handleToggleTheme } = use(ModeContext);

  console.log(darkMode);
  return (
    <>
      <p className={darkMode? 'dark bg-black text-white': ''}>Hello</p>
      <button onClick={handleToggleTheme}>Switch Theme</button>
    </>
  )
}