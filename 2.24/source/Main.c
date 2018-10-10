#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;

	printf("Enter one number , and I will tell you \n");
	printf("it is Odd or Even : ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("%d is Even \n", a);
	}
	if (a % 2 == 1)
	{
		printf("%d is Odd \n", a);
	}

	system("pause");
	return 0;
}