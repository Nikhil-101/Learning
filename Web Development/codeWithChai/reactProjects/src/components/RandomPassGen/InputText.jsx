export function InputText({ passKey = " " }) {
  return (
    <input
      className="text-orange-400 bg-white"
      type="text"
      name="passgen"
      value={passKey}
      readOnly
    />
  );
}
