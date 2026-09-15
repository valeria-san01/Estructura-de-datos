#include <iostream>
#include <vector>

int main() {
    std::vector<int> inputArr = {11, 21, 31, 41, 51, 61};
    
    std::cout << "Antes de eliminar, el array es: ";
    for (int x : inputArr) std::cout << x << " ";
    std::cout << "\n";

    inputArr.pop_back(); // Elimina el último elemento del vector

    std::cout << "Después de eliminar, el array es: ";
    for (int x : inputArr) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}