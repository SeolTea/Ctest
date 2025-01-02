#include <stdio.h>

int main(void) {

	//이중 반복문 or 중첩 반복문
	for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("	두 번째 반복문 : %d\n", j);
		}
	}

	//실습 1 : 구구단 출력

	for (int i = 2; i <= 9; i++) {
		printf("%d 단 출력\n", i);

		for (int j = 1; j <= 9; j++) {
			printf("	%d * %d = %d\n", i, j, i * j);
		}
	}

	//실습 2 : 별표 출력
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	//실습 3 : 오른쪽 정렬로 별표 출력

	for (int i = 5; i > 0; i--) {

		for (int j = 1; j < i; j++) {
			printf(" ");
		}

		for (int j = i; j <= 5; j++) {
			printf("*");
		}

		printf("\n");
	}


	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf(" ");
		}

		for (int k = 0; k <= i; k++) {
			printf("*");
		}

		printf("\n");
	}

	int floor = 0;

	printf("몇 층으로 쌓을까요? : ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor ; i++) {
		
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}

		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}

		printf("\n");

	}

	return 0;
}