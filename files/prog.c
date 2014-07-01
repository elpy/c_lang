#include <stdio.h>

int main(void)
{
	FILE *f;

	if ((f = fopen("test1", "w+")) == NULL)
	{
		puts("Can't open the file: test1");
		return 1;
	}

	char c = 'A';
	fputc(c, f);
	fclose(f);

	if ((f = fopen("test2", "w+b")) == NULL)
	{
		puts("Can't open the file: test2");
		return 2;
	}

	int i;
	for (i = 0; i < 10; i++)
	{
		fwrite(&i, sizeof(int), 1, f);

		if (ferror(f))
		{
			puts("Writing int to file error");
			return 3;
		}
	}

	fclose(f);


	if ((f = fopen("test2", "rb")) == NULL)
	{
		puts("Can't open the file: test2");
		return 4;
	}

	while(!feof(f))
	{
		fread(&i, sizeof(i), 1, f);

		if (!feof(f))
			printf("%d ", i);
	}


	if ((f = fopen("test3", "w")) == NULL)
	{
		puts("Can't open the file: test3");
		return 5;
	}

	fprintf(f, "address of variable c: %p", &c);
	rewind(f);
	fputc('A', f);

	fclose(f);
	if (ferror(f))
	{
		puts("Closing file error: test3");
	}

	putchar('\n');

	return 0;
}
