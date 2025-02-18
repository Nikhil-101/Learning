export const PrintValues = (props) => {
  const { data } = props;
  return(
    <ul>
      {
        data.map((curVal)=>(
          <li key={curVal.name}>{curVal.name} - {curVal.age}</li>
        ))
      }
    </ul>
  )
}