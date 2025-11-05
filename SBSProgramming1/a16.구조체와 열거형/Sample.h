#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

#ifndef JOB_H

#define JOB_H

typedef enum JOB
{
	전사,
	마법사,
	힐러,
	정의되지않음 = 100
}JOB;

#endif // !1

void SelectJob(JOB* myJOBptr);

void SetPlayerStat(JOB selectJob, int* hpPtr, int* atkPtr);