namespace MiProyecto;
class Program
{
    static void Main(string[] args)
    {
        int[,] matriz2D = new int[3, 4];

        matriz2D[0, 1] = 15;

        int[,] matriz2DDatos = {
            { 1, 2, 3 },
            { 4, 5, 6 }
        };

        Console.WriteLine(matriz2DDatos[1, 2]);
    }
}