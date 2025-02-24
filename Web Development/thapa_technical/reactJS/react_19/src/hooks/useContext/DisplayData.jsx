import { useContext } from "react"
import { FormContext } from "./Provider"


export const DisplayData = () => {
  const { fName, lName } = useContext(FormContext);
  
  return (
    <p>My Name is: {fName} {lName}</p>
  )
}