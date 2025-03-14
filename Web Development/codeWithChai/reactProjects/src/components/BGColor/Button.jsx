export function Button({ colorName, bgColor, handleBtnClick }) {
  return (
    <>
      <button
        className={`px-4 py-1 rounded-2xl ${bgColor} ${
          bgColor === "bg-white" ? "text-black" : "text-white"
        } cursor-pointer`}
        onClick={() => handleBtnClick(bgColor)}
      >
        {colorName}
      </button>
    </>
  );
}
