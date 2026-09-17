import java.util.Scanner;
import java.util.Arrays;

public class EliminacionInicialArreglo {

    public static int[] eliminarPrimero(int[] arreglo) {
        if (arreglo.length == 0) {
            System.out.println("El arreglo está vacío");
            return arreglo;
        }

        int[] nuevoArreglo = new int[arreglo.length - 1];

        for (int i = 1; i < arreglo.length; i++) {
            nuevoArreglo[i - 1] = arreglo[i];
        }

        return nuevoArreglo;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] numeros = {10, 25, 3, 47, 8};

        System.out.println("Arreglo original: " + Arrays.toString(numeros));

        numeros = eliminarPrimero(numeros);

        System.out.println("Arreglo después de eliminar el primero: " + Arrays.toString(numeros));

        sc.close();
    }
}