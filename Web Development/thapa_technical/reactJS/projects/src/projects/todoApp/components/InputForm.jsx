/* eslint-disable react/prop-types */
import { AddTaskBtn } from "./AddTaskBtn"
import { InputField } from "./InputField"


export const InputForm = ({ handleInputValue, inputValue, handleFormSubmit }) => {

  return (
    <>
      <form onSubmit={handleFormSubmit}>
        <InputField inputValue={inputValue} handleInputValue={handleInputValue} />
        <AddTaskBtn />
      </form>
    </>
  )
}