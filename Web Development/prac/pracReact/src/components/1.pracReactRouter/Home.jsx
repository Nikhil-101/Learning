import { NavLink } from "react-router";
export function Home() {
  return (
    <>
      <h1>Home</h1>
      <NavLink to="/contact">Contact</NavLink>
    </>
  );
}
