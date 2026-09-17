import java.util.Scanner;

public class BusquedaSecuencial {
    
    public static int busquedaSecuencial(int[] arreglo, int datoBuscado) {
        for (int i = 0; i < arreglo.length; i++) {
            if (arreglo[i] == datoBuscado) {
                return i; 
            }
        }
        return -1; 
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] numeros = {10, 25, 3, 47, 8, 15, 22}; 

        System.out.println("Arreglo: ");
        for (int num : numeros) {
            System.out.print(num + " ");
        }

        System.out.print("¿Qué número quieres buscar? ");
        int dato = sc.nextInt();

        int resultado = busquedaSecuencial(numeros, dato);

        if (resultado!= -1) {
            System.out.println("El número " + dato + " se encontró en la posición: " + resultado);
        } else {
            System.out.println("El número " + dato + " no se encontró en el arreglo.");
        }

        sc.close();
    }
}
