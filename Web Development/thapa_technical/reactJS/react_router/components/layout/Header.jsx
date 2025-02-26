import { NavLink } from "react-router-dom"

export const Header = () => {
  return (
    <header>
      <h2>Header</h2>
      <NavLink to=''>Home</NavLink>
      <NavLink to='about'>About</NavLink>
    </header>
  ) 
}