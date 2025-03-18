import { useEffect, useRef, useState } from "react";
import { InputCard } from "./InputCard";
import { ConvertBtn } from "./ConvertBtn";
import { SwapBtn } from "./SwapBtn";

export function App() {
  const FromValueRef = useRef(null);
  const FromCurrencyRef = useRef(null);
  const ToValueRef = useRef(null);
  const ToCurrencyRef = useRef(null);
  const [currencyList, setCurrencyList] = useState({});

  useEffect(() => {
    async function fetchList() {
      const res = await fetch(
        "https://cdn.jsdelivr.net/npm/@fawazahmed0/currency-api@latest/v1/currencies.json"
      );
      setCurrencyList(await res.json());
    }
    fetchList();
  }, []);

  async function fetchRates() {
    const res = await fetch(
      `https://cdn.jsdelivr.net/npm/@fawazahmed0/currency-api@latest/v1/currencies/${FromCurrencyRef.current.value}.json`
    );
    const data = await res.json();

    return data;
  }

  async function handleConvertOp() {
    const rateList = await fetchRates();
    console.log(rateList);

    ToValueRef.current.value = (
      FromValueRef.current.value *
      rateList[FromCurrencyRef.current.value][ToCurrencyRef.current.value]
    ).toFixed(2);
  }

  function handleCurrencySwap() {
    let tmp = FromCurrencyRef.current.value;
    FromCurrencyRef.current.value = ToCurrencyRef.current.value;
    ToCurrencyRef.current.value = tmp;
  }

  return (
    <>
      <main className="bg-gray-900 w-screen h-screen text-white flex justify-center items-start">
        <div className="w-[30rem] bg-gray-500 rounded-xl flex flex-col gap-3 px-5 py-4 relative top-30">
          <InputCard
            stat="From"
            ValueRef={FromValueRef}
            CurrencyRef={FromCurrencyRef}
            list={currencyList}
          />
          <SwapBtn handleCurrencySwap={handleCurrencySwap} />
          <InputCard
            stat="To"
            ValueRef={ToValueRef}
            CurrencyRef={ToCurrencyRef}
            list={currencyList}
          />
          <ConvertBtn
            cur1={FromCurrencyRef.current?.value}
            cur2={ToCurrencyRef.current?.value}
            handleConvertOp={handleConvertOp}
          />
        </div>
      </main>
    </>
  );
}
