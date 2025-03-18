export function ConvertBtn({ handleConvertOp }) {
  return (
    <>
      <button
        className="py-2.5 bg-purple-800 text-white rounded-xl cursor-pointer"
        onClick={handleConvertOp}
      >
        Convert
      </button>
    </>
  );
}
