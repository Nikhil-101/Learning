export function InputCheckbox({ iName, cValue, handleCheckbox }) {
  // iname -> input field iName | cname -> checked value in checkbox
  return (
    <div className="flex items-center gap-0.5">
      <input
        onChange={handleCheckbox}
        type="checkbox"
        name={iName}
        id={iName}
        checked={cValue}
      />
      <label className="capitalize text-orange-400" htmlFor={iName}>
        {iName}
      </label>
    </div>
  );
}
