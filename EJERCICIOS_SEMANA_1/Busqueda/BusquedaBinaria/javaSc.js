function busquedaBinariaRecursiva(arr, objetivo, inicio = 0, fin = arr.length - 1) {
   
    if (inicio > fin) {
        return -1;
    }

    let medio = Math.floor((inicio + fin) / 2);

    if (arr[medio] === objetivo) {
        return medio;
    }

    if (arr[medio] < objetivo) {
        return busquedaBinariaRecursiva(arr, objetivo, medio + 1, fin);
    } else {
        return busquedaBinariaRecursiva(arr, objetivo, inicio, medio - 1);
    }
}

const datos = [1, 3, 5, 7, 9, 11];
console.log(busquedaBinariaRecursiva(datos, 7)); 