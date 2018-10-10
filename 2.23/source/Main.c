#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("Enter three numbers , and i will tell you \n");
	printf("the biggest one and the smallest one : ");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b & a > c)
	{
		printf("%d is the biggest one \n", a);
	}
	if (b > a & b > c)
	{
		printf("%d is the biggest one \n", b);
	}
	if (c > b & c > a)
	{
		printf("%d is the biggest one \n", c);
	}
	if (a < b & a < c)
	{
		printf("%d is the smallest one \n", a);
	}
	if (b < a & b < c)
	{
		printf("%d is the smallest one \n", b);
	}
	if (c < b & c < a)
	{
		printf("%d is the smallest one \n", c);
	}
	if (a == b & b == c)
	{
		printf("three numbers are the same \n");
	}
	if (a == b & b > c)
	{
		printf("two numbers are the same , and bigger than %d \n", c);
	}
	if (b == c & b > a)
	{
		printf("two numbers are the same , and bigger than %d \n", a);
	}
	if (a == c & a > b)
	{
		printf("two numbers are the same , and bigger than %d \n", b);
	}
	if (a == b & b < c)
	{
		printf("two numbers are the same , and smaller than %d \n", c);
	}
	if (b == c & b < a)
	{
		printf("two numbers are the same , and smaller than %d \n", a);
	}
	if (a == c & a < b)
	{
		printf("two numbers are the same , and smaller than %d \n", b);
	}

	system("pause");
	return 0;
}