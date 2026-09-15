#include <iostream>
#include <vector>

int main() {
    std::vector<int> inputArr = {11, 21, 31, 41, 51, 61};
    
    std::cout << "Antes de insertar: ";
    for (int x : inputArr) std::cout << x << " ";
    std::cout << "\n";

    inputArr.push_back(71); // Inserta el 71 al final del vector

    std::cout << "Después de insertar: ";
    for (int x : inputArr) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}