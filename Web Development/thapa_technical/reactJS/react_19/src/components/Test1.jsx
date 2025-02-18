// import { PrintValues } from "./PrintValues"
import { PrintValues } from "../hooks/Test1"

const users = [
  {name: "Alice", age: 25},
  {name: "Bob", age: 22},
  {name: "Charlie", age: 27},
  {name: "Angles", age: 35},
]

export const Test1 = () => {
  return (
    <>
      <h1>Values are:</h1>
      <PrintValues key={users} data={users} />
    </>
  )
}