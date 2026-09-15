def busqueda_binaria(lista, objetivo):
    izquierda = 0
    derecha = len(lista) - 1

    while izquierda <= derecha:
       
        medio = (izquierda + derecha) // 2

        if lista[medio] == objetivo:
            return medio
        
        elif lista[medio] < objetivo:
            izquierda = medio + 1
        
        else:
            derecha = medio - 1

    return -1

numeros = [10, 20, 30, 40, 50, 60, 70, 90]
buscado = 10

resultado = busqueda_binaria(numeros, buscado)

if resultado != -1:
    print("Elemento encontrado en el índice es:", resultado)
else:
    print("El elemento no esta en la lista.")