public class InsercionAlInicio {
    public static void main(String[] args) {
        int[] inputArr = {11, 21, 31, 41, 51, 61};
        int ele = 52;

        int[] nuevoArr = new int [7];

        System.out.println("Antes de la inserción , el array es: ");
        for (int j = 0; j<inputArr.length; j++) {
            System.out.print(inputArr[j] + " ");

        }

        nuevoArr[0] = ele;
        for (int j = 0; j<inputArr.length; j++) {
            nuevoArr [j + 1] = inputArr[j];
        }

        System.out.println("\nDespués de la inserción, el array es: ");
        for (int j = 0; j<nuevoArr.length; j++){
            System.out.print(nuevoArr[j] + " ");

        }
        System.out.println();
    }
}