import { selectionSort, setData } from "../../modules/js/algorithm.js";

const totalData = 10000;
const data = setData(totalData);
console.log(`Data sebelum di sorting (total data = ${totalData}):\n\n${data}`);

const dataSorted = selectionSort(data);
console.log(
  `\nData setelah di sorting (total data = ${totalData}):\n\n${dataSorted}`
);
