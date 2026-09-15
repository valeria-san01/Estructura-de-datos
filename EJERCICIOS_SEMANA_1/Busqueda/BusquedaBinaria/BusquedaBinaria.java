
class BusquedaBinaria {
    public static int busquedaBinaria(int[] arreglo, int valor) {
        int izquierda = 0;
        int derecha = arreglo.length - 1;

        while (izquierda <= derecha) {
            int medio = izquierda + (derecha - izquierda) / 2;

            if (arreglo[medio] == valor) {
                return medio; // Valor encontrado
            }

            if (arreglo[medio] < valor) {
                izquierda = medio + 1; // Buscar en la mitad derecha
            } else {
                derecha = medio - 1; // Buscar en la mitad izquierda
            }
        }

        return -1; // Valor no encontrado
    }
    public static void main(String[] args) {
        int[] arreglo = {1, 3, 5, 7, 9, 11};
        int valorBuscado = 7;
        
        int resultado = busquedaBinaria(arreglo, valorBuscado);
        
        if (resultado != -1) {
            System.out.println("Valor encontrado en el índice: " + resultado);
        } else {
            System.out.println("Valor no encontrado en el arreglo.");
        }
    }
}