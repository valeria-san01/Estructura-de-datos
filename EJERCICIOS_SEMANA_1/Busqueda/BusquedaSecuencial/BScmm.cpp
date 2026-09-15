#include <iostream>

using namespace std;

int main()
{
    int arr1[5];
    int req;
    int location = -5; 
    
    cout << "Ingrese 5 numeros para almacenar en el arreglo:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }
    
    cout << endl;
    
    cout << "Ingrese el numero que desea buscar: ";
    cin >> req;
    cout << endl;
    
    for(int w = 0; w < 5; w++)
    {
        if(arr1[w] == req)
        {
            location = w; 
            break;        
    }
    
    if(location != -5)
    {
        cout << "El numero se encuentra en la posicion: " << location + 1 << endl;
    }
    else
    {
        cout << "El numero no se encuentra en el arreglo" << endl;
    }

    return 0;
}