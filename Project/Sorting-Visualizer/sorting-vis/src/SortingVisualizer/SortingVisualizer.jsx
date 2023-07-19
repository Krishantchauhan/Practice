import React from "react";
import "./SortingVisualizer.css";
import * as Algo from "./Algo";

export default class SortingVisualizer extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      array: [],
    };
  }
  componentDidMount() {
    this.resetArray();
  }
  resetArray() {
    const array = [];
    for (let i = 0; i < 100; i++) {
      array.push(randomIntFromInterval(5, 500));
    }
    this.setState({ array });
  }

  mergeSort() {
    const ran = this.state.array.slice().sort();
    const sortedArray = algo.mergeSort(this.state.array);

    console.log(arraysAreEqual(ran, sortedArray));
  }

  render() {
    const { array } = this.state;
    return (
      <div className="array-container">
        {array.map((value, idx) => (
          <div
            className="array-bar"
            key={idx}
            style={{ height: `${value}px` }}></div>
        ))}
        <button onClick={() => this.resetArray()}>Genrate New Array</button>
        <button onClick={() => this.mergeSort()}>Merge Sort</button>
      </div>
    );
  }
}

function randomIntFromInterval(min, max) {
  return Math.floor(Math.random() * (max - min + 1) + min);
}

function arraysAreEqual(arrayOne, arrayTwo) {
  if (arrayOne.length !== arrayTwo.length) return false;
  for (let i = 0; i < arrayOne.length; i++) {
    if (arrayOne[i] !== arrayTwo[i]) {
      return false;
    }
  }
  return true;
}
