#include <stdio.h>

int main(void) {
	int age = 15;

	if (age > 19) {
		printf("성인입니다.\n");
	}
	else {
		printf("청소년 입니다.\n");
	}

	int age2 = 25;

	if (age2 >= 17 && age2 <= 19) {
		printf("고등학생입니다.\n");
	}
	else if (age2 >= 14 && age2 <= 16) {
		printf("중학생입니다.\n");
	}
	else if (age2 >= 8 && age2 <= 13) {
		printf("초등학생입니다.\n");
	}
	else {
		printf("청소년이 아닙니다.\n");
	}

	// && : AND 연산자
	// == : 비교 연산자 or 관계 연산자

	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;

	if (a == b && c == d) {
		printf("a와 b가 같고 c와 d도 같습니다 \n");
	}
	else {
		printf("값이 서로 다릅니다.\n");
	}

	//|| : OR 연산자

	int e = 10;
	int f = 10;
	int g = 12;
	int h = 13;

	if (e == f || g == h) {
		printf("a와 b 또는 c와 d의 값이 같습니다\n");
	}

	// 1분 퀴즈

	int bread = 1;
	int coffee = 3;

	if (bread > 0) {
		printf("빵은 조리시간이 5분 이상 걸릴 수 있습니다.\n");
	}
	if (coffee > 0) {
		printf("매장 안에서는 일회용 컵을 사용할 수 없습니다.\n");
	}
	printf("주문이 완료되었습니다.\n");


	return 0;
}