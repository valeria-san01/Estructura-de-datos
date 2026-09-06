#include <iostream>

int main() {
    
    int matriz2D[3][4];
    matriz2D[0][1] = 15;

    int matriz2DDatos[2][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };

    std::cout << matriz2DDatos[1][2] << std::endl; 

    int matriz3D[2][3][4];
    matriz3D[0][1][2] = 99;

    int matriz3DDatos[2][2][2] = {
        { {1, 2}, {3, 4} }, 
        { {5, 6}, {7, 8} }  
    };

    std::cout << matriz3DDatos[1][0][1] << std::endl; 

    return 0;
}