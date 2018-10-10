#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float h;
	float w;
	float b;

	printf("Please enter your height in centimeters : ");
	scanf_s("%f", &h);
	printf("Please enter your weight in kilograms : ");
	scanf_s("%f", &w);

	b = w * 10000 / (h * h);

	if (b <18.5)
	{
		printf("You are underweight!!");
	}

	if (b >= 18.5 & b < 25)
	{
		printf("You are normal!!");
	}

	if (b >= 25 & b < 30)
	{
		printf("You are overweight!!");
	}

	if (b >= 30)
	{
		printf("You are obese!!");
	}

	system("pause");
	return 0;
}