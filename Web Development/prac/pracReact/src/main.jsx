import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import "./index.css";
import { RouterProvider } from "react-router";
import { router } from "./components/3.pracRTK/routes/Routes";
// 2nd prac Project
// import { router } from "./components/2.pracRedux/routes/Routes";
// 1st prac Project
// import { router } from "./components/1.pracReactRouter/routes/Route";

createRoot(document.getElementById("root")).render(
  <StrictMode>
    <RouterProvider router={router} />
  </StrictMode>
);
