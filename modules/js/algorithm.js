const bubbleSort = (data) => {
  for (let i = 0; i < data.length; i++) {
    for (let j = 0; j < data.length - i - 1; j++) {
      if (data[j] > data[j + 1]) {
        let temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }
  return data;
};

const insertionSort = (data) => {
  for (let i = 1; i < data.length; i++) {
    let key = data[i];
    let j = i - 1;

    while (j >= 0 && data[j] > key) {
      data[j + 1] = data[j];
      j = j - 1;
    }
    data[j + 1] = key;
  }
  return data;
};

const selectionSort = (data) => {
  for (let i = 0; i < data.length; i++) {
    let min_index = i;
    for (let j = i + 1; j < data.length; j++) {
      if (data[j] < data[min_index]) {
        min_index = j;
      }
    }
    swapData(data, min_index, i);
  }
  return data;
};

const swapData = (data, xPointer, yPointer) => {
  let temp = data[xPointer];
  data[xPointer] = data[yPointer];
  data[yPointer] = temp;
};

const setData = (total) => {
  let data = [];
  for (let i = 0; i < total; i++) {
    data[i] = Math.floor(Math.random() * total);
  }
  return data;
};

export { bubbleSort, insertionSort, selectionSort, swapData, setData };
