using System;

class Program
{
    static int BusquedaSecuencial(int[] arreglo, int valorBuscado)
    {
        for (int i = 0; i < arreglo.Length; i++)
        {
            if (arreglo[i] == valorBuscado)
            {
                return i; 
            }
        }
        return -1; 
    }

    static void Main()
    {
        int[] numeros = { 12, 45, 7, 89, 23 };
        int resultado = BusquedaSecuencial(numeros, 89);

        Console.WriteLine(resultado); 
    }
}