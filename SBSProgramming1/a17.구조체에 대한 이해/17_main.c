
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "17_main.h"

// 컴퓨터에게 명령을 내리기 위해서다.
// 숫자만 읽을 수 있다.
// 자료형 변수. 정수(1,2,4), 실수(4,8)
// 메모리 안에 저장이 되어있다. 시작 주소를 알려주는 문법. 포인터.

// 플레이어의좌표 : int자료형 2개 저장할 수 있게 만들고 싶다.

typedef struct PlayerPos {
	int x;
	int y;
}PlayerPos;

typedef struct BattleEntity
{
	int hp;
	int ad;
	int ap;
	int p_def;
	int m_def;
}BattleEntity;

typedef struct Player {
	PlayerPos pos;
	BattleEntity battleEntity;
	// 구조체.
}Player;

// 포인터의 크기가 얼마인가요?	8

// Enemy 구조체를 직접 선언해보세요. Enemy 죽었을 때 주는 보상 Reward
// Enemy 전투요소

void PrintPos(PlayerPos player);

int main()
{
	// 배열 : 같은 타입의 자료형을 배열을 사용해서 표현할 수 있다.
	// 주소 한개로 어떻게 1 ~ n?>	
	// 배열을 포인터로 어떻게 설명할 수 있을까? 표현할 수 있을까?(상수 포인터)

	// 구조체. 자료형	 선언. 포인터. 배열.

	// 구조체 what? why?
	// 사용자 정의 자료형 User Defined Type	-> typedef
	// x좌표 y좌표

	printf("구조체 사용 이유 \n");
	int x = 0;
	int y = 0;

	PlayerPos p1 = {4, 9 }; // 초기화(Initialize)
	PrintPos(p1);

	Player player;
	PlayerPos startPos = { 0,0 };
	player.pos = startPos;
	BattleEntity battleEntity = { 1,2,3,4,5 };
	player.battleEntity = battleEntity;

	printf("플레이어의 전투 요소 : %d, %d, %d ,%d ,%d", player.battleEntity.ad, player.battleEntity.ap, player.battleEntity.hp, player.battleEntity.m_def,
		player.battleEntity.p_def);

	// 플레이어, Enemy

	printf("구조체 포인터 사용 이유 \n");
	printf("구조체의 크기 : %d\n", sizeof(Player*));

	// 기능을 확장하기 위해서 player에 구조체를 계속 추가한다. 예를 들어서 economy, battle, ...craft...

}


void PrintPos(PlayerPos player) 
{
	printf("플레이어의 현재 위치 : [%d,%d]\n", player.x, player.y);
}
