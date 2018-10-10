#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int b;

	printf("Enter two numbers , and I will twll you whether the first \n");
	printf("is a multiple of the second or not : ");
	scanf_s("%d%d", &a, &b);

	if (a % b == 0)
	{
		printf("%d is a multiple of %d \n", a, b);
	}
	if (a % b != 0)
	{
		printf("%d is not a multiple of %d \n", a, b);
	}

	system("pause");
	return 0;
}