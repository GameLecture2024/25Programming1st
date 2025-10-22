// 가위 바위 보
// 실습 목표 : 다른 미니 게임 직접 설계하고 코드를 작성해보는 것

#include <stdio.h>
#include <stdbool.h>
// (1)가위 바위 보 게임을 한글로 표현해보세요
// - 유저, 컴퓨터, 
// 가위,바위,보 중에서 하나를 선택해주세요.
// 결과 : 컴퓨터가 무엇을 냈는가 따라서 결과가 달라진다.

/*
*  프로그램 혼자서 작성할 때 권장하는 순서
*  1. 한글로 먼저 어떤 것을 구현할지 주석으로 표현해보세요.
*  2. 한글로 표현한 내용을 컴퓨터에게 어떻게 명령할지 직접 작성을 해보세요.
*  2-1. 특별한 문법, 헤더를 가져와서 사용한다, 오류가 나는 부분
*  2-2. 출력을 해서 결과를 성공시켜보기
*/

/*
*  점수를 표현해보세요. 유저가 승리하면 유저의 점수 1점 증가시키고 컴퓨터가 승리하면 컴퓨터의 점수를 1점 증가시키세요
* 
*  버그가 있는 것 같다. 컴퓨터가 무엇을 냈는지 알고 싶다. <- 반영. 컴퓨터와 플레이어의 행동을 출력하는 코드를 만들어보세요.
*  Hint-> playerChoice, computerChoice 무엇인지 알고 있다. 숫자로 저장되어 있는 값을 유저에게 한글로 다시 출력하는 코드를 작성하세요.
*/


/*
*  스팀 게임 Levelup System
*/

/*
*  숫자 맞추기 게임
*  -> 한글로 구현하기 위해서 로직을 생각해보기
*/

/*
*  가위바위보게임을 완성하기 위해 필요한 구현 사항
*  1. 유저의 입력 기능이 없다.
*  2. 컴퓨터가 정해진 결과만 출력합니다. -> 랜덤
*  3. 스코어. => 반복. 3점 먼저 취득하면 승리한다.
* 
*  앞으로 남은 작업 리스트.
*  -> 당장 구현할 수 있는 순위
*/

int main()
{
	// 조건문 출력 테스트
	// 세미클론 명령이 끝이 났다.
	bool value = 5 < 3;	// 참이면 value  숫자가 0이면 조건이 거짓이다. 숫자가 1이면 조건이 참이다.

	// if(); 세미클론을 넣지마세요

	if (false) // 가위 - 가위	
	{
		printf("조건이 실행되었다!\n");
	}
	else if(false)       // 가위 - 보, 바위
	{

	}
	else if(false)
	{

	}
	else // 프로그램이 이상한 현상이 발생했을 때는 모두 나머지로 처리하라
	{
		printf("예상하지 못한 결과가 발생했습니다.\n");
	}

	printf("가위 바위 보 게임!\n");

	// 플레이어가 선택한 결과를 저장
	// 1. 가위 2. 바위 3. 보 (임의의 약속)
	int playerChoice = 1; // 플레이어는 가위를 선택했습니다.
	int computerChoice = 1; // 컴퓨터도 가위를 선택했습니다.
	int playerScore = 0; 
	int computerScore = 0;

	// 가위 -> 이겼다, 비겼다, 졌다.
	// 조건 - 가위->보  "1"->"3"
	// 조건 - 가위->가위 "1"->"1"
	// 조건 - 가위->바위 "1"->"2"
	if (playerChoice == 1 && computerChoice == 3)
	{
		// 실제로 유저의 점수를 1점 증가시키는 것 -> playerScore
		playerScore = playerScore + 1;
		printf("유저가 승리했습니다\n");
	}	
	else if (playerChoice == 1 && computerChoice == 1)
	{
		printf("유저가 비겼습니다.\n");
	}
	else if (playerChoice == 1 && computerChoice == 2)
	{
		computerScore = computerScore + 1;
		printf("유저가 패배했습니다.\n");
	}
	else {
		// computerChoice값이 0보다 작거나 같거나, 3보다 큰 경우
		if(computerChoice <= 0 && computerChoice > 3)
			printf("예외가 발생했습니다.\n");
	}
	
	// 플레이어가 바위 ->	 2은 1이긴다 3는 2이긴다 1은 3이긴다
	if (playerChoice == 2 && computerChoice == 1)
	{
		playerScore = playerScore + 1;
		printf("유저가 승리했습니다\n");
	}
	else if (playerChoice == 2 && computerChoice == 2)
	{
		printf("유저가 비겼습니다.\n");
	}
	else if (playerChoice == 2 && computerChoice == 3)
	{
		computerScore = computerScore + 1;
		printf("유저가 패배했습니다.\n");
	}
	else {
		if (computerChoice <= 0 && computerChoice > 3)
			printf("예외가 발생했습니다.\n");
	}
	// 플레이어가 보 ->
	if (playerChoice == 3 && computerChoice == 1)
	{
		computerScore = computerScore + 1;
		printf("유저가 패배했습니다.\n");
	}
	else if (playerChoice == 3 && computerChoice == 2)
	{
		playerScore = playerScore + 1;
		printf("유저가 승리했습니다\n");
	}
	else if (playerChoice == 3 && computerChoice == 3)
	{
		printf("유저가 비겼습니다.\n");
	}
	else
	{
		if (computerChoice <= 0 && computerChoice > 3)
			printf("예외가 발생했습니다.\n");
	}

	const char* playerCharacter = "가위";		// 문자를 저장할 수 있는 변수
	const char* computerCharacter = "보";

	if (playerChoice == 1)
	{
		playerCharacter = "가위";
	}
	else if(playerChoice == 2)
	{
		playerCharacter = "바위";
	}
	else if (playerChoice == 3)
	{
		playerCharacter = "보";
	}

	if (computerChoice == 1)
	{
		computerCharacter = "가위";
	}
	else if (computerChoice == 2)
	{
		computerCharacter = "바위";
	}
	else if (computerChoice == 3)
	{
		computerCharacter = "보";
	}

	printf("숫자 1은 가위를 뜻합니다. 숫자 2는 바위를 뜻합니다. 숫자 3은 보를 뜻합니다.\n");
	// 플레이어의 선택 : 가위, 컴퓨터의 선택 : ?  출력
	printf("플레이어의 선택 : %s , 컴퓨터의 선택 : %s\n", playerCharacter, computerCharacter);
	// 플레이어의 점수 vs 컴퓨터의 점수 출력
	printf("플레이어의 점수 : %d vs 컴퓨터의 점수 : %d\n", playerScore , computerScore);
}