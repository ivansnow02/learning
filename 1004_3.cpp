#include <cstdio>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 9; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}