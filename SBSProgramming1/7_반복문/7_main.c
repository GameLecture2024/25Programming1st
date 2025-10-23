/*
*  학습 목표 : for반복문과 while반복문의 문법 이해하기
*  실습 목표 : 지난 시간에 구현했던 코드를 반복문으로 표현하기
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>	// rand
#include <time.h>   // time
int main()
{
	// 반복할 수 있는 횟수를 직접 입력 받아서 사용하기
	// scanf (C언어에서 사용하는 방식)
	// c++ 입력 받는 함수
	// Csharp, py, java... Unreal, Unity

	// 1. for 반복문 (사용 예시)

	int num1 = 97;
	int loopCount = 10;
	printf("반복할 횟수를 작성해주세요 : ");                         // 입력을 받기 위해 콘솔창이 깜빡깜빡거린다.
	scanf("%d", &loopCount); // loopCount 주소 몇칸 어떻게 저장되어있다. 
	for (int i = 0; i < loopCount; i++)
	{
		printf("%c ", num1 + i);
		printf("%d ", i);
	}

	// 0 ~ 9 [ 10 ] 반복하고 싶은 숫자로 바꾸어보세요
	// 반복문 안의 내용을 작성해보세요 : a0 ~ a29  a0 b1 c2 d3
	// 변수를 사용해보세요

	// 2. while반복문 
	// while( 반복할 조건 참이면) 중괄호를 코드를 실행하라.
	printf("\n ============= while반복문 ============= \n");
	int num2 = 97;
	int j = 0;
	while (j < loopCount)
	{
		printf("%c ", num2 + j);
		printf("%d ", j);
		j++;
	}

	printf("\n");
	num2 = 97;
	j = 0;

	while (true)
	{
		printf("%c ", num2 + j);
		printf("%d ", j);
		j++;
		if (j >= loopCount)
		{
			break;
		}
	}

	// 랜덤 숫자 출력 
	srand(time(NULL)); // 난수 생성기 초기화
	int randomValue = rand() % 3 + 1;// 1 ~ 3 출력;
	printf("랜덤 값 : %d \n", randomValue);
}