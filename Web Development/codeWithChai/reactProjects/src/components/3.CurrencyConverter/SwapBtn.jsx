export function SwapBtn({ handleCurrencySwap }) {
  return (
    <>
      <button
        className="px-4 py-1 bg-purple-800 rounded-xl cursor-pointer absolute top-25 left-50"
        onClick={handleCurrencySwap}
      >
        swap
      </button>
    </>
  );
}
