import { createBrowserRouter } from "react-router";
import { Home } from "../Home";
import { Contact } from "../Contact";
import { App } from "../App";

export let router = createBrowserRouter([
  {
    path: "/",
    element: <App />,
    children: [
      {
        path: "",
        element: <Home />,
      },
      {
        path: "contact",
        element: <Contact />,
      },
    ],
  },
]);
