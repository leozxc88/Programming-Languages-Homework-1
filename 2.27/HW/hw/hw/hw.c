#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, k, j, z;
	for (i = 1; i < 6; i++)
	{
		for (j = 5 - i; j > 0; j--)
		{
			printf(" ");
		}
		for (z = i; z < 5 * i - 3; z = z + 2)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
