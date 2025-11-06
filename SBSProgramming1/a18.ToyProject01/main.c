// 포인터 공부 어떻게 하면 되나요?
// 1. 정의 -> 무엇인가? 왜 써야하는가?
// 2. & , int*,  *변수이름    각 연산자가 어떻게 쓰는가? 
// 3. 포인터와 배열의 관계
// 4. 포인터를 매개변수로 사용하는 함수를 만들어보세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

void PlayerControl()
{

}
void Update()
{

}
void Render()
{

}

bool Quit()
{
	// 게임이 종료될 조건을 Bool 반환하는 함수로 만들어서
	int input = 0;
	//scanf("%d", &input);
	if (input == 5)	 // 조건이 만족하면 종료하라.
	{		
		return true;
	}
	else {
		return false;
	}
}

// Player좌표 구조체. x값과 y값을 수정할 수 있게 만들어보세요.

typedef struct PlayerPos
{
	int x;
	int y;
}PlayerPos;

int main()
{
	PlayerPos playerPos = { 0,0 };

	while (1) // 게임 루프
	{
		// 로직
		// 조작하는 함수 playerhandle playercontrol
		// Update (갱신하다)
		// 렌더 (데이터 변경되면 그 것을 실행하라)

		// 플레이어의 이동.

		// 키보드 화살표 방향키로 이동하기.

		unsigned char input = 0;  // 화살표 225  

		if (_kbhit()) // 키보드를 입력하면 True
		{
			input = _getch();

			if (input == 224 || input == 0)
			{
				input = _getch(); // 두 번째 문자 읽기
				switch (input) {
				case 72: // ↑
					// 플레이어의 현재 좌표를 -1 해주세요
					playerPos.y -= 1;
					printf("위쪽\n");
					break;
				case 80: // ↓
					// 플레이어의 현재 좌표를 +1 해주세요
					printf("아래쪽\n");
					break;
				case 75: // ←
					// 플레이어의 현재 좌표를 x-1 해주세요
					printf("왼쪽\n");
					break;
				case 77: // →
					// 플레이어의 현재 좌표를 x+1 해주세요
					printf("오른쪽\n");
					break;
				}
			}
		}

		

		PlayerControl();
		Update();
		Render();

		if (Quit())
		{
			break;
		}
    }
}