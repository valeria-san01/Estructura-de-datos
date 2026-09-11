#include <iostream>
using namespace std;

int main() {
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int inf = 0, sup = 9, mitad;
    int dato = 5;
    char band = 'F';

    while(inf <= sup) {
        mitad = (inf + sup) / 2;
        
        if(numeros[mitad] == dato) {
            band = 'V';
            break;
        }
        if(numeros[mitad] > dato) {
            sup = mitad - 1; 
        } else {
            inf = mitad + 1; 
        }
    }

    if(band == 'V') {
        cout << "Encontrado en el indice: " << mitad << endl;
    } else {
        cout << "No encontrado" << endl;
    }

    return 0;
}