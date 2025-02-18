import { useState } from "react";

export const PrintValues = (props) => {
  const { data } = props;
  const [count, setCount] = useState(0);
  const handleBtnClick = () => {
    setCount(() => count + 1)
  }

  return(
    <>
      <ul>
        <p>{data.at(count).name} - {data.at(count).age}</p>
      </ul>
      <button onClick={handleBtnClick}>Next</button>
    </>
  )
}