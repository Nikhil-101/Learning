import "../store/store";
import { Provider, useDispatch } from "react-redux";
import { fetchTask, store } from "../store/store";
import { DisplayList } from "./DisplayList";
import { TaskInput } from "./TaskInput";
export function App() {
  const dispatch = useDispatch();
  function handleSyncBtn() {
    dispatch(fetchTask());
  }
  return (
    <Provider store={store}>
      <main className="bg-gray-900 text-white w-screen h-screen flex justify-center items-baseline text-2xl">
        <div className="relative top-20 bg-gray-800 p-7 rounded-xl flex flex-col gap-5">
          <h1 className="text-center">Todo List</h1>
          <TaskInput />
          <div>
            <button onClick={handleSyncBtn}>Sync TodoList</button>
            <DisplayList />
          </div>
        </div>
      </main>
    </Provider>
  );
}
