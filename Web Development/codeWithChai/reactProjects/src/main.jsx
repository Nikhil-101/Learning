import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import "./index.css";
// import App from './App.jsx'
// BGColor App
// import { App } from "./components/BGColor/App";
// Pass Generator
import { App } from "./components/RandomPassGen/App";

createRoot(document.getElementById("root")).render(
  <StrictMode>
    <App />
  </StrictMode>
);
