#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��ǻ�;� Ư�� �����͸� �����ϴ� ������ ������� "�޸�" 
// 0�Ǵ�1 �ܴ̿� ��ǻ�ʹ� �˾Ƶ��� �� ����. ���α׷��� �� ���� ����.

/*
*   ����,  �Լ�
*   ������ �� �ʿ��մϱ�? ������ �����ϴ� �ڷ����� ������ ������ϴ�. 
*   �Լ��� �� �ʿ��մϱ�? ��ɾ �ۼ� statement(��ɹ�) ����Ŭ�� ����� ������ ��� ����� �˸���.
*   
*   ������ �� �� �ѱ۷� ����(Pseudo code)	ǥ���϶�.
*   ��ɹ��� ���ٷ� ǥ���� ���մϴ�. -> �ڵ带 �ؼ��ϱ⵵ �����, �ݺ������� ����ϴ� �ڵ带 ǥ���ϱ� �����.
*/

/*
*  ����Ŭ�� -> ��ɹ��� ����Ǵ� ���� ǥ���Ѵ�. �ڵ��� ���� ǥ���Ѵ�.
*  �߰�ȣ   -> ����(Scope)�� ǥ���Ѵ�. {   } ���� �ǹ� : ���Ϸ� ǥ���� �ϱ� ����� �κ��� �ϳ��� �ǹ̷� ǥ���ϱ� ����.
*  �Լ� -> ��ɹ����� ����. ������ ǥ���ؾ� �Ѵ�. �Լ��� head => �Լ��� �����ϱ� ���� ǥ�� ���
*  ���� -> (�ڷ���) �����̸�; �������� �߰�ȣ�� ����� �� ������? => ������ ������ ǥ���ؾ� �ϴ� ��찡 ������? => �迭 int[] nums = {1,2,3,4,5};
*/

void StatDevideFunc();

int  ReturnStatAmount();
void ModifyStatValue(int baseAmount);


/*
*  �Լ� ������ �����͸�(���� ����) �Լ� �ۿ� ����� �� �ְ� ������. 
*/



int main()
{	
	// �ڵ带 �Ѱ��ش�.
	int INT = 1;
	int DEX = 1;
	int LUK = 1;
	int STR = 1;
	//StatDevideFunc();

	printf("main�Լ� �ȿ� �ִ� LUK�� �� : %d\n", LUK);

	// �ڵ带 �м�
	// �ݺ��ǰ� �ִ� ���¸� �����غ�����

	// ���, ���ͷ� , ������

	ModifyStatValue(INT); // Q. � ���� ������ �ѹ��� ǥ���� ���մϴ�.
	ModifyStatValue(DEX);
	ModifyStatValue(LUK);
	ModifyStatValue(STR);

	//int modifyINT = ReturnStatAmount(INT, 1);
	//printf("������ ���� INT ���� :  %d\n", modifyINT);
	//
	//int modifyDEX = ReturnStatAmount(DEX, 1);
	//printf("������ ���� DEX ���� :  %d\n", modifyDEX);
	//
	//int modifyLUK = ReturnStatAmount(LUK, 1);
	//printf("������ ���� LUK ���� :  %d\n", modifyLUK);
	//
	//int modifySTR = ReturnStatAmount(STR, 1);
	//printf("������ ���� STR ���� :  %d\n", modifySTR);
}

void ModifyStatValue(int baseAmount)
{
	int modifyValue = ReturnStatAmount(baseAmount, 1);
	printf("������ ���� INT ���� :  %d\n", modifyValue);
}

// �ǽ����� : 8���� �ڵ带 �Լ��� �����غ�����.

// Q1. main���� LUK Func���� LUK�� �ִ�. ��ǻ�Ͱ� ���� �̸��� ������ �� ��?

// Q1-2. �̸��� ���� ��ġ�� �ʰ� ����� �Ǵ°� �ƴѰ���? -> Player, Enemy �̸��� ������ ����� �� �ְ� ���� �� ������? -> ������ ǥ��.

// Q2. StatDevidFunc�Լ��� ������ �� Local�� ������ �Ǿ StatDevidFunc�� ������ ǥ���ϰ� �ִ�. �Լ��� ���ᰡ �Ǿ��� �� LUK �������.
// main() 'LUK = 1'  Stat 'Luk = 3'   ���� / �� ����  // Stack 
// ���� ������ ����� �� ������ �ִ� �����͸� ��� �Ҹ��ŵ�ϴ�. ���� �����͸� ������ ������ � ���� �Ͼ���? ��罺ũ�� ��ǻ�Ϳ� ������ ������ �� �ڵ����� �ҷ����� �ý���
// �ڵ� ��������.	 ������ ����Ǹ� �ڵ����� �޸𸮸� ����ش�. 
// ����� : ����) �޸� ������ �����ϰ� ��ǻ�� ������ ��������� - ����) �޸𸮿� �����صξ��ٰ� ����� ���� ������? => �� ���� ����ü(Struct)


// Q1. main���� LUK Func���� LUK�� �ִ�. ��ǻ�Ͱ� ���� �̸��� ������ �� ��?
// Q1-2. �̸��� ���� ��ġ�� �ʰ� ����� �Ǵ°� �ƴѰ���?
// Q2. StatDevidFunc�Լ��� ������ �� Local�� ������ �Ǿ StatDevidFunc�� ������ ǥ���ϰ� �ִ�.

// �Լ��� �����ϴ� �ܰ�
void StatDevideFunc() // �鿩���⸦ �ڵ����� �ϴ� ��ɾ�. (ctrl + k) + (ctrl + d)
{
	// ����ġ  �÷��̾��� ����, ������ ����� ������ �� �߰����� ������ �ش�. => �Ͻ������� �޸𸮸� �����صξ��ٰ� ����� �ʹ�.

	// alt ���� ���·� �巡���� ������ ȭ��ǥ ���Ʒ��� �����̱�
	int LUK;
	//scanf("%d", &LUK);
	//printf("num�� �� : %d\n", LUK);

	//StatDevideFunc();

	// �ڵ尡 ������ LuK�� �Ҵ�Ǿ� �ִ� �޸𸮸� ��ǻ�Ϳ��� ����� ��ɾ�.
	// �ݺ���, ���ǹ�, �Լ� => �ڵ带 ������ �� �ִ�.
	// ���� �ý���. ����Ʈ5 -> STR,INT,LUK,DEX �����ؼ� ������ �ο��Ѵ�.
}	// <- ����Ŭ���� ����. for�ݺ���   for(int i=0; i<10;i++);{ }
    // �߰�ȣ �� �ڵ��� ���� ǥ���ϱ� �����̴�.

int ReturnStatAmount(int baseAmount, int itemStatAmount)
{
	int result = 0;
	//���ӿ� ���� (Easy, Normal, Hard)  
	int levelCount = 1;
	// if Easy 1, Normal 2 , Hard 3
	int itemWeight = 10;
	// ������ ������ ���� ���� 
	// �������� �ֻ��� ������ ���� ��� ���� ��ȯ�Ѵ�.
	
	result = levelCount * (itemStatAmount * 10) + baseAmount;

	return result;
}