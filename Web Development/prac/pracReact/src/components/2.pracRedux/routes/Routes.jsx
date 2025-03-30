import { createBrowserRouter } from "react-router";
import { App } from "../components/App";
import { Error } from "../components/Error";

export const router = createBrowserRouter([
  {
    path: "/",
    element: <App />,
    errorElement: <Error />,
  },
]);
