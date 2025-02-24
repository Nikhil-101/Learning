import { Display } from "."
import { ContextProvider } from "./Context"

export const App = () => {
  return (
    <>
      <ContextProvider>
        <Display />
      </ContextProvider>
    </>
  )
}