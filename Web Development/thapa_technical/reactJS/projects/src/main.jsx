import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
// tmp App Component
// import { App } from './projects/tmp/App'
// project todoApp
// import { App } from './App.jsx'
// useState Challange
// import { App } from './projects/useStateChallange/App'
// useEffect Challange
// import { App } from './projects/useEffectChallange/App'
// Fetch API Practice
// import { App } from './projects/pokemonApiPrac/App'
// Pokemon API Challange
// import { App } from './projects/pokemonAPIChallange/App'
import { App } from './projects/darkLightMode/App'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <App />
  </StrictMode>,
)
