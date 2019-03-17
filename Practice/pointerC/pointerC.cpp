#include <stdio.h>

int main()
{

	int num = 10;
	int *ip = &num;

	printf("%x %x %d \n", &*&ip, *&ip, **&ip);
	printf("%x %x %d \n", &ip, ip, *ip);

	int a = 0;
	int * pt = &a;

	*pt = 10;
	printf("%d %d \n", a, *pt);
}