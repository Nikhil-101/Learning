import { MdDeleteForever } from "react-icons/md";
import { useDispatch, useSelector } from "react-redux";
import { delTask } from "../src/functions/taskList/taskSlice";
import { memo } from "react";

export const DisplayList = memo(function DisplayList() {
  const listData = useSelector((state) => state.todoReducer.taskList);
  const dispath = useDispatch();
  function handleDelTask(id) {
    dispath(delTask(id));
  }

  return (
    <ul>
      {listData.map((task) => (
        <li className="flex justify-between px-2 pt-2" key={task.id}>
          {task.task}
          <MdDeleteForever
            className="cursor-pointer text-red-700"
            onClick={() => handleDelTask(task.id)}
          />
        </li>
      ))}
    </ul>
  );
});
