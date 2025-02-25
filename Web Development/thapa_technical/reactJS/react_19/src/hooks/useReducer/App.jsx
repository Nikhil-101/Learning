import { useEffect, useReducer, useRef } from "react"

const reducer = (_state, action) => {
  return {
    fName: action.fName,
    lName: action.lName,
  }
}

export const App = () => {
  const initialState = {
    fName: '',
    lName: '',
  };

  // useReducer Hook
  const [state, dispatch] = useReducer(reducer, initialState);

  // useRef Hook
  const fNameRef = useRef(null);
  const lNameRef = useRef(null);

  // useEffect Hook
  useEffect(()=>{
    if (state.fName || state.l) {
      console.log(state.fName, state.lName);
    }
  }, [state])

  const handleFormSubmit = () => {
    dispatch({
      fName: fNameRef.current.value,
      lName: lNameRef.current.value,
    })
  }

  return (
    <>
      <input type="text" name="fName" ref={fNameRef} />
      <input type="text" name="lName" ref={lNameRef} />
      <button onClick={handleFormSubmit}>Submit</button>
      <p>Name: {state.fName} {state.lName}</p>
    </>
  )
}