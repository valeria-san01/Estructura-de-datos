function busquedaSecuencial(arreglo, valorBuscado) {
    for (let i = 0; i < arreglo.length; i++) {
        // Si encontramos el elemento, devolvemos su índice
        if (arreglo[i] === valorBuscado) {
            return i; 
        }
    }
    // Si recorremos todo el arreglo y no está, devolvemos -1
    return -1; 
}

// Ejemplo de uso:
const numeros = [10, 23, 45, 70, 11, 15];
const resultado = busquedaSecuencial(numeros, 70);

console.log(resultado); // Muestra: 3 (porque 70 está en el índice 3)