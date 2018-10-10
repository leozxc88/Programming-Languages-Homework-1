#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	/*1*/
	int a, b;
	for (a = 0; a < 9; a++)
	{
		for (b = 0; b < 9; b++)
		{
			if (a == 0 || a == 8)
			{
				printf("*");
			}
			else
			{
				if (b == 0 || b == 8)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	/*2*/
	int c,d;
	for (c = 0; c < 9; c++)
	{
		for (d = 0; d < 9; d++)
		{
			if (c == 0 || c == 8)
			{
				if (2 < d && d < 6)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if (c == 1 || c == 7)
			{
				if (d == 1 || d == 7)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if (1 < c && c < 7)
			{
				if (d == 0 || d == 8)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	/*3*/
	int i, k, j, z;
	for (i = 1; i < 4; i++)
	{
		for (j = 3 - i; j > 0; j--)
		{
			printf(" ");
		}
		for (z = i; z < 5 * i - 3; z = z + 2)
		{
			printf("*");
		}
		printf("\n");
	}
	for (k = 0; k < 6; k++)
	{
		printf("  *  \n");
	}
	/*4*/
	int l, e, o;
	for (l = 0; l < 9; l++)
	{
		for (e = 0; e < 9; e++)
		{
			if (l == 0 || l == 8)
			{
				if (e == 4)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if (l == 1 || l == 7)
			{
				if (e == 3 || e == 5)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if (l == 2 || l == 6)
			{
				if (e == 2 || e == 6)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if (l == 3 || l == 5)
			{
				if (e == 1 || e == 7)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if (l == 4)
			{
				if (e == 0 || e == 8)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}