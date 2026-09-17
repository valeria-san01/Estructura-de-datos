#include <iostream>
using namespace std;

int main()
{
    int inputArr[] = {11, 21, 31, 41, 51, 61};
    int n = sizeof(inputArr) / sizeof(inputArr[0]);
    int ele = 42;

    int nuevoArr[7]; 

    cout << "Antes de la inserción, el array es: " << endl;
    for (int j = 0; j < n; j++)
    {
        cout << inputArr[j] << " ";
    }

    nuevoArr[0] = ele;
    for (int j = 0; j < n; j++)
    {
        nuevoArr[j + 1] = inputArr[j];
    }

    cout << "Después de la inserción, el array es: " << endl;
    for (int j = 0; j < n + 1; j++)
    {
        cout << nuevoArr[j] << " ";
    }
    cout << endl;

    return 0;
}