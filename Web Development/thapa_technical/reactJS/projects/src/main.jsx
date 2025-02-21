import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
// project todoApp
// import { App } from './App.jsx'
// useState Challange
// import { App } from './projects/useStateChallange/App'
// useEffect Challange
import { App } from './projects/useEffectChallange/App'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <App />
  </StrictMode>,
)
