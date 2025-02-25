import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import './index.css'
// import { App } from './App.jsx'
// useContext Hook
// import { App } from './hooks/useContext/App.jsx'
import { App } from './hooks/useReducer/App'


createRoot(document.getElementById('root')).render(
  <StrictMode>
    <App />
  </StrictMode>,
)
