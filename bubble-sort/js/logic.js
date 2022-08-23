export const bubbleSort = (data) => {
    for ( let i = 0; i < data.length; i++ ) {
        for ( let j = 0; j < (data.length - i - 1); j++ ) {
            if (data[j] > data[j + 1]) {
                let temp = data[j]
                data[j] = data[j + 1]
                data[j + 1] = temp
            }
        }
    }
    return data
}

export const setThousandData = (total) => {
	let data = []
    for ( let i = 0; i < total; i++ ) {
        data[i] = Math.floor(Math.random() * 1000)
    }
	return data
}

export const getThousandData = (name) => {
	return name
}
