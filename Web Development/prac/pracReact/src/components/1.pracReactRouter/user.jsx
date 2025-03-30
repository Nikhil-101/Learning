import { NavLink, useParams } from "react-router";

export function User() {
  const { user } = useParams();
  return (
    <>
      <h1>User: {user}</h1>
      <NavLink to="/">Home</NavLink>
    </>
  );
}
