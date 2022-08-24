import { bubbleSort, setData } from "../../modules/js/algorithm.js";

const totalData = 1000;
const data = setData(totalData);
console.log(`Data sebelum di sorting (total data = ${totalData}):\n\n${data}`);

const dataSorted = bubbleSort(data);
console.log(
  `\nData setelah di sorting (total data = ${totalData}):\n\n${dataSorted}`
);
