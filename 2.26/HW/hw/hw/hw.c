#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int z, x;
	printf("please enter two integer: ");
	scanf_s("%d %d", &z, &x);
	if (z%x == 0)
	{
		printf("%d is a mutiple of %d\n", z, x);
	}
	else
	{
		printf("%d is not a mutiple of %d\n", z, x);
	}

	system("pause");
	return 0;
}
