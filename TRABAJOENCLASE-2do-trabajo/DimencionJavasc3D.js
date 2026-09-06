let arreglo2D = Array.from({ length: 3 }, () => Array(4).fill(0));
arreglo2D[0][1] = 15;

let arreglo3D = Array.from({ length: 2 }, () =>
    Array.from({ length: 3 }, () => Array(4).fill(0))
);
arreglo3D[0][1][2] = 99;

console.log(arreglo2D[0][1]);
console.log(arreglo3D[0][1][2]);