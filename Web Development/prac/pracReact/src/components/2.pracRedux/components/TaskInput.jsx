import { useState } from "react";
import { useDispatch } from "react-redux";
import { addTask } from "../store/store";

export function TaskInput() {
  const dispatch = useDispatch();
  const [task, setTask] = useState("");

  function handleTaskSubmit(e) {
    e.preventDefault();
    // dispath action here
    dispatch(addTask(task));
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
        <button
          className="bg-amber-600 flex px-2 rounded-full justify-center items-center cursor-pointer"
          type="submit"
        >
          +
        </button>
      </form>
    </>
  );
}
