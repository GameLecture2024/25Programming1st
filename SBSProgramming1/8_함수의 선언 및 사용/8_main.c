
// �̸��� ������ �ִ� Function - ���� �ð� 
// �Լ��� �����ϱ�? ó�� ������ ��ġ�� � ������� ��ȯ�Ǵ� ���
// �Լ��� �� ����? � �� ���� ���ߴ��� ������� ����� �� �ֵ��� ��������. 


// ��ȯ�� �Լ� �̸� (�Ű� ����); Head <<
//{  body ����  }					<<

// 


// ���� �Լ�.
// ���α׷��� ���۰� ���� ǥ���ϴ� ����� �ϰ� �ִ�.

// �Լ��� ���� �����ϰ� - ������ �Լ��� ���
// ��ȯŸ�� + �Լ��̸� ( �Ű� ����); - �۾��� ���ؼ��� �Լ��� �����ȴ�.

// �Լ��� ǥ���ϴ� ��Ŀ��� 4���� ����
// ��ȯ�� x ���ڰ� x
// ��ȯ�� o ���ڰ� x
// ��ȯ�� x ���ڰ� o
// ��ȯ�� o ���ڰ� o
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Math.h"

int main()
{
	int num1 = 1;
	int num2 = 2;

	Add(num1, num2); // statement ( ���'��') Add�Լ��� num1, num2�� ���ڷμ� �����϶�.
	Add(3, 5);		 //	Add�Լ��� 3 -> num1, 5 -> num2 Add�Լ��� �����϶�

	// scanf �Է¹��� ���� ��Ģ�������� ó���ϴ� �ڵ� ���� �� �ִ�.
	Minus(num1, num2);
	Multiply(2 , 3);
	Divide(100 , 0);
	
	// �÷��̾ �� ���� ���� ���� �ش� �ϴ� ���ڸ� ����ϰ� �ʹ�.
	int playerchoice = SelectPlayerBehavior(); // 1 ����, 2���� 3 ��
	printf("�÷��̾��� ���� �� : %d", playerchoice);
	// ĳ������ �ʱ� ���� ����
	SelectCharacter(10);

	// �Լ� �ȿ����� �ڵ尡 �� ������ �Ȱ� ������ main �ٸ� �ڵ�� ������ ��ġ�� �ʴ´�.

	return 0; // ���ӿ��� ������ ����� �;��. return�� �ϵ��� ����� �ȴ�.	� ���ڸ� �Է��ϸ� ���α׷��� �����ϰڴ�.
}

// ĳ���͸� �����ؼ� ������ �й��ϴٴ��� �ϴ� �Լ�
// Dice_ STR, DEX, INT, LUK �й�
// �� �ڵ� ���� �κ��� �ϼ�.
/*
*  ��ȯ���� void �Լ��� �� ����ұ�?
*  ��ȯ���� ������ �ڵ带 ������ �� �ִ°�? _ �ּ��� ������ �����ϸ�							   -Value vs -Reference
*  �Լ� �ȿ����� �ڵ尡 ������ �ǰ� �����δ� ������ �ȵǴ� ����� �ʿ��ϴ�. (ex) UI ���� ������ �����ִ� ����� ������ ����� ������ �����Ű��?
*/

// ���� ����Ʈ�� �й��ؼ� STR,DEX,INT,LUK �� ����� �ǵ��� ��������
// startPoint ���� �Ѵ� ���� �����ؼ��� �ȵ˴ϴ�.
// �й��� ������ main������ ���ɷ��� ��� �ؾ��ұ�? <���>
void SelectCharacter(int startPoint)
{
	printf("%d ���� ����Ʈ�� �й����ּ���\n");
	printf("STR : 0 DEX : 1 INT 2 LUK 3\n");
	int selectNumber = 0;
	int remainPoint = startPoint;
	int spendPoint;
	int STR = 0;
	int DEX = 0;
	int INT = 0;
	int LUK = 0;
	scanf("%d", &selectNumber);
	if (selectNumber == 0)
	{
		scanf("%d", &spendPoint);

		remainPoint = remainPoint - spendPoint;
		STR = STR + spendPoint;
	}

	// remainPoint < spendPoint �� ��츦 ��� Ż���� ���ΰ�? 
	// � Ÿ�ֿ̹� return�� �ϰ� �Ʒ� �ڵ带 ������ ���ΰ�? ���ǹ����� ǥ���� �ϼ���.
	printf(" STD : %d, DEX : %d, INT : %d, LUK : %D\n", STR, DEX, INT, LUK);

}

int SelectPlayerBehavior()
{
	// ����,����,��, ���� ����

	int num = 0;
	scanf("%d", &num);

	if(num == 1)
		return 1;  // ����                
	else if(num == 2)
		return 2;  // ���� 
	else if(num == 3)
		return 3;  // ��
}



