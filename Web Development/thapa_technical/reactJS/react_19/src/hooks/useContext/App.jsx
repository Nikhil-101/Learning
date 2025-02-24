import { DisplayData } from "./DisplayData"
import { FormProvider } from "./Provider"

export const App = () => {

  return (
    <FormProvider>
      <DisplayData />
    </FormProvider>
  )
}