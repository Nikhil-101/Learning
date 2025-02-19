/* eslint-disable react/prop-types */
import { FaCheckCircle, FaTrash } from "react-icons/fa";
import { ImRadioUnchecked } from "react-icons/im";

import styles from './TodoList.module.css'

export const TodoList = ({ data, handleDeleteTaskBtn, handleCheckBtn }) => {

  return (
    <>
      <ul className={styles["ul-list"]}>
        {
          data.map((task, index)=>(
            <li className={styles["li-list"]} key={index}>

              <span className={task.checked ? styles['task-text'] : ''}>{task.content}</span>

              <div className={styles["btn-container"]}>

                <button className={styles["check-btn"]} onClick={() => handleCheckBtn(task)}>
                  {task.checked ? <FaCheckCircle /> : <ImRadioUnchecked />}
                </button>

                <button className={styles["del-btn"]} onClick={() => handleDeleteTaskBtn(task)}>
                  <FaTrash />
                </button>

              </div>

            </li>
          ))
        }
      </ul>
    </>
  )
}