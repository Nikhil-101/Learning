import { useDispatch, useSelector } from "react-redux";
import { MdDeleteForever } from "react-icons/md";
import { delTask } from "../store/store";

export function DisplayList() {
  const listData = useSelector((state) => state.todoList);
  const dispatch = useDispatch();
  function handleDelTask(id) {
    dispatch(delTask(id));
  }
  return (
    <ul>
      {listData.map((task) => (
        <li className="flex justify-between px-2 pt-2" key={task.id}>
          {task.todoData}
          <MdDeleteForever
            className="cursor-pointer text-red-700"
            onClick={() => handleDelTask(task.id)}
          />
        </li>
      ))}
    </ul>
  );
}
