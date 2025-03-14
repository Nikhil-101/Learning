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
      <span className="text-orange-400">{`Length (${length
        .toString()
        .padStart(2, "0")})`}</span>
    </>
  );
}
