#include <stdio.h>

int X;
extern float Y;


int main(void)
{
	int x;
	float y;

	y = 10.56;
	x = y;

	printf("%d\t", x);
	printf("%f\t", Y);

	printf("%d\t", x >> 1);

	printf("%d\t", x << 1 == 20 ? x | 1 : x | 128);

	register i = x;
	i++;
	printf("%d\n", i);

	int l, u;
	printf("enter limit: ");
	scanf("%d", &l);
	for (u = 0; u != l; u++)
	{
		printf("%d ", u);
	}

	printf("\n\nGo: ");
	int m = 15;
	while (m)
	{
		printf("%d ", --m);
	}

	int a, *b;
	a = 99;
	b = &a;
	*b = 100;
	printf("\n%d\n", a);


}

float Y = 15.96;
