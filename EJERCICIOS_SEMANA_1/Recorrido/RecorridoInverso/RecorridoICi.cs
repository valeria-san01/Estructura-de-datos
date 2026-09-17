using System;
class program
{
    static void Main(string [] args)
    {
        int [] arr = {40, 50, 60, 70, 80, 90};
        Array.Reverse(arr);
        Console.WriteLine("Recorrido Inverso: ");
        Console.WriteLine("Los elementos del array son: ");

        foreach (int elemento in arr)
        {
            Console.Write(elemento + " ");
        }
    }
}