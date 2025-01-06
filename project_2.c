#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1;

	// 직접 코딩

	printf("%d\n", num);

	int answer = 0;

	for (int chance = 5; chance > 0; chance--) {
		printf("숫자를 입력하세요. (남은 기회는 %d 번 남았습니다.) : \n", chance);
		scanf_s("%d", &answer);

		if (num == answer) {
			printf("정답입니다 !\n");
			break;
		}
		else if (num > answer) {
			printf("UP ↑\n");
		}
		else if (num < answer) {
			printf("Down ↓\n");
		}
		else {
			printf("알 수 없습니다. \n");
			break;
		}
	}

	if (num != answer) {
		printf("실패하였습니다.\n");
	}


	// 책 답지

	printf("정답 : %d\n", num);

	answer = 0;
	int chance = 5;

	while (1) {
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞춰보세요.(1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN ↓ \n\n");
		}
		else if (answer < num) {
			printf("UP ↑ \n\n");
		}
		else if (answer == num) {
			printf("정답입니다 \n\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생하였어요 \n\n");
		}

		if (chance == 0) {
			printf("모든 기회를 사용했어요. 아쉽게도 실패했습니다.\n");
			printf("정답은? : %d\n", num);
			break;
		}
	}

	return 0;

}