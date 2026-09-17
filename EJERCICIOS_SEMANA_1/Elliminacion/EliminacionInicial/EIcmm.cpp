#include <iostream>
using namespace std;

int main()
{
    int inputArr[] = {11, 21, 31, 41, 51, 61};
    int n = sizeof(inputArr) / sizeof(inputArr[0]);

    cout << "Antes de la eliminación, el array es:" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << inputArr[j] << " ";
    }

    int nuevoArr[5];
    for (int j = 0; j < n - 1; j++)
    {
        nuevoArr[j] = inputArr[j + 1];
    }

    cout << "Después de la eliminación, el array es:" << endl;
    for (int j = 0; j < n - 1; j++)
    {
        cout << nuevoArr[j] << " ";
    }
    cout << endl;

    return 0;
}