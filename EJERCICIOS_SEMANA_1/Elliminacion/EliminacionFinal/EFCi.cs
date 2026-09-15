using System;
using System.Collections.Generic;

class Program {
    static void Main() {
        List<int> inputArr = new List<int> { 11, 21, 31, 41, 51, 61 };
        Console.WriteLine("Antes de eliminar, el array es: " + string.Join(", ", inputArr));

        inputArr.RemoveAt(inputArr.Count - 1); // Elimina el último índice

        Console.WriteLine("Después de eliminar, el array es: " + string.Join(", ", inputArr));
    }
}