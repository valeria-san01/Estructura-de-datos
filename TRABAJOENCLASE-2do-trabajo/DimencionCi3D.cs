int[,,] matriz3D = new int[2, 3, 4];

matriz3D[0, 1, 2] = 99;

int[,,] matriz3DDatos = {
    { 
        { 1, 2 },
        { 3, 4 }
    },
    { 
        { 5, 6 },
        { 7, 8 }
    }
};

Console.WriteLine(matriz3DDatos[1, 0, 1]); 