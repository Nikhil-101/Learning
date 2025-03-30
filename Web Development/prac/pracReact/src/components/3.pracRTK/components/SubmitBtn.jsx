import { memo } from "react";

export const SubmitBtn = memo(function SubmitBtn() {
  return (
    <button
      className="bg-amber-600 flex px-2 rounded-full justify-center items-center cursor-pointer"
      type="submit"
    >
      +
    </button>
  );
});
