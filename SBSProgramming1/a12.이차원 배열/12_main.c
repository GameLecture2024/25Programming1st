#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
*  - 배열의 활용
*  - 2차원 배열
*  - 게임에서 적용
*/

// 플레이어 조작
// 

// 플레이어 :  ! 
const char PLAYER = '!';    //  문자의 크기가 1인 기호만 대체 가능
// 몬스터   :  @
const char MONSTER = '@';
// 돈       :  $ 
const char MONEY = '$';
// 벽       :  #
const char WALL = '*';
#define MAPSIZE 20  


// STAGE별로 나눌려면 어떻게 처리해야 할까? -> 준비되어 있는 좌표들이 있다. 시작할 때 세팅. 출력하라

// 플레이어의 이동을 구현하는 코드 AI 구현해보세요.	C언어에서 windows.h 이동 코드 검색.

int main()
{
	// Text로 출력을 해야한다. -> 문자로 이루어져있는 배열

	int monsterX = 7;
	int monsterY = 7;

	// 10 char저장할 수 있는데 첫번째 데이터는 ! 저장하겠다.
	char STAGE[MAPSIZE][MAPSIZE * 2] =
	{
		""
	};
	// 이중 반복문을 사용하여 맵을 세팅한다.
	for (int y = 0; y < MAPSIZE; y++)
	{
		for (int x = 0; x < MAPSIZE * 2; x++)
		{
			// 패턴 1
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
	
	// 게임 로직. 5Frame 후에 몬스터가 x방향으로 1 움직였다. x+1

	//Initialize();
	//Setup();

	//while (1)
	//{
	//	// 게임이 실행되는 순서의 로직을 작성해야 한다.
	//
	//	// 초기화 : 데이터가 없으면 기본 값으로 설정하고, 초기 값으로 설정한다.
	//
	//	// 데이터가 변동 (게임 루프) Update
	//
	//	Update();
	//	Render(); // 화면에 그려주세요.
	//	Buffer(); // 포인터의 개념을 배워야 합니다.
	//
	//}

	// (3,5) 플레이어가 생성된다.
	STAGE[2][4] = PLAYER;
	// (5,7) 돈이 생성된다.
	STAGE[4][6] = MONEY;
	// (8,8) 몬스터가 생성된다.
	STAGE[monsterY][monsterX] = MONSTER;
	// 세팅된 맵을 화면에 보이게 하라
	for (int h = 0; h < MAPSIZE; h++)
	{
		printf("%s\n", STAGE[h]);
	}

	

}