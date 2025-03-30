import { applyMiddleware, createStore } from "redux";
import { composeWithDevTools } from "@redux-devtools/extension";
import { thunk } from "redux-thunk";

const initialState = {
  todoList: [
    {
      id: 1,
      todoData: "Hello World!!!",
      checked: false,
    },
  ],
  isLoading: false,
  isError: false,
};

function taskReducer(state = initialState, action) {
  switch (action.type) {
    case "todo/add":
      return { ...state, todoList: [...state.todoList, action.payload] };

    case "todo/del":
      return {
        ...state,
        todoList: state.todoList.filter((task) => {
          return task.id !== action.payload;
        }),
      };
    default:
      return state;
  }
}

// export const storee =

export const store = createStore(
  taskReducer,
  composeWithDevTools(applyMiddleware(thunk))
);
// Action Creaters
export function addTask(data) {
  return {
    type: "todo/add",
    payload: { id: Date.now(), todoData: data, checked: false },
  };
}

export function delTask(id) {
  return { type: "todo/del", payload: id };
}

export function fetchTask() {
  return async function (dispatch) {
    try {
      const res = await fetch("API");
      const data = await res.json();
      dispatch({
        type: "todo/add",
        payload: data.taskList,
      });
    } catch (error) {
      console.error(error);
    }
  };
}

store.dispatch(addTask("Namaste Duniya"));
// store.dispatch(delTask(1));
