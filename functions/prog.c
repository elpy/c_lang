#include <stdio.h>

void func(int a, ...);

int main(void)
{
	func(5, 44, 75);

	return 0;
}

void func(int a, ...)
{
	printf("params: %d\n", a);
}
