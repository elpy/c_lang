#include <stdio.h>

int main(void)
{
	char c, l;
	char s[255];
	int i;

	puts("type char: ");
	c = getchar();
	printf("typed:");
	putchar(c);

	puts("\none more time: ");
	scanf("\n%c%s%d%*c", &c, s, &i);
	printf("typed: %c\n%7c%s\n%7c%d\n", c, ' ', s, ' ', i);

	puts("type your name: ");
	gets(s);
	puts("typed: ");
	puts(s);
	puts("bye!");

	printf("%c - %p\n%#x\n", c, &c, 54654);


	return 0;
}
