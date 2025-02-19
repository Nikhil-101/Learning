/* eslint-disable react/prop-types */

import buttons from "./Button.module.css";
import styles from "./DeleteAllBtn.module.css";

export const DeleteAllBtn = ({ handleAllDeleteBtn }) => {
  return (
    <button
      className={`${buttons.btn} ${styles["clear-btn"]}`}
      onClick={handleAllDeleteBtn}
    >
      Clear All
    </button>
  );
};
