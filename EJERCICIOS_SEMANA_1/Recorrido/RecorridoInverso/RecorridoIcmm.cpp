 #include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Recorrido inverso del array:" ;
    cout << "Los elementos del array en orden inverso son: ";

    for (int i = n  - 1; i >= 0; i--)
     {
        cout << arr [i] << " ";
    }
    cout << endl;

    return 0;
}