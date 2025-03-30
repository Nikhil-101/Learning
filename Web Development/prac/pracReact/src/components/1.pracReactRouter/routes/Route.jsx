import { createBrowserRouter } from "react-router";
import { Home } from "../Home";
import { Contact } from "../Contact";
import { App } from "../App";
import { User } from "../user";

async function oneLoader() {
  console.log("hello world!!!");
  return "Hello";
}

export let router = createBrowserRouter([
  {
    path: "/",
    element: <App />,
    // errorElement: <ErrorComp />,
    children: [
      {
        path: "",
        element: <Home />,
      },
      {
        path: "contact",
        element: <Contact />,
        loader: oneLoader,
      },
      {
        path: "username/:user",
        element: <User />,
      },
    ],
  },
]);
