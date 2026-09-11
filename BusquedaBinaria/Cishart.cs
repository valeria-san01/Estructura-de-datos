List<int> a = new List<int> {};
int n, target, steps =0;
 
void initData()
{
    n=100;

    for (int i = 0; i < n; i+=2)
    {
        a.Add(i);
    }
    Console.WriteLine("Objetivo: ");
    target = int.Parse(Console.ReadLine()!);
}

int bSeach(List<int> a, int target)
{
    int left = 0;
    int right = a.Count - 1;
    steps = 0;

    while (left <= right)
    {
        steps++;
        int mid = (left + right) / 2;

        if (a[mid] == target)
        {
            return mid; 
        }
        if (a[mid] < target)
        {
            left = mid + 1; 
        }
        else
        {
            right = mid - 1; 
        }
    }

    return -1;

initData();
int resultado = bSeach(a, target);
Console.WriteLine("Encontrado en el índice: " + resultado);
Console.WriteLine("Pasos tomados: " + steps);

}