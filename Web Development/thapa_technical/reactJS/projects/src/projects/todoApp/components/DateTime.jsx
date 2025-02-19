import { useState } from "react";

const getDate= () => {
  return new Date().toLocaleDateString();
}
const getTime= () => {
  return new Date().toLocaleTimeString();
}

export const DateTime = () => {
  let [date, setDate] = useState(`${getDate()} - ${getTime()}`)
  
  setInterval(() => {
    setDate(`${getDate()} - ${getTime()}`)
  }, 1000);
  
  
  return <h3>{date}</h3>
}