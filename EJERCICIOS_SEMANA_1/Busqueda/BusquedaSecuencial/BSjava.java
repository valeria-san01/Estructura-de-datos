public class BSjava {

    public static int findEle(int[] inputArr, int s, int targetEle){
        for (int j = 0; j < s; j++){
            if (inputArr[j] == targetEle) {
                return j;
            }
        }
        return -1;

    }

    public static void main(String[] args) {
        int[] inputArr = {12, 34, 10, 6, 40, 89, 98, 57, 19, 69};
        int targetEle = 40;
        int s = inputArr.length;

        int idx = findEle(inputArr, s, targetEle);

        if (idx != -1) {
            System.out.println("El elemento se encuentra en la posicion: " + (idx + 1));

        } else{
            System.out.println("No se encuentra el elemento.");
        }
    }    
}