import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> inputArr = new ArrayList<>(Arrays.asList(11, 21, 31, 41, 51, 61));
        System.out.println("Antes de insertar: " + inputArr);
        
        inputArr.add(71); 
        
        System.out.println("Después de insertar: " + inputArr);
    }
}