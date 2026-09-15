import os

def main():
    # 1. Creamos una lista inicial de elementos
    tareas = ["Estudiar Python", "Hacer ejercicio", "Comprar despensa", "Pagar facturas"]
    
    continuar = True

    while continuar and len(tareas) > 0:
    
        os.system('cls' if os.name == 'nt' else 'clear')
        
        print("=== LISTA DE TAREAS ACTUALES ===")
        
        for i, tarea in enumerate(tareas):
           
            print(f"{i + 1}. {tarea}")

        entrada = input("\nIntroduce el número de la tarea que deseas eliminar (o 0 para salir): ")

        if entrada.isdigit():
            opcion = int(entrada)
            
            if opcion == 0:
                continuar = False
            else:
                indice_real = opcion - 1

                if 0 <= indice_real < len(tareas):
                    tarea_eliminada = tareas.pop(indice_real)
                    print(f"\n¡Éxito! Se ha eliminado: '{tarea_eliminada}'")
                else:
                    print("\nError: El número seleccionado no existe en la lista.")
        else:
            print("\nError: Por favor, introduce un número válido.")

        input("\nPresiona Enter para continuar...")

    os.system('cls' if os.name == 'nt' else 'clear')
    print("Programa finalizado. Tareas restantes:")
    for tarea in tareas:
        print(f"- {tarea}")

if __name__ == "__main__":
    main()