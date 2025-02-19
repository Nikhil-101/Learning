/* eslint-disable react/prop-types */
import { FaCheckCircle, FaTrash } from "react-icons/fa";

export const TodoList = ({ data }) => {
  return (
    <>
      <ul>
        {
          data.map((task, index)=>(
            <li key={index}>
              
              <span>{task}</span>

              <button className="check-btn">
                <FaCheckCircle />
              </button>

              <button className="delete-btn">
                <FaTrash />
              </button>

            </li>
          ))
        }
      </ul>
    </>
  )
}