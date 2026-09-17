const arr = [11, 21, 31, 41, 51, 61]
var ele = 52
console.log("Antes de la inserción el array es: ")
console.log(arr.join(", "))

arr.unshift(ele)
console.log("\nDespués de la inserción el array es: ")  
console.log(arr.join(", "))