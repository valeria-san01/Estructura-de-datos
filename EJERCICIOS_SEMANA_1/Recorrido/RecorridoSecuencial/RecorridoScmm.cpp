#include <iostream>
using namespace std;

int main()
{
    int arr[] = {40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Recorrido lineal (secuencial): ";
    cout << "Los elementos del array son: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}