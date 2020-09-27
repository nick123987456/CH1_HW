#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double num1, num2,num3;
	printf("Enter your height(m):");
	scanf_s("%lf", &num1);
	printf("Enter your weight(kg):");
	scanf_s("%lf", &num2);
	num3 = num2 / num1 / num1;
	printf("Your BMI is:%lf\n", num3);
	if (num3 >= 30)
	{
		printf("You are obase\n");
	}
	else if (num3 >= 25)
	{
		printf("You are overweight\n");
	}
	else if (num3 >= 18.5)
	{
		printf("You are normal\n");
	}
	else
	{
		printf("You are underweight\n");
	}
	system("pause");
	return 0;
}