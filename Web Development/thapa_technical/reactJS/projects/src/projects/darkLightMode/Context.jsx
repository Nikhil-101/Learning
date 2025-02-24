/* eslint-disable react/prop-types */
import { createContext, useState } from "react"

// eslint-disable-next-line react-refresh/only-export-components
export const ModeContext = createContext();

export const ContextProvider = ({ children }) => {
  const [darkMode, setDarkMode] = useState(false);

  const handleToggleTheme = () =>{
    setDarkMode((prev)=>!prev);
  }

  return (
    <ModeContext.Provider value={{darkMode, handleToggleTheme}}>
      { children }
    </ModeContext.Provider>
  )
}