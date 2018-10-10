
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float kg, m, BMI;
	printf("please enter your weightInKilograms and heightInMeters:");
	scanf_s("%f %f", &kg, &m);
	BMI = kg / m / m;
	if (BMI < 18.5)
	{
		printf("UnderWeight\n");
	}
	if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("Normal\n");
	}
	if (BMI >= 25 && BMI <= 29.9)
	{
		printf("OverWeight\n");
	}
	if (BMI > 30)
	{
		printf("Obese\n");
	}

	system("pause");
	return 0;
}
