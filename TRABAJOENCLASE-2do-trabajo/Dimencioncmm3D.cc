#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> vector2D(3, std::vector<int>(4, 0));
    vector2D[0][1] = 15;

    std::vector<std::vector<std::vector<int>>> vector3D(
        2, std::vector<std::vector<int>>(
            3, std::vector<int>(4, 0)
        )
    );
    vector3D[0][1][2] = 99;

    std::cout << vector2D[0][1] << std::endl; 
 
    std::cout << vector3D[0][1][2] << std::endl;

    return 0;
}