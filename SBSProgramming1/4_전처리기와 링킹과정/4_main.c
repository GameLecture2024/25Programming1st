/*
*  ��¥    : 2025-10-20
* �н���ǥ : ��� ������ �����ϰ� ��ŷ ������ �����Ѵ�.
*/

// namespace , using��

#include <stdio.h> // �̸����� ����. include : �����ϴ�. std + i + o .h
#include "GameInfo.h" // ��� �� ���Ͽ� �ش� ��ο� �ִ��� �Ƴ���?
#include "game.h"
#include "4_main.h"
//#include <stdlib.h>	  // Ű���� ����Ű�� �̵�. ���� �Ҵ�. �޸� ���� �ڵ尡 �ʿ��Ѱ�?
// ǥ�� ������� �Ӹ� ������ ����ִ� �ڵ带 �����ϼ���.
// #include	����� ���������Ѵ�.
// ��ó����	: ���α׷��� ���۵Ǳ� ���� �����϶�.
// Why? ���α׷��� ��� - (CPU - ���)
// ��ǻ�� ��򰡿� ��ġ�Ǿ� �ִ� Windows Kit ������ �ڵ带 �����ͼ� ����ϰ� �ʹ�. 
// Copy Paste ���� �ٿ��ֱ�.

// ��ǻ�Ϳ��� �Է��� �޴� �ڵ尡 �ʿ��ϴ�. => �����س��� ��������� �����ؾ߰ڱ���.
// ��ǻ�Ϳ��� �Է��� �����ϴ� �ڵ尡 �ʿ��ϴ� => AI �ڵ带 �ۼ�. #include < > ... 

/*
*  #include <�̸�.h>  : �ý��� �������� ������ ã�´�.
*  #include "�̸�.h"  : ������Ʈ �ȿ��� ������ ã�´�.
*/



// ȭ���� ����� �÷��̾ �׸��� �Լ�
void draw(int x, int y) {
    system("cls"); // �ܼ� ȭ�� �����
    gotoxy(x, y);
    printf("@");
}

int main()  // ���α׷��� ������ �˸���, ���� �߰�ȣ ������ ���α׷��� ���ᰡ �ȴ�. 
{
    return KeyboardMove(); // ���α׷��� ��� ������ �Ǵ��� �����ϴ� ���� ����.
}

int KeyboardMove()
{
    printf("4�� ����!\n");
    //printf("�ִ� �߻� ������ �Ѿ˼� : %d\n", bulletMaxCount);
    //printf("�Ѿ��� �߻��� : %f\n", fireRate);
    printf("������ �� : %d\n", coin);

    int x = 10, y = 10; // �÷��̾� �ʱ� ��ġ
    int key;

    // �ܼ� Ŀ���� ����
    CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);

    while (1) {
        draw(x, y);

        if (_kbhit()) { // Ű �Է��� �ִ��� Ȯ��
            key = _getch(); // Ű�� ����

            if (key == 224) { // ����Ű �Է�
                key = _getch(); // ���� ����Ű �ڵ� �ޱ�
                switch (key) {
                case 72: // ���� ȭ��ǥ
                    y--;
                    break;
                case 80: // �Ʒ��� ȭ��ǥ
                    y++;
                    break;
                case 75: // ���� ȭ��ǥ
                    x--;
                    break;
                case 77: // ������ ȭ��ǥ
                    x++;
                    break;
                }
            }
            else if (key == 27) { // ESC Ű�� ����
                break;
            }
        }
        Sleep(50); // ���� �ӵ� ����
    }

    return 0;
}
