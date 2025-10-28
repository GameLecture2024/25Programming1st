#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
const static int MAPSIZE;
//int playerX = 3;
//int playerY = 5;
//int MapOriginX;
//int MapOriginY;



bool CheckPlayerIsBoundary();	          // <stdbool.h>
int  CalculateBoundaryX(int MapOriginX);
int  CalculateBoundaryY(int MapOriginY);