#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int z;
	printf("please enter an integer: ");
	scanf_s("%d", &z);
	if (z % 2 == 1)
	{
		printf("this integer is odd\n");
	}
	else
	{
		printf("this interger is even\n");
	}
	system("pause");
	return 0;
}
