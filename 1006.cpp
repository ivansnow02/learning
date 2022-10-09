#include <bits/stdc++.h>
using namespace std;
void IsTriangle(int a, int b, int c)
{
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		printf("%d,%d,%d不能构成三角形", a, b, c);
	}
	else
	{
		if (a == b && b == c && c == a)
		{
			printf("%d,%d,%d能构成等边三角形", a, b, c);
		}
		else if (a == b || b == c || a == c)
		{
			printf("%d,%d,%d能构成等腰三角形", a, b, c);
		}
	}
}
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	IsTriangle(a, b, c);
}
