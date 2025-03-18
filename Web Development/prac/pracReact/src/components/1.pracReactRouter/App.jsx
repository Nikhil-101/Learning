import { Footer } from "./footer/Footer";
import { Header } from "./header/Header";
import { Outlet } from "react-router";

export function App() {
  return (
    <main className="bg-gray-950 h-screen w-screen text-white">
      <Header />
      <Outlet />
      <Footer />
    </main>
  );
}
