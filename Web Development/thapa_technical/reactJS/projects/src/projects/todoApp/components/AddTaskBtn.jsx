import buttons from "./Button.module.css";
import styles from "./AddTaskBtn.module.css";

export const AddTaskBtn = () => {
  return (
    <button className={`${buttons.btn} ${styles["add-btn"]}`} type="submit">
      Add Task
    </button>
  );
};
