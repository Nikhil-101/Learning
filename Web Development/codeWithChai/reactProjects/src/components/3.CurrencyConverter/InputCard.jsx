export function InputCard({ stat, ValueRef, CurrencyRef, list }) {
  return (
    <>
      <div className="container bg-gray-300 rounded-xl text-black px-4 py-2">
        <div className="flex justify-between text-gray-600">
          <span className="py-2">{stat}</span>
          <span className="py-2">Currency Type</span>
        </div>
        <div className="flex justify-between">
          <input
            className="py-2 focus:outline-0 w-[50%]"
            type="number"
            name="iCurrency"
            id="iCurrency"
            // min={0}
            placeholder="0"
            disabled={stat === "To" ? true : false}
            ref={ValueRef}
          />
          <select
            className="py-2 px-3"
            name="sCurrency"
            id="sCurrency"
            ref={CurrencyRef}
          >
            {Object.keys(list).map((key) => (
              <option key={key} value={`${key}`}>
                {key}
              </option>
            ))}
          </select>
        </div>
      </div>
    </>
  );
}
