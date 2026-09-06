public class Dimencionjava3D {
    public static void main(String[] args) {
        int[][] arreglo2D = new int[3][4];
        arreglo2D[0][1] = 15;

        // Matriz 3D (Capas x Filas x Columnas)
        int[][][] arreglo3D = new int[2][3][4];
        arreglo3D[0][1][2] = 99;

        // Imprimir valores
        System.out.println(arreglo2D[0][1]);
        System.out.println(arreglo3D[0][1][2]);
    }
}