/* eslint-disable react/prop-types */
import styles from './InputField.module.css';

export const InputField = ({ inputValue, handleInputValue }) => {
  return (
    <>
      <input
        type="text"
        id="input-field"
        className={styles["input-txt"]}
        name="newTask"
        value={inputValue.content}
        onChange={(e) => handleInputValue(e.target.value)}
      ></input>
    </>
  );
};
