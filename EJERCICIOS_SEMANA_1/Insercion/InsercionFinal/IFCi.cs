using System;
using System.Collections.Generic;

class Program {
    static void Main() {
        List<int> inputArr = new List<int> { 11, 21, 31, 41, 51, 61 };
        Console.WriteLine("Antes de insertar: " + string.Join(", ", inputArr));

        inputArr.Add(71); 

        Console.WriteLine("Después de insertar: " + string.Join(", ", inputArr));
    }
}