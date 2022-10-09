#include <cstdio>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 19; j > 2 * i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}