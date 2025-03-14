import { useEffect, useState } from "react";
import { Button } from "./Button";
import { InputCheckbox } from "./InputCheckbox";
import { InputRange } from "./InputRange";
import { InputText } from "./InputText";

export function UI() {
  const [length, setLength] = useState(8);
  let [isNum, setIsNum] = useState(false);
  let [isCharacter, setIsCharacter] = useState(false);
  const [displayKey, setdisplayKey] = useState("");

  useEffect(() => {
    genPass();
    // eslint-disable-next-line react-hooks/exhaustive-deps
  }, [length, isNum, isCharacter]);

  function genKey() {
    let key = "";
    for (let i = 65; i <= 90; i++) {
      key += String.fromCharCode(i);
    }
    for (let i = 97; i <= 122; i++) {
      key += String.fromCharCode(i);
    }
    if (isNum) {
      key += "0123456789";
    }
    if (isCharacter) {
      for (let i = 33; i <= 47; i++) {
        key += String.fromCharCode(i);
      }
      for (let i = 58; i <= 64; i++) {
        key += String.fromCharCode(i);
      }
      for (let i = 91; i <= 96; i++) {
        key += String.fromCharCode(i);
      }
      for (let i = 123; i <= 126; i++) {
        key += String.fromCharCode(i);
      }
    }
    return key;
  }

  function genPass() {
    let key = genKey();
    let pass = "";

    for (let i = 0; i < length; i++) {
      pass += key[Math.floor(Math.random() * key.length)];
      console.log(pass);
    }
    setdisplayKey(pass);
  }

  function handleCheckbox(e) {
    if (e.target.name === "numbers") {
      setIsNum(e.target.checked);
    } else {
      setIsCharacter(e.target.checked);
    }
  }

  function handleInputRange(e) {
    setLength(e.target.value);
  }

  function handleBtnClick() {
    try {
      navigator.clipboard.writeText(displayKey);
    } catch (err) {
      console.error(err);
    }
  }

  return (
    <>
      <div className="w-[30rem] bg-gray-700 px-5 py-3 rounded-2xl">
        <div className="min-w-fit flex">
          <InputText passKey={displayKey} />
          <Button handleBtnClick={handleBtnClick} />
        </div>
        <div className="flex items-center justify-evenly mt-2">
          <InputRange length={length} handleInputRange={handleInputRange} />
          <InputCheckbox
            iName="numbers"
            cValue={isNum}
            handleCheckbox={handleCheckbox}
          />
          <InputCheckbox
            iName="characters"
            cValue={isCharacter}
            handleCheckbox={handleCheckbox}
          />
        </div>
      </div>
    </>
  );
}
