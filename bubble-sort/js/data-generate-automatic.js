import { bubbleSort, setThousandData } from "../../modules/js/algorithm.js";

const data = setThousandData(1000);
console.log(`Data sebelum di sorted:\n\n${data}`);

const dataSorted = bubbleSort(data);
console.log(`\nData setelah di sorted:\n\n${dataSorted}`);
