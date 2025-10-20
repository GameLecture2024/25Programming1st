/*
*  날짜    : 2025-10-20
* 학습목표 : 헤더 파일을 생성하고 링킹 과정을 이해한다.
*/

// namespace , using문

#include <stdio.h> // 이름으로 생각. include : 포함하다. std + i + o .h
#include "GameInfo.h" // 어떻게 이 파일에 해당 경로에 있는지 아나요?
#include "game.h"
#include "4_main.h"
//#include <stdlib.h>	  // 키보드 방향키로 이동. 동적 할당. 메모리 관리 코드가 필요한가?
// 표준 입출력의 머리 정보가 담겨있는 코드를 포함하세요.
// #include	헤더를 명시해줘야한다.
// 전처리기	: 프로그램이 시작되기 전에 실행하라.
// Why? 프로그래밍 언어 - (CPU - 명령)
// 컴퓨터 어딘가에 설치되어 있는 Windows Kit 생성된 코드를 가져와서 사용하고 싶다. 
// Copy Paste 복사 붙여넣기.

// 컴퓨터에게 입력을 받는 코드가 필요하다. => 구현해놓은 헤더파일을 참조해야겠구나.
// 컴퓨터에게 입력을 감지하는 코드가 필요하다 => AI 코드를 작성. #include < > ... 

/*
*  #include <이름.h>  : 시스템 폴더에서 파일을 찾는다.
*  #include "이름.h"  : 프로젝트 안에서 파일을 찾는다.
*/



// 화면을 지우고 플레이어를 그리는 함수
void draw(int x, int y) {
    system("cls"); // 콘솔 화면 지우기
    gotoxy(x, y);
    printf("@");
}

int main()  // 프로그램의 시작을 알리고, 닫힌 중괄호 만나면 프로그램이 종료가 된다. 
{
    return KeyboardMove(); // 프로그램이 어떻게 실행이 되는지 분할하는 것이 좋다.
}

int KeyboardMove()
{
    printf("4강 시작!\n");
    //printf("최대 발사 가능한 총알수 : %d\n", bulletMaxCount);
    //printf("총알의 발사율 : %f\n", fireRate);
    printf("동전의 수 : %d\n", coin);

    int x = 10, y = 10; // 플레이어 초기 위치
    int key;

    // 콘솔 커서를 숨김
    CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);

    while (1) {
        draw(x, y);

        if (_kbhit()) { // 키 입력이 있는지 확인
            key = _getch(); // 키를 받음

            if (key == 224) { // 방향키 입력
                key = _getch(); // 실제 방향키 코드 받기
                switch (key) {
                case 72: // 위쪽 화살표
                    y--;
                    break;
                case 80: // 아래쪽 화살표
                    y++;
                    break;
                case 75: // 왼쪽 화살표
                    x--;
                    break;
                case 77: // 오른쪽 화살표
                    x++;
                    break;
                }
            }
            else if (key == 27) { // ESC 키로 종료
                break;
            }
        }
        Sleep(50); // 게임 속도 조절
    }

    return 0;
}
