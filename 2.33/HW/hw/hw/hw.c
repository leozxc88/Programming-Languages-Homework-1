#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e, f, g;
	printf("�@���`���{��: ");
	scanf_s("%f", &a);
	printf("�T�o�@���ɦh�ֿ�: ");
	scanf_s("%f", &b);
	printf("�����@���ɥi�H��p�h�֤���: ");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O: ");
	scanf_s("%f", &d);
	printf("�@�Ѫ��L���O: ");
	scanf_s("%f", &e);
	printf("�@�Ѫ��`��O:%.4f\n", (a*b) / c + d + e);

	system("pause");
	return 0;
}
