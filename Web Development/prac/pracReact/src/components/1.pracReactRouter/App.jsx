import { Footer } from "./footer/Footer";
import { Header } from "./header/Header";
import { Outlet, useNavigation } from "react-router";

export function App() {
  const navigation = useNavigation();
  if (navigation.state === "!idle") return <h1>Loading...</h1>;
  return (
    <main className="bg-gray-950 h-screen w-screen text-white">
      <Header />
      <Outlet />
      <Footer />
    </main>
  );
}
