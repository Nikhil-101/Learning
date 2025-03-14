import { useState } from "react";
import { Button } from "./Button";

const btnColors = {
  red: "bg-red-600",
  green: "bg-green-600",
  blue: "bg-blue-600",
  teal: "bg-teal-600",
  gray: "bg-gray-600",
  yellow: "bg-yellow-600",
  pink: "bg-pink-600",
  purple: "bg-purple-600",
  fuchsia: "bg-fuchsia-600",
  white: "bg-white",
  black: "bg-black",
};

export function App() {
  let [color, setColor] = useState("bg-gray-800");

  function handleBtnClick(newColor) {
    setColor((color = newColor));
  }

  return (
    <>
      <main
        className={`h-screen w-screen ${color} grid justify-center content-end`}
      >
        <div
          className={`min-w-fit px-3 py-1 m-20 bg-stone-200 rounded-2xl flex gap-2`}
        >
          {Object.entries(btnColors).map(([colorName, colorCSS]) => (
            <Button
              colorName={colorName}
              bgColor={colorCSS}
              handleBtnClick={handleBtnClick}
            />
          ))}
        </div>
      </main>
    </>
  );
}
