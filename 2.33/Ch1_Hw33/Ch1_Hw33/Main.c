#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3, num4, num5;
	double x;
	printf("Enter five integer:\n");
	printf("a) Total niles driven per day:");
	scanf_s("%d", &num1);
	printf("b) Cost per gallon of gasoline:");
	scanf_s("%d", &num2);
	printf("c) Average miles per gallen:");
	scanf_s("%d", &num3);
	printf("d) Parking fees per day:");
	scanf_s("%d", &num4);
	printf("e) Tolls per day:");
	scanf_s("%d", &num5);
	x = (double)num1 / num3 * num2 + num4 + num5;
	printf("Total cost:%lf", x);
	system("pause");
	return 0;







}