#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	printf("number\tsquare\tcube\n");
	for (x = 0; x <= 10; x++)
	{
		printf("%d\t%d\t%d\n", x, x*x, x*x*x);
	}
	system("pause");
	return 0;
}