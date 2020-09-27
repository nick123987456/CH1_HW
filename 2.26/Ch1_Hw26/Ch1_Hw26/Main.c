#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2,x;
	printf("Enter two integer:");
	scanf_s("%d%d", &num1, &num2);
	x = num1 % num2;
	if (x == 0)
	{
		printf("%d is a multiple of %d\n", num1,num2);
	}
	else
	{
		printf("%d is not a multiple of %\n", num1, num2);
	}
	system("pause");
	return 0;
}