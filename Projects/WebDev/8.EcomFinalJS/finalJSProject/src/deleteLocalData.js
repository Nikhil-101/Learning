import { getLocalData } from "./getLocalData";
import { saveLocalData } from "./saveLocalData";

export const deleteLocalData = (id) => {
  let localData = getLocalData();
  let newLocalData = localData.filter((element)=>{
    return element.id !== id;
  })

  saveLocalData(newLocalData);
}

