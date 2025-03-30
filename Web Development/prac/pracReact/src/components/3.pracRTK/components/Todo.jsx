import { Provider } from "react-redux";
import { DisplayList } from "./DisplayList";
import { TaskInput } from "./TaskInput";
import { store } from "../src/app/store";

export function Todo() {
  return (
    <Provider store={store}>
      <main className="bg-gray-900 text-white w-screen h-screen flex justify-center items-baseline text-2xl">
        <div className="relative top-20 bg-gray-800 p-7 rounded-xl flex flex-col gap-5">
          <h1 className="text-center">Todo List</h1>
          <TaskInput />
          <div>
            {/* <button onClick={handleSyncBtn}>Sync TodoList</button> */}
            <DisplayList />
          </div>
        </div>
      </main>
    </Provider>
  );
}
