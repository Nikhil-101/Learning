import { useState } from 'react'
// import './App.css'
import './App.module.css';
import styles from './App.module.css'

import { DateTime } from './projects/todoApp/components/DateTime.jsx'
import { InputForm } from './projects/todoApp/components/InputForm.jsx'
import { TodoHeading } from './projects/todoApp/components/TodoHeading.jsx'
import { TodoList } from './projects/todoApp/components/TodoList.jsx'
import { DeleteAllBtn } from './projects/todoApp/components/DeleteAllBtn.jsx'

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

  const handleDeleteTaskBtn = (val) => {
    const newData = data.filter((task)=>{
      return task != val;
    })
    setData(newData);
  }

  const handleAllDeleteBtn = () => {
    setData([]);
  }

  return (
    <>
      <heading>
        <TodoHeading />
        <DateTime  />
      </heading>
      <br />
      <section className={styles['input-section']} >
        <InputForm handleInputValue={handleInputValue} inputValue={inputValue} handleFormSubmit={handleFormSubmit} />
      </section>
      <section className="display-list">
        <TodoList data={data} handleDeleteTaskBtn={handleDeleteTaskBtn} />
      </section>
      <DeleteAllBtn handleAllDeleteBtn={handleAllDeleteBtn} />
    </>
  )
}
