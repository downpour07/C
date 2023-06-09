import "./App.css";
import { useState } from "react";

function App() {
  const [toDo, setTodo] = useState("");
  const [toDos, setTodos] = useState([]);
  const [checkedItems, setCheckedItems] = useState([]);
  const [Decoration, setDecoration] = useState(false);

  const change = (todovalue) => {
    setTodo(todovalue.target.value);
  };

  const submit = (todovelue) => {
    todovelue.preventDefault();
    if (toDo === "") {
      return;
    }
    setTodos((prevTodos) => [...prevTodos, toDo]);
    setTodo("");
  };

  const clearAll = () => {
    setDecoration((prevValue) => !prevValue);
  };

  const resetAll = () => {
    setTodos([]);
    setCheckedItems([]);
  };

  function click(index) {
    if (checkedItems.includes(index)) {
      setCheckedItems(checkedItems.filter((item) => item !== index));
    } else {
      setCheckedItems([...checkedItems, index]);
    }
  }

  return (
    <>
      <header>
        <div>TO DO LIST</div>
      </header>
      <div className="body">
        <div className="body_left">
          <div className="body_left_top">
            <div className="date">
              <div className="top">
                <div className="curcle" id="curcle_1"></div>
                <div className="curcle" id="curcle_2"></div>
              </div>
            </div>
            <div className="say">
              <div className="top">
                <div className="curcle" id="curcle_2"></div>
                <div className="curcle" id="curcle_1"></div>
              </div>
            </div>
          </div>
          <div className="body_left_bottom">
            <div className="memo">
              <div className="top" id="memo"></div>
            </div>
          </div>
        </div>
        <div className="body_right">
          <div>
            <div className="top">
              <div className="curcle" id="curcle_1"></div>
              <div className="curcle" id="curcle_2"></div>
              <div className="curcle" id="curcle_3"></div>
              <div className="check">CHECK LIST</div>
            </div>
            <form onSubmit={submit}>
              <input
                onChange={change}
                type="text"
                placeholder="입력하세요"
                value={toDo}
              ></input>
              <button className="add">ADD</button>
            </form>
          </div>
          <div className="button">
            <button className="clear" onClick={clearAll}>
              전체 선택
            </button>
            <button className="clear" onClick={resetAll}>전체 삭제</button>
          </div>
          <div className="li">
            <ul>
              {toDos.map((item, index) => (
                <li
                  key={index}
                  onClick={() => click(index)}
                  style={{
                    textDecoration: checkedItems.includes(index) || Decoration
                      ? "line-through"
                      : "",
                  }}
                >
                  {item}
                </li>
              ))}
            </ul>
          </div>
        </div>
      </div>
    </>
  );
}

export default App;