#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("number square cube\n");
	for (a = 0; a < 11; a++)
	{
		printf("%-7d", a);
		printf("%-7d", a*a);
		printf("%-7d\n", a*a*a);
	}

	system("pause");
	return 0;
}
