#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 10; a++)
	{
		b = a * a;
		c = a * a * a;

		printf("%d        %d        %d", a, b, c);
		printf("\n");
	}
	system("pause");
	return 0;
}