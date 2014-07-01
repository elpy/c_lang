#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[10], *p, i;


	for (i = 0; i != 10; ++i, ++p)
		a[i] = rand();

	p = a;

	printf("enumerate by index:\n");
	for (i = 0; i != 10; ++i)
		printf("%d ", a[i]);

	printf("enumerate by pointer:\n");
	for (i = 0; i != 10; ++i, ++p)
		printf("%d ", *p);


	char s[] = "I prefer R.";

	printf("\n%s", s);
	char *c;
	c = s;
	char d = *c;
	printf("\nWho? %s", &d);

	c += 9;
	*c = 'C';
	printf("\nWhat? %s\n", &s[9]);




	return 0;
}

