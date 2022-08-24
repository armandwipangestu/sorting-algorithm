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

const setData = (total) => {
  let data = [];
  for (let i = 0; i < total; i++) {
    data[i] = Math.floor(Math.random() * total);
  }
  return data;
};

export { bubbleSort, insertionSort, setData };
