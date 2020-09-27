#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1[2], num2,x,y;
	printf("Enter three integers:");
	scanf_s("%d%d%d", &num1[0], &num1[1], &num1[2]);

	for (x = 1; x >= 0; x--)
	{
		for (y = 0; y <= x; y++)
		{
			if (num1[y] > num1[y + 1]) 
			{
				num2 = num1[y];
				num1[y] = num1[y + 1];
				num1[y + 1] = num2;
			}
		}
	}
	printf("The largest interger:%d\n", num1[2]);
	printf("The largest smallest:%d\n", num1[0]);
	system("pause");
	return 0;
}