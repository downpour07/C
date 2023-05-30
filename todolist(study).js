const name = document.getElementById("name"); //name이라는 상수
const button = document.getElementById("button"); //button이라는 상수
const input = document.getElementById("input"); //input이라는 상수

window.localStorage.getItem(key);

button.addEventListener("click", handleClick);

function handleClick() {
  //버튼을 클릭했을 때
  let li = document.createElement("li"); //li에 값을 생성
  li.innerText = input.value; //li.innerText에 input.value값을 저장
  name.appendChild(li);
  input.value = "";
  li.addEventListener("click", () => {
    //리스트를 클릭했을 때
    if (li.style.textDecoration == "line-through") {
      //원래 상태가 지워져 있는 상태면 되돌리기
      li.style.textDecoration = "";
    } else {
      //원래 상태가 지워져있는 상태가 아니라면 지우기
      li.style.textDecoration = "line-through";
    }
  });
  window.localStorage.setItem("name", `${li.innerText}`);
}
