#Iplementacion en python 
TwoDimensionalArray = [ 
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
print ("Los elementos del array son:")
for row in TwoDimensionalArray:
    for element in row:
        print(element, end=' ') #mostrando los elemntos de la fila separados por espacios
    print() #Ir a la siguiente linea despues de imprimir todos los elementos de la fila 
