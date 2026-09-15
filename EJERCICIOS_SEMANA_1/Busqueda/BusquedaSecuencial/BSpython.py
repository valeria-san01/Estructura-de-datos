def busqueda_secuencial(lista, valor_buscado):
    for i, elemento in enumerate(lista):
        if elemento == valor_buscado:
            return i  
    return -1  

numeros = [14, 28, 5, 99, 42]
resultado = busqueda_secuencial(numeros, 99)

print(resultado)  