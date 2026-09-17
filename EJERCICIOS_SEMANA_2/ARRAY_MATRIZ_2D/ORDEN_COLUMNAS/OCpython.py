r = 3
c = 3
arr = [[0] * c for _ in range(r)] 

TwoDArr = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

for x in range(r * c):
    fila = x % r
    columna = x // r
    arr[fila][columna] = TwoDArr[x // c][x % c]

print("Los elementos del array bidimensional son:")
for fila in TwoDArr:
    print(fila)

print("\nLa matriz ordenada por columnas es:")
for fila in arr:
    print(fila)