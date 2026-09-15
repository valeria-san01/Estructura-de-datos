#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 1. Creamos un vector inicial con elementos
    vector<string> tareas = {"Estudiar C++", "Hacer ejercicio", "Comprar despensa", "Pagar facturas"};

    bool continuar = true;

    while (continuar && !tareas.empty()) {
        // Limpiar pantalla (compatible con la mayoría de terminales)
        cout << "\033[2J\033[1;1H"; 
        
        cout << "=== LISTA DE TAREAS ACTUALES ===" << endl;
        for (size_t i = 0; i < tareas.size(); i++) {
            // Mostramos el índice + 1 para que sea natural (1, 2, 3...)
            cout << i + 1 << ". " << tareas[i] << endl;
        }

        cout << "\nIntroduce el numero de la tarea que deseas eliminar (o 0 para salir): ";
        int opcion;
        
        // 2. Validamos que la entrada sea un número
        if (cin >> opcion) {
            if (opcion == 0) {
                continuar = false;
            } else {
                // 3. Convertimos la opción del usuario al índice real del vector (base 0)
                size_t indiceReal = opcion - 1;

                if (indiceReal < tareas.size()) {
                    string tareaEliminada = tareas[indiceReal];
                    
                    // 4. Eliminación elegida usando erase() y el iterador correspondiente
                    tareas.erase(tareas.begin() + indiceReal);
                    
                    cout << "\n¡Exito! Se ha eliminado: '" << tareaEliminada << "'" << endl;
                } else {
                    cout << "\nError: El numero seleccionado no existe en la lista." << endl;
                }
            }
        } else {
            cout << "\nError: Por favor, introduce un numero valido." << endl;
            cin.clear(); // Limpiamos el estado de error de cin
            cin.ignore(10000, '\n'); // Descartamos la entrada incorrecta
        }

        cout << "\nPresiona Enter para continuar...";
        cin.ignore();
        cin.get();
    }

    // Mostrar el resultado final
    cout << "\033[2J\033[1;1H";
    cout << "Programa finalizado. Tareas restantes:" << endl;
    for (const auto& tarea : tareas) {
        cout << "- " << tarea << endl;
    }

    return 0;
}