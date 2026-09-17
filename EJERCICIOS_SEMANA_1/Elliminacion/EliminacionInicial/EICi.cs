using System;
using System.Collections.Generic;

class Program {
    static void Main() {
        List<int> numeros = new List<int> { 10, 20, 30, 40 };
        
        // Eliminar el primer elemento (índice 0)
        numeros.RemoveAt(0);
        
        Console.WriteLine(string.Join(", ", numeros)); // Salida: 20, 30, 40
    }
}