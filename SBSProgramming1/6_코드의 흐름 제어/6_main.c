// ���� ���� ��
// �ǽ� ��ǥ : �ٸ� �̴� ���� ���� �����ϰ� �ڵ带 �ۼ��غ��� ��

#include <stdio.h>
#include <stdbool.h>
// (1)���� ���� �� ������ �ѱ۷� ǥ���غ�����
// - ����, ��ǻ��, 
// ����,����,�� �߿��� �ϳ��� �������ּ���.
// ��� : ��ǻ�Ͱ� ������ �´°� ���� ����� �޶�����.

/*
*  ���α׷� ȥ�ڼ� �ۼ��� �� �����ϴ� ����
*  1. �ѱ۷� ���� � ���� �������� �ּ����� ǥ���غ�����.
*  2. �ѱ۷� ǥ���� ������ ��ǻ�Ϳ��� ��� ������� ���� �ۼ��� �غ�����.
*  2-1. Ư���� ����, ����� �����ͼ� ����Ѵ�, ������ ���� �κ�
*  2-2. ����� �ؼ� ����� �������Ѻ���
*/

/*
*  ������ ǥ���غ�����. ������ �¸��ϸ� ������ ���� 1�� ������Ű�� ��ǻ�Ͱ� �¸��ϸ� ��ǻ���� ������ 1�� ������Ű����
* 
*  ���װ� �ִ� �� ����. ��ǻ�Ͱ� ������ �´��� �˰� �ʹ�. <- �ݿ�. ��ǻ�Ϳ� �÷��̾��� �ൿ�� ����ϴ� �ڵ带 ��������.
*  Hint-> playerChoice, computerChoice �������� �˰� �ִ�. ���ڷ� ����Ǿ� �ִ� ���� �������� �ѱ۷� �ٽ� ����ϴ� �ڵ带 �ۼ��ϼ���.
*/


/*
*  ���� ���� Levelup System
*/

/*
*  ���� ���߱� ����
*  -> �ѱ۷� �����ϱ� ���ؼ� ������ �����غ���
*/

/*
*  ���������������� �ϼ��ϱ� ���� �ʿ��� ���� ����
*  1. ������ �Է� ����� ����.
*  2. ��ǻ�Ͱ� ������ ����� ����մϴ�. -> ����
*  3. ���ھ�. => �ݺ�. 3�� ���� ����ϸ� �¸��Ѵ�.
* 
*  ������ ���� �۾� ����Ʈ.
*  -> ���� ������ �� �ִ� ����
*/

int main()
{
	// ���ǹ� ��� �׽�Ʈ
	// ����Ŭ�� ����� ���� ����.
	bool value = 5 < 3;	// ���̸� value  ���ڰ� 0�̸� ������ �����̴�. ���ڰ� 1�̸� ������ ���̴�.

	// if(); ����Ŭ���� ����������

	if (false) // ���� - ����	
	{
		printf("������ ����Ǿ���!\n");
	}
	else if(false)       // ���� - ��, ����
	{

	}
	else if(false)
	{

	}
	else // ���α׷��� �̻��� ������ �߻����� ���� ��� �������� ó���϶�
	{
		printf("�������� ���� ����� �߻��߽��ϴ�.\n");
	}

	printf("���� ���� �� ����!\n");

	// �÷��̾ ������ ����� ����
	// 1. ���� 2. ���� 3. �� (������ ���)
	int playerChoice = 1; // �÷��̾�� ������ �����߽��ϴ�.
	int computerChoice = 1; // ��ǻ�͵� ������ �����߽��ϴ�.
	int playerScore = 0; 
	int computerScore = 0;

	// ���� -> �̰��, ����, ����.
	// ���� - ����->��  "1"->"3"
	// ���� - ����->���� "1"->"1"
	// ���� - ����->���� "1"->"2"
	if (playerChoice == 1 && computerChoice == 3)
	{
		// ������ ������ ������ 1�� ������Ű�� �� -> playerScore
		playerScore = playerScore + 1;
		printf("������ �¸��߽��ϴ�\n");
	}	
	else if (playerChoice == 1 && computerChoice == 1)
	{
		printf("������ �����ϴ�.\n");
	}
	else if (playerChoice == 1 && computerChoice == 2)
	{
		computerScore = computerScore + 1;
		printf("������ �й��߽��ϴ�.\n");
	}
	else {
		// computerChoice���� 0���� �۰ų� ���ų�, 3���� ū ���
		if(computerChoice <= 0 && computerChoice > 3)
			printf("���ܰ� �߻��߽��ϴ�.\n");
	}
	
	// �÷��̾ ���� ->	 2�� 1�̱�� 3�� 2�̱�� 1�� 3�̱��
	if (playerChoice == 2 && computerChoice == 1)
	{
		playerScore = playerScore + 1;
		printf("������ �¸��߽��ϴ�\n");
	}
	else if (playerChoice == 2 && computerChoice == 2)
	{
		printf("������ �����ϴ�.\n");
	}
	else if (playerChoice == 2 && computerChoice == 3)
	{
		computerScore = computerScore + 1;
		printf("������ �й��߽��ϴ�.\n");
	}
	else {
		if (computerChoice <= 0 && computerChoice > 3)
			printf("���ܰ� �߻��߽��ϴ�.\n");
	}
	// �÷��̾ �� ->
	if (playerChoice == 3 && computerChoice == 1)
	{
		computerScore = computerScore + 1;
		printf("������ �й��߽��ϴ�.\n");
	}
	else if (playerChoice == 3 && computerChoice == 2)
	{
		playerScore = playerScore + 1;
		printf("������ �¸��߽��ϴ�\n");
	}
	else if (playerChoice == 3 && computerChoice == 3)
	{
		printf("������ �����ϴ�.\n");
	}
	else
	{
		if (computerChoice <= 0 && computerChoice > 3)
			printf("���ܰ� �߻��߽��ϴ�.\n");
	}

	const char* playerCharacter = "����";		// ���ڸ� ������ �� �ִ� ����
	const char* computerCharacter = "��";

	if (playerChoice == 1)
	{
		playerCharacter = "����";
	}
	else if(playerChoice == 2)
	{
		playerCharacter = "����";
	}
	else if (playerChoice == 3)
	{
		playerCharacter = "��";
	}

	if (computerChoice == 1)
	{
		computerCharacter = "����";
	}
	else if (computerChoice == 2)
	{
		computerCharacter = "����";
	}
	else if (computerChoice == 3)
	{
		computerCharacter = "��";
	}

	printf("���� 1�� ������ ���մϴ�. ���� 2�� ������ ���մϴ�. ���� 3�� ���� ���մϴ�.\n");
	// �÷��̾��� ���� : ����, ��ǻ���� ���� : ?  ���
	printf("�÷��̾��� ���� : %s , ��ǻ���� ���� : %s\n", playerCharacter, computerCharacter);
	// �÷��̾��� ���� vs ��ǻ���� ���� ���
	printf("�÷��̾��� ���� : %d vs ��ǻ���� ���� : %d\n", playerScore , computerScore);
}