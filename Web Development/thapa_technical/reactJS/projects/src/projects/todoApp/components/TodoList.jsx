/* eslint-disable react/prop-types */
import { FaCheckCircle, FaTrash } from "react-icons/fa";

import styles from './TodoList.module.css'

// import buttons from "./Button.module.css";

export const TodoList = ({ data, handleDeleteTaskBtn }) => {
  return (
    <>
      <ul className={styles["ul-list"]}>
        {
          data.map((task, index)=>(
            <li className={styles["li-list"]} key={index}>

              <span>{task}</span>

              <div className={styles["btn-container"]}>

                <button className={styles["check-btn"]}>
                  <FaCheckCircle />
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