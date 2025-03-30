import { createSlice } from "@reduxjs/toolkit";

const todoSlice = createSlice({
  name: "Task List",
  initialState: {
    taskList: [
      {
        id: 1,
        task: "Hello World",
        checked: false,
      },
    ],
    isLoading: false,
  },
  reducers: {
    addTask(state, action) {
      state.taskList.push({
        id: Date.now(),
        task: action.payload,
        checked: false,
      });
    },
    delTask(state, action) {
      state.taskList = state.taskList.filter((task) => {
        return task.id !== action.payload;
      });
    },
  },
});

export const { addTask, delTask } = todoSlice.actions;
export default todoSlice.reducer;
