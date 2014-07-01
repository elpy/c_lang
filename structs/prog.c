#include <stdio.h>
#include <math.h>

struct emp
{
	char *name;
	unsigned int age;
} f;

union tran
{
	unsigned int x;
	char y[4];
} t;

void display(struct emp *p);

int main(void)
{
	struct emp s;
	f.name = "Anthony";
	f.age = 30;

	s.name = "Monte";
	s.age = 60;

	display(&f);
	display(&s);


	printf("union size: %d\n", (int)sizeof(t));
	t.x = pow(2, 32);
	printf("t.x = %u, t.y = %x %x %x %x\n", t.x, t.y[3], t.y[2], t.y[1], t.y[0]);

	return 0;
}

void display(struct emp *p)
{
	printf("%d years-old employee %s\n", p->age, p->name);
}
