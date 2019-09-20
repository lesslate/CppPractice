#include <stdio.h>

int f(int n)
{
	int s;
	if (n <= 0)return 0;
	else if (n == 1)return 1;
	else {
		s = f(n - 1) + f(n - 2);
		return s;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
}

