import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 1. Creamos una lista dinámica inicial
        ArrayList<String> tareas = new ArrayList<>();
        tareas.add("Estudiar Java");
        tareas.add("Hacer ejercicio");
        tareas.add("Comprar despensa");
        tareas.add("Pagar facturas");

        Scanner scanner = new Scanner(System.in);
        boolean continuar = true;

        while (continuar && !tareas.isEmpty()) {
            // Limpiar pantalla de forma genérica
            System.out.print("\033[H\033[2J");
            System.out.flush();

            System.out.println("=== LISTA DE TAREAS ACTUALES ===");
            for (int i = 0; i < tareas.size(); i++) {
                // Mostramos el índice + 1 para que sea natural para el usuario (1, 2, 3...)
                System.out.println((i + 1) + ". " + tareas.get(i));
            }

            System.out.println("\nIntroduce el número de la tarea que deseas eliminar (o 0 para salir):");

            // 2. Validamos que la entrada sea un entero
            if (scanner.hasNextInt()) {
                int opcion = scanner.nextInt();

                if (opcion == 0) {
                    continuar = false;
                } else {
                    // 3. Convertimos la opción del usuario al índice real (base 0)
                    int indiceReal = opcion - 1;

                    if (indiceReal >= 0 && indiceReal < tareas.size()) {
                        // 4. Eliminación elegida usando remove(index)
                        // remove() devuelve el elemento que fue eliminado
                        String tareaEliminada = tareas.remove(indiceReal);
                        
                        System.out.println("\n¡Éxito! Se ha eliminado: '" + tareaEliminada + "'");
                    } else {
                        System.out.println("\nError: El número seleccionado no existe en la lista.");
                    }
                }
            } else {
                System.out.println("\nError: Por favor, introduce un número válido.");
                scanner.next(); // Limpiamos el valor incorrecto del scanner
            }

            System.out.println("\nPresiona Enter para continuar...");
            scanner.nextLine(); // Limpiar buffer pendiente
            scanner.nextLine(); // Pausa hasta que el usuario presione Enter
        }

        // Mostrar resultado final
        System.out.print("\033[H\033[2J");
        System.out.println("Programa finalizado. Tareas restantes:");
        for (String tarea : tareas) {
            System.out.println("- " + tarea);
        }
        
        scanner.close();
    }
}