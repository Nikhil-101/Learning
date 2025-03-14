export function Button({ handleBtnClick }) {
  return (
    <button
      onClick={handleBtnClick}
      className="bg-blue-700 px-3 py-1 text-white rounded-r-md"
    >
      Copy
    </button>
  );
}
