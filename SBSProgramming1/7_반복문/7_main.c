/*
*  �н� ��ǥ : for�ݺ����� while�ݺ����� ���� �����ϱ�
*  �ǽ� ��ǥ : ���� �ð��� �����ߴ� �ڵ带 �ݺ������� ǥ���ϱ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>	// rand
#include <time.h>   // time
int main()
{
	// �ݺ��� �� �ִ� Ƚ���� ���� �Է� �޾Ƽ� ����ϱ�
	// scanf (C���� ����ϴ� ���)
	// c++ �Է� �޴� �Լ�
	// Csharp, py, java... Unreal, Unity

	// 1. for �ݺ��� (��� ����)

	int num1 = 97;
	int loopCount = 10;
	printf("�ݺ��� Ƚ���� �ۼ����ּ��� : ");                         // �Է��� �ޱ� ���� �ܼ�â�� ���������Ÿ���.
	scanf("%d", &loopCount); // loopCount �ּ� ��ĭ ��� ����Ǿ��ִ�. 
	for (int i = 0; i < loopCount; i++)
	{
		printf("%c ", num1 + i);
		printf("%d ", i);
	}

	// 0 ~ 9 [ 10 ] �ݺ��ϰ� ���� ���ڷ� �ٲپ����
	// �ݺ��� ���� ������ �ۼ��غ����� : a0 ~ a29  a0 b1 c2 d3
	// ������ ����غ�����

	// 2. while�ݺ��� 
	// while( �ݺ��� ���� ���̸�) �߰�ȣ�� �ڵ带 �����϶�.
	printf("\n ============= while�ݺ��� ============= \n");
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

	// ���� ���� ��� 
	srand(time(NULL)); // ���� ������ �ʱ�ȭ
	int randomValue = rand() % 3 + 1;// 1 ~ 3 ���;
	printf("���� �� : %d \n", randomValue);
}