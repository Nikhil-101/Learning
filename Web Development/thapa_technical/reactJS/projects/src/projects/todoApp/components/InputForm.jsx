/* eslint-disable react/prop-types */
import { AddTaskBtn } from "./AddTaskBtn"
import { InputField } from "./InputField"
import styles from './InputForm.module.css'


export const InputForm = ({ handleInputValue, inputValue, handleFormSubmit }) => {

  return (
    <>
      <form className={styles["input-form"]} onSubmit={handleFormSubmit}>
        <InputField inputValue={inputValue} handleInputValue={handleInputValue} />
        <AddTaskBtn />
      </form>
    </>
  )
}