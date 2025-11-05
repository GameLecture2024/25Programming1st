
#include "Sample.h"

void SelectJob(JOB* myJOBptr)
{
	int input = 0;

	printf("종족을 선택하세요 (0 : , 1 : 2 : )\n");
	scanf("%d", &input);

	*myJOBptr = input;
	JOB tempJob = *myJOBptr;

	if (tempJob == 전사)
	{
		printf("전사를 선택했습니다.\n");
	}
	else
	{
		printf("잘못된 입력값 입니다.\n");
	}						   
}

void SetPlayerStat(JOB selectJob, int* hpPtr, int* atkPtr)
{
    // JOB 열거형을 사용하여 각 직업별 스탯을 설정해보세요.

	switch (selectJob)
	{
	case 전사:
		*hpPtr = 10;
		*atkPtr = 5;
		break;
	case 마법사:
		*hpPtr = 3;
		*atkPtr = 10;
		break;
	case 힐러:
		*hpPtr = 15;
		*atkPtr = 2;
		break;
	default:
		printf("정의되지 않은 직업입니다.\n");
		break;
	}
}