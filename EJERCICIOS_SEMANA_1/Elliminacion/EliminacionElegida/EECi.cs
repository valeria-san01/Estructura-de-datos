using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<string> tareas = new List<string> { "Estudiar C#", "Hacer ejercicio", "Comprar despensa", "Pagar facturas" };

        bool continuar = true;

        while (continuar && tareas.Count > 0)
        {
            Console.WriteLine("=== LISTA DE TAREAS ACTUALES ===");
            for (int i = 0; i < tareas.Count; i++)
            {
                Console.WriteLine($"{i + 1}. {tareas[i]}");
            }

            Console.WriteLine("Introduce el número de la tarea que deseas eliminar (o 0 para salir):");
            string entrada = Console.ReadLine();

           
            if (int.TryParse(entrada, out int opcion))
            {
                if (opcion == 0)
                {
                    continuar = false;
                }
                else
                {
                   
                    int indiceReal = opcion - 1;

                    if (indiceReal >= 0 && indiceReal < tareas.Count)
                    {
                        string tareaEliminada = tareas[indiceReal];
                    
                        tareas.RemoveAt(indiceReal);
                        
                        Console.WriteLine($"¡Éxito! Se ha eliminado: '{tareaEliminada}'");
                    }
                    else
                    {
                        Console.WriteLine("Error: El número seleccionado no existe en la lista.");
                    }
                }
            }
            else
            {
                Console.WriteLine("Error: Por favor, introduce un número válido.");
            }

            Console.WriteLine("Presiona cualquier tecla para continuar...");
            Console.ReadKey();
        }

        Console.Clear();
        Console.WriteLine("Programa finalizado. Tareas restantes:");
        foreach (var tarea in tareas)
        {
            Console.WriteLine($"- {tarea}");
        }
    }
}