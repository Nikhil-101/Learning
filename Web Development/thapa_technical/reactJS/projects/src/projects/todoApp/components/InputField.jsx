/* eslint-disable react/prop-types */
export const InputField = ({ inputValue, handleInputValue }) => {
  return (
    <>
      <input
        type="text"
        id="input-field"
        name="newTask"
        value={inputValue}
        onChange={(e) => handleInputValue(e.target.value)}
      ></input>
    </>
  );
};
