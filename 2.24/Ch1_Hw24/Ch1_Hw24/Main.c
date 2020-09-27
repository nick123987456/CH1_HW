#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,x;
	printf("Enter one integer:");
	scanf_s("%d", &num1);
	x = num1 % 2;
	if (x == 0)
	{
		printf("%d is even", num1);
	}
	else
	{
		printf("%d is odd", num1);
	}
	system("pause");
	return 0;
}