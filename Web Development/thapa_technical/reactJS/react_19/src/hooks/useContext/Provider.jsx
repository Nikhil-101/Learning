import { createContext } from "react";

export const FormContext = createContext();

export const FormProvider = ({ children }) => {
  const fName = 'Nikhil';
  const lName = 'Dhiman';

  return (
    <FormContext.Provider value={{fName, lName}}>
      { children }
    </FormContext.Provider>
  )
}