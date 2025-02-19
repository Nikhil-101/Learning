import { useState } from 'react'
import './App.css'
import { DateTime } from './projects/todoApp/components/DateTime.jsx'
import { InputForm } from './projects/todoApp/components/InputForm.jsx'
import { TodoHeading } from './projects/todoApp/components/TodoHeading.jsx'
import { TodoList } from './projects/todoApp/components/TodoList.jsx'

export const App = () => {
  const [inputValue, setInputValue] = useState("");
  const [data, setData] = useState([
    "Buy Rice",
    "Get a Job",
  ]);

  const handleInputValue = (value) => {
    setInputValue(value);
  }

  const checkDuplicate = (value) => {
    return data.includes(value)
  }
  
  const handleFormSubmit = (event) => {
    event.preventDefault();

    if(!inputValue || checkDuplicate(inputValue)){
      setInputValue("")
      return;
    }

    setData((prev)=> [...prev, inputValue])
    setInputValue("")
  }

  return (
    <>
      <heading>
        <TodoHeading  />
        <DateTime  />
      </heading>
      <br />
      <section>
        <InputForm handleInputValue={handleInputValue} inputValue={inputValue} handleFormSubmit={handleFormSubmit} />
      </section>
      <section className="display-list">
        <TodoList data={data} />
      </section>
    </>
  )
}
