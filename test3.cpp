#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 1, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        sum *= i;
        i++;
    }
    printf("%d\n", sum);
}
