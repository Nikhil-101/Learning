import { configureStore } from "@reduxjs/toolkit";
import todoReducer from "../functions/taskList/taskSlice.js";

export const store = configureStore({
  reducer: {
    todoReducer,
  },
});

// console.log(store.dispatch(addTask({ id: 2, task: "hello", checked: false })));
