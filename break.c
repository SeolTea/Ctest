#include <stdio.h>

//난수 생성에 필요 전처리기 지시문	
#include <time.h>	// 시간 관련 함수를 모아놓은 헤더 파일
#include <stdlib.h>	// 난수 생성과 문자열 변환등을 수행하는 함수들을 모아놓은 헤더파일

int main(void) {

	//break 문 : 이후 문장을 수행하지 않고, 반복문을 탈출한다.
	for (int i = 1; i <= 30; i++) {
		if (i > 5) {
			printf("나머지 학생들은 집에 가세요. \n");
			break;
		}
		printf("%d번 학생은 조별 과제를 준비하세요. \n", i);
	}


	printf("\n\n");

	//Continue 문 : 이후 문장을 수행하지 않으나, 반복문을 탈출하지 않고 다음 반복으로 넘어감
	for (int i = 1; i <= 30; i++) {

		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다. \n", i);
				continue;
			}

			printf("%d번 학생은 조별 과제를 준비하세요. \n", i);
			
		}
		
	 }

	printf("\n\n");

	// 1분 퀴즈
	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			continue;
		}
		printf("%d\n",i);
	}


	printf("\n\n");

	// 난수 생성
	// 형식 : rand() % 범위 지정 수 + 시작 수 - 범위 지정 수는 랜덤으로 뽑고 싶은 숫자의 범위를 지정하는 역할 , 시작 수는 시작하고자 하는 수
	// 난수를 뽑을때는 항상 초기화를 해줘야 함

	//srand(time(NULL)); // 난수 초기화 - time() 함수는 기본적으로 unsigned int 형태이기에 형변환을 선언해주면 좋음
	// srand((unsigned int)time(NULL)); // 형변환 선언
	//rand() % 3 + 1;// 1부터 시작 범위는 3까지 ( 1 ~ 3 까지의 난수 )

	printf("난수 초기화 이전... \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);		// 초기화를 하지 않고 실행 시 같은 난수가 계속 생성 - 초기화 필요
	}

	printf("난수 초기화 이후... \n");
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);		// 초기화를 하지 않고 실행 시 같은 난수가 계속 생성 - 초기화 필요
	}

	//switch 문
	printf("\n\n");

	srand(time(NULL));
	int i = rand() % 3;

	switch (i) {				// break 문을 집어넣지 않아 case 에 맞는 숫자를 찾고 그 숫자 밑으로 전부 출력해버림
	case 0 :
		printf("가위\n");
	case 1:
		printf("바위\n");
	case 2:
		printf("보\n");
	default :
		printf("몰라요.\n");
	}

	printf("\n\n");

	switch (i) {
	case 0:
		printf("가위\n");
		break;
	case 1:
		printf("바위\n");
		break;
	case 2:
		printf("보\n");
		break;
	default:
		printf("몰라요.\n");
		break;
	}


	// 실습 : 청소년 나이 구분하기
	printf("\n\n");

	int age = 9;

	if (age >= 8 && age <= 13) {
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생입니다.\n");
	}
	else {
		printf("청소년이 아닙니다.\n");
	}

	// Switch 문으로 변경
	// Switch 문은 조건이 아닌 값을 넣는 것이므로 일일히 넣어줘야함.

	switch (age) {
	case 8:
		printf("초등학생입니다.\n");
		break;
	case 9:
		printf("초등학생입니다.\n");
		break;
	case 10:
		printf("초등학생입니다.\n");
		break;
	case 11:
		printf("초등학생입니다.\n");
		break;
	case 12:
		printf("초등학생입니다.\n");
		break;
	case 13:
		printf("초등학생입니다.\n");
		break;

	case 14:
		printf("중학생입니다.\n");
		break;
	case 15:
		printf("중학생입니다.\n");
		break;
	case 16:
		printf("중학생입니다.\n");
		break;

	case 17:
		printf("고등학생입니다.\n");
		break;
	case 18:
		printf("고등학생입니다.\n");
		break;
	case 19:
		printf("고등학생입니다.\n");
		break;
	default :
		printf("청소년이 아닙니다.\n");
	}


	//허나 이 방법은 너무 노가다가 심함
	// break 를 걸지 않으면 그 밑에 case 들 전부 출력되는 특성을 이용해 간소화 가능

	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
		printf("초등학생입니다.\n");
		break;

	case 14:
	case 15:
	case 16:
		printf("중학생입니다.\n");
		break;

	case 17:;
	case 18:
	case 19:
		printf("고등학생입니다.\n");
		break;
	default:
		printf("청소년이 아닙니다.\n");
	}


	// 1분 퀴즈

	int n = 2;

	switch (n) {
	case 1: printf("사과\n");
	case 2: printf("딸기\n");
	case 3: printf("수박\n");
	}

	return 0;
}