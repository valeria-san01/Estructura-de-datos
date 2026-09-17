let matriz = [
    [9, 2, 5],
    [4, 8, 1],
    [7, 3, 6]
];

console.log("Matriz original:");
console.table(matriz);


function ordenarMatrizPorFilas(m) {
    
    for (let i = 0; i < m.length; i++) {
        m[i].sort((a, b) => a - b);
    }
    return m;
}

let matrizOrdenada = ordenarMatrizPorFilas(matriz);

console.log("Matriz con sus filas ordenadas de menor a mayor:");
console.table(matrizOrdenada);