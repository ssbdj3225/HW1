#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float d;
	float c;
	float a;
	float p;
	float t;
	float s;

	printf("Please enter your total driven per day in kilometers : ");
	scanf_s("%f", &d, "\n");
	printf("Please enter the cost per kiloliter of gasoline : ");
	scanf_s("%f", &c, "\n");
	printf("Please enter the average kilometers per kiloliter : ");
	scanf_s("%f", &a, "\n");
	printf("Please enter your parking fees per day : ");
	scanf_s("%f", &p, "\n");
	printf("Please enter your tolls per day : ");
	scanf_s("%f", &t, "\n");

	s = d / a * c + p + t;

	printf("Your driving cost today is %f . \n", s);

	system("pause");
	return 0;
}