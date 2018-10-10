#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	printf("please enter three integer: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
	{
		printf("%d is the largest\n", a);
	}
	if (a < b && a < c)
	{
		printf("%d is the smallest\n", a);
	}
	if (b > a && b > c)
	{
		printf("%d is the largest\n", b);
	}
	if (b < a && b < c)
	{
		printf("%d is the smallest\n", b);
	}
	if (c > a && c > b)
	{
		printf("%d is the largest\n", c);
	}
	if (c < a && c < b)
	{
		printf("%d is the largest\n", c);
	}
	if (a > b && a > c)
	{
		printf("%d is the largest", a);
	}
	system("pause");
	return 0;
}
