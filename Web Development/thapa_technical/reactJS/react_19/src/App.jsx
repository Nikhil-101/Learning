import { Test1 } from "./components/Test1";
import './App.css';

const PrintGreatings = () => {
  return <h1>Hello, World!!!</h1>;
};
const num = [1, 2, 3];

const CountingNum = () =>{
  return (
    <>
    {num.map((val) => (
        // <div key={val}>
        <>
          <span key={val}>{val}</span>
          <span> Testing </span>
          <br />
        </>
        // </div>
    ))}
    </>
  )
}

export const App = () => {
  return (
    <>
      {/* <PrintGreatings  />
      <PrintGreatings  />
      <PrintGreatings  />
      <PrintGreatings  />
      <CountingNum  /> */}
      <Test1  />
    </>
  )
};
