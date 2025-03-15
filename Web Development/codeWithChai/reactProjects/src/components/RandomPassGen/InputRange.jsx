export function InputRange({ length, handleInputRange }) {
  return (
    <>
      <input
        onChange={handleInputRange}
        type="range"
        min={8}
        max={30}
        step={1}
        value={length}
      />
      {/* converting number to string and add padding for values less than 10 */}
      <span className="text-orange-400">{`Length (${length
        .toString()
        .padStart(2, "0")})`}</span>
    </>
  );
}
