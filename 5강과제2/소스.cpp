#include <stdio.h>

int main()
{
	float kg, pound;

	printf("������ ����(kg)�� �Է��ϼ���: ");
	scanf_s("%f", &kg);

	pound = 0.453592 / kg;

	printf("%.3fkg�� %.3fpound �Դϴ�.\n", kg, pound);

	return 0;
}