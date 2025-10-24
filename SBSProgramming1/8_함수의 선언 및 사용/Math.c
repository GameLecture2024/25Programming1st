#include <stdio.h>
#include "Math.h"	// " "  < > 시스템 이름이 잇는지 찾고 없으면 프로젝트 찾아요

void Add(int num1, int num2)
{
	int result = num1 + num2;
	printf("두 수를 더한 값 : %d + %d = %d\n", num1, num2, result);
}

void Multiply(int num1, int num2)
{
	int result = num1 * num2;
	printf("두 수를 곱한 값 : %d * %d = %d\n", num1, num2, result);
}

void Divide(int num1, int num2)
{
	if (num2 == 0) {
		// (1) 코드를 더이상 실행하지 않고 종료해주세요.
		// (2)뒤에 있는 값으로 반환한다.
		return;
	}

	int result = num1 / num2;
	printf("두 수를 나눈 값 : %d / %d = %d\n", num1, num2, result);
}

void Minus(int num1, int num2)
{
	int result = num1 - num2;
	printf("두 수를 뺀 값 : %d - %d = %d\n", num1, num2, result);
}