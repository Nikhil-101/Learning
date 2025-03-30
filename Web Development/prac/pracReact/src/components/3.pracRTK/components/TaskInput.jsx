import { useDispatch } from "react-redux";
import { addTask } from "../src/functions/taskList/taskSlice";
import { memo, useState } from "react";
import { SubmitBtn } from "./SubmitBtn";

export const TaskInput = memo(function TaskInput() {
  const [task, setTask] = useState("");
  const dispatch = useDispatch();
  function handleTaskSubmit(e) {
    e.preventDefault();
    task ? dispatch(addTask(task)) : "";
    setTask("");
  }

  return (
    <>
      <form className="flex gap-2" onSubmit={handleTaskSubmit}>
        <input
          className="bg-gray-500 px-2.5 rounded-xl"
          type="text"
          name="itodo"
          id="itodo"
          value={task}
          onChange={(e) => setTask(e.target.value)}
        />
        <SubmitBtn />
      </form>
    </>
  );
});
