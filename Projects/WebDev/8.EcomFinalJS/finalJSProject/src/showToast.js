export const showToast = (event, toastTemplateRef) =>{
  const toastClone = toastTemplateRef.content.cloneNode(true);
  event.appendChild(toastClone);
  console.log('toast running');
  
  setTimeout(()=>{
    event.querySelector('.toast-notification').remove();
  }, 2000);
}