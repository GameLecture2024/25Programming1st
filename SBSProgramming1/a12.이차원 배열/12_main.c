#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
*  - �迭�� Ȱ��
*  - 2���� �迭
*  - ���ӿ��� ����
*/

// �÷��̾� ����
// 

// �÷��̾� :  ! 
const char PLAYER = '!';    //  ������ ũ�Ⱑ 1�� ��ȣ�� ��ü ����
// ����   :  @
const char MONSTER = '@';
// ��       :  $ 
const char MONEY = '$';
// ��       :  #
const char WALL = '*';
#define MAPSIZE 20  


// STAGE���� �������� ��� ó���ؾ� �ұ�? -> �غ�Ǿ� �ִ� ��ǥ���� �ִ�. ������ �� ����. ����϶�

// �÷��̾��� �̵��� �����ϴ� �ڵ� AI �����غ�����.	C���� windows.h �̵� �ڵ� �˻�.

int main()
{
	// Text�� ����� �ؾ��Ѵ�. -> ���ڷ� �̷�����ִ� �迭

	int monsterX = 7;
	int monsterY = 7;

	// 10 char������ �� �ִµ� ù��° �����ʹ� ! �����ϰڴ�.
	char STAGE[MAPSIZE][MAPSIZE * 2] =
	{
		""
	};
	// ���� �ݺ����� ����Ͽ� ���� �����Ѵ�.
	for (int y = 0; y < MAPSIZE; y++)
	{
		for (int x = 0; x < MAPSIZE * 2; x++)
		{
			// ���� 1
			if (y == 0 || y == MAPSIZE - 1)
			{
				if (x == MAPSIZE * 2 - 1)
				{
					STAGE[y][x] = '\0';
				}
				else {
					STAGE[y][x] = WALL;
				}
			}
			else
			{
				if (x == MAPSIZE * 2 - 1)
				{
					STAGE[y][x] = '\0';
				}
				else if (x == 0 || x == MAPSIZE * 2 - 2)
				{
					STAGE[y][x] = WALL;
				}
				else {
					STAGE[y][x] = ' ';
				}				
			}
		}
	}
	
	// ���� ����. 5Frame �Ŀ� ���Ͱ� x�������� 1 ��������. x+1

	//Initialize();
	//Setup();

	//while (1)
	//{
	//	// ������ ����Ǵ� ������ ������ �ۼ��ؾ� �Ѵ�.
	//
	//	// �ʱ�ȭ : �����Ͱ� ������ �⺻ ������ �����ϰ�, �ʱ� ������ �����Ѵ�.
	//
	//	// �����Ͱ� ���� (���� ����) Update
	//
	//	Update();
	//	Render(); // ȭ�鿡 �׷��ּ���.
	//	Buffer(); // �������� ������ ����� �մϴ�.
	//
	//}

	// (3,5) �÷��̾ �����ȴ�.
	STAGE[2][4] = PLAYER;
	// (5,7) ���� �����ȴ�.
	STAGE[4][6] = MONEY;
	// (8,8) ���Ͱ� �����ȴ�.
	STAGE[monsterY][monsterX] = MONSTER;
	// ���õ� ���� ȭ�鿡 ���̰� �϶�
	for (int h = 0; h < MAPSIZE; h++)
	{
		printf("%s\n", STAGE[h]);
	}

	

}