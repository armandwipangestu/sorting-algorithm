import { 
	bubbleSort,
	setThousandData, 
	getThousandData 
} from "./logic.js"

const data = setThousandData(1000)

console.log("Data sebelum di sorting: \n")
console.log(getThousandData(data))
console.log("\nData setelah di sorting: \n")
console.log(bubbleSort(getThousandData(data)))
