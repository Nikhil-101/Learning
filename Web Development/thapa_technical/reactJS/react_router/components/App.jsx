import { About } from "./About"
import { Contact } from "./Contact"
import { Home } from "./Home"
import { createBrowserRouter, RouterProvider } from 'react-router-dom'
import { AppLayout } from "./layout/AppLayout"



export const App = () => {

  const router = createBrowserRouter([
    {
      path: '/',
      element: <AppLayout />,
      children: [
        {
          path: '',
          element: <Home />,
        },
        {
          path: 'about',
          element: <About  />,
        },
        {
          path: 'contact',
          element: <Contact />,
        }
      ]
    },
    
  ])

  return <RouterProvider router={router} />
}