import { createBrowserRouter } from "react-router";
import { Todo } from "../components/Todo";
import { Error } from "../components/Error";

export const router = new createBrowserRouter([
  {
    path: "/",
    element: <Todo />,
    errorElement: <Error />,
  },
]);
