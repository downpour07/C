import React, { useState, useEffect } from "react";
import "./App.css";

function App() {
  const [toDo, setTodo] = useState("");
  const [Decoration, setDecoration] = useState(false);
  const [toDos, setTodos] = useState([]);

  useEffect(() => {
    const storedTodos = JSON.parse(localStorage.getItem("toDos"));
    if (storedTodos) {
      setTodos(storedTodos);
    }
  }, []);

  useEffect(() => {
    localStorage.setItem("toDos", JSON.stringify(toDos));
  }, [toDos]);

  const Change = (input) => {
    setTodo(input.target.value);
  };

  const click = (index) => {
    setTodos((prevTodos) => {
      const updatedTodos = prevTodos.map((todo, i) => {
        if (i === index) {
          return {
            ...todo,
            deco: !todo.deco,
          };
        }
        return todo;
      });
      return updatedTodos;
    });
  };

  const addTodo = () => {
    if (toDo === "") {
      return;
    }
    const newTodo = { title: toDo, deco: Decoration };
    setTodos((prevTodos) => [...prevTodos, newTodo]);
    setTodo("");
  };

  const setAll = () => {
    setDecoration((prevValue) => !prevValue);
    setTodos((prevTodos) =>
      prevTodos.map((todo) => ({ ...todo, deco: !Decoration }))
    );
  };

  const resetAll = () => {
    setTodos([]);
  };

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
                <div className="circle" id="circle_1"></div>
                <div className="circle" id="circle_2"></div>
              </div>
            </div>
            <div className="say">
              <div className="top">
                <div className="circle" id="circle_2"></div>
                <div className="circle" id="circle_1"></div>
              </div>
            </div>
          </div>
          <div className="body_left_bottom">
            <div className="memo">
              <div className="top" id="memo">
                MEMO
              </div>
              <textarea className="memo_body"></textarea>
            </div>
          </div>
        </div>
        <div className="body_right">
          <div>
            <div className="top">
              <div className="circle" id="circle_1"></div>
              <div className="circle" id="circle_2"></div>
              <div className="circle" id="circle_3"></div>
              <div className="check">CHECK LIST</div>
            </div>
            <div className="background">
              <input
                onChange={Change}
                type="text"
                placeholder="입력하세요"
                value={toDo}
              />
              <button onClick={addTodo} className="add">
                ADD
              </button>
            </div>
          </div>
          <div className="button">
            <button className="clear" onClick={setAll}>
              전체 선택
            </button>
            <button className="clear" onClick={resetAll}>
              전체 삭제
            </button>
          </div>
          <div className="li">
            <ul>
              {toDos.map((todo, index) => (
                <li
                  key={index}
                  onClick={() => click(index)}
                  style={{
                    textDecoration: todo.deco ? "line-through" : "none",
                  }}
                >
                  {todo.title}
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
