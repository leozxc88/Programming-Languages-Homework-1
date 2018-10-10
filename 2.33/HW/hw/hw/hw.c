#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e, f, g;
	printf("一天總里程數: ");
	scanf_s("%f", &a);
	printf("汽油一公升多少錢: ");
	scanf_s("%f", &b);
	printf("平均一公升可以行駛多少公里: ");
	scanf_s("%f", &c);
	printf("一天的停車費: ");
	scanf_s("%f", &d);
	printf("一天的過路費: ");
	scanf_s("%f", &e);
	printf("一天的總花費:%.4f\n", (a*b) / c + d + e);

	system("pause");
	return 0;
}
