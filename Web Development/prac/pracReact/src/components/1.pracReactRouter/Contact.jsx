import { NavLink, useLoaderData } from "react-router";

export function Contact() {
  let load = useLoaderData();
  return (
    <>
      <h1>Contact</h1>
      <NavLink to="/">Home: {load}</NavLink>
    </>
  );
}
