#include <stdio.h>
#include "Math.h"	// " "  < > �ý��� �̸��� �մ��� ã�� ������ ������Ʈ ã�ƿ�

void Add(int num1, int num2)
{
	int result = num1 + num2;
	printf("�� ���� ���� �� : %d + %d = %d\n", num1, num2, result);
}

void Multiply(int num1, int num2)
{
	int result = num1 * num2;
	printf("�� ���� ���� �� : %d * %d = %d\n", num1, num2, result);
}

void Divide(int num1, int num2)
{
	if (num2 == 0) {
		// (1) �ڵ带 ���̻� �������� �ʰ� �������ּ���.
		// (2)�ڿ� �ִ� ������ ��ȯ�Ѵ�.
		return;
	}

	int result = num1 / num2;
	printf("�� ���� ���� �� : %d / %d = %d\n", num1, num2, result);
}

void Minus(int num1, int num2)
{
	int result = num1 - num2;
	printf("�� ���� �� �� : %d - %d = %d\n", num1, num2, result);
}