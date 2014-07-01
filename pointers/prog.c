#include <stdio.h>

int add(int x, int y);
int mul(int x, int y);

int main(void)
{
	int i, *p, **x;
	i = 9;
	p = &i;

	printf("i = %d\n", i);
	(*p)++;
	printf("*p++; i = %d\n", i);

	x = &p;
	**x = 15;

	printf("**x=...; i = %d\n", i);

	int a[3], c;
	a[0] = 23;
	p = a;
	*(++p) = 24;
	*(p + 1) = 25;

	for (c = 0; c != 3; c++)
	{
		printf("a[%d] = %d\n", c, a[c]);
	}


	void *pf = add;
	printf("func pointer add: %d\n", calc(60, 20, add));
	printf("func pointer mul: %d\n", calc(60, 20, mul));

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int mul(int x, int y)
{
	return x * y;
}

int calc(int a, int b, int (*p)(int x, int y))
{
	return p(a, b);
}
