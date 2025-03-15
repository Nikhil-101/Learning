export function InputText({ passKey = " " }) {
  // default value given to input field
  return (
    <input
      className="text-orange-500 font-semibold text-xl bg-white grow rounded-l-md focus:outline-0 pl-1"
      type="text"
      name="passgen"
      value={passKey}
      readOnly
    />
  );
}
