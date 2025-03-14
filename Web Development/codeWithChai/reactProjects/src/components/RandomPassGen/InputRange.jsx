export function InputRange({ length, handleInputRange }) {
  return (
    <input
      onChange={handleInputRange}
      type="range"
      min={8}
      max={20}
      step={1}
      value={length}
    />
  );
}
