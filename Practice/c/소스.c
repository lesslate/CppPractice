#include <stdio.h>

void increase();

int main()
{
	increase();
	increase();
	increase();
	return 0;
}

void increase()
{
	static int x = 0;
	int y = 0;

	x++;
	y++;

	printf("�������� x:%d, �������� y:%d \n", x, y);
}