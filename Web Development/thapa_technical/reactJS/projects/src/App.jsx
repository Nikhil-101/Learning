import { useState } from 'react'
// import './App.css'
import './App.module.css';
import styles from './App.module.css'

import { DateTime } from './projects/todoApp/components/DateTime.jsx'
import { InputForm } from './projects/todoApp/components/InputForm.jsx'
import { TodoHeading } from './projects/todoApp/components/TodoHeading.jsx'
import { TodoList } from './projects/todoApp/components/TodoList.jsx'
import { DeleteAllBtn } from './projects/todoApp/components/DeleteAllBtn.jsx'

let localData;

const loadLocalData = () => {
  // setData(JSON.parse(localStorage.getItem('todoData')));
  localData = JSON.parse(localStorage.getItem('todoData'));
  localData = localData || []
}

loadLocalData();
  
export const App = () => {
  const [inputValue, setInputValue] = useState({
    id: '',
    content: '',
    checked: false,
  });

  const [data, setData] = useState(localData);

  const storeLocalData = () => {
    localStorage.setItem('todoData', JSON.stringify(data));
    return;
  }

  const handleInputValue = (value) => {
    setInputValue({id: value, content: value, checked: false});
    return;
  }

  const checkDuplicate = (value) => {
    const booleanValue = data.find((elem) => {
      return elem.content === value;
    })
    if(booleanValue) return true;
    return false;
  }
  
  const handleFormSubmit = (event) => {
    event.preventDefault();

    if(!inputValue.content || checkDuplicate(inputValue.content)){
      setInputValue({
        id: '',
        content: '',
        checked: false,
      })
      return;
    }

    setData((prev)=> [...prev, inputValue])
    
    setInputValue({
      id: '',
      content: '',
      checked: false,
    })
  }

  const handleDeleteTaskBtn = (value) => {
    const newData = data.filter((task)=>{
      return task.content != value.content;
    })
    setData(newData);
    return;
  }

  const handleAllDeleteBtn = () => {
    setData([]);
    return;
  }

  const handleCheckBtn = (value) => {
    const newData = data.map((obj)=>{
      if(obj.content === value.content)
      {
        obj.checked = !obj.checked;
      }
      return obj;
    })
    setData(newData);
    return;
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
        <TodoList data={data} handleDeleteTaskBtn={handleDeleteTaskBtn} handleCheckBtn={handleCheckBtn} />
      </section>
      <DeleteAllBtn handleAllDeleteBtn={handleAllDeleteBtn} />
      {storeLocalData(data)}
    </>
  )
}
