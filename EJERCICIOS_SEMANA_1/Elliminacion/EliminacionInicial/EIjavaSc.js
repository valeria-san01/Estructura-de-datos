const arr = [11, 21, 31, 41, 51, 61]
console.log("Antes de la eliminación el array es: ")
console.log(arr.join(", "))
//Eliminación del primer elemento del array
arr.shift()
console.log("\nDespués de la eliminación el array es: ")  
console.log(arr.join(", "))