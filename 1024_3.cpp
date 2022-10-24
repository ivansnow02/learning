
#include <iostream>
using namespace std;
int main()
{
    int i, j, m, k = 0, cnt = 0;
    int a[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 1, m = 0; j < 4; j++)
        {
            if (a[i][j] > a[i][m])
                m = j;
        }
        for (j = 1, k = 0; j < 3; j++)
        {
            if (a[j][m] < a[k][m])
                k = j;
        }
        if (i == k)
        {
            cnt++;
            printf("[%d][%d] = %d is Saddle Point", i , m , a[i][m]);
        }
    }
    if (cnt == 0)
        cout << "No Saddle Point";
}