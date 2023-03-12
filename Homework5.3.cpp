#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int n, m;
    cout << "Введите количество строк и столбцов двумерного массива (через пробел): " << endl;
    cin >> n >> m;

    int** mas = new int* [n];
    for (int i = 0; i < n; i++)
    {
        mas[i] = new int[m];
    }
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int r = rand() % 10 - 2;
            mas[i][j] = r;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5i", mas[i][j]);   
        }
        cout << endl;
    }
}
