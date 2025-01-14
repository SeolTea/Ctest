#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int level = 0;
int arrayfish[6];
int* cursur;


void initData();
void printfFishes();
int checkFishAlive();

void decreaseWater(long elapsedTime);

int main(void) {
	long startTime = 0;
	long totalElapsedTime = 0;
	long prevElapsedTime = 0;
	int num;
	initData();
	startTime = clock();
	cursur = arrayfish;

	while (1) {
		printfFishes();
		printf("몇 번 어항에 물을 줄까요? (1~6) ");
		scanf_s("%d", &num);

		if (num < 1 || num > 6) { 
			printf("\n 입력값이 잘못됐습니다. \n"); 
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("\n\n > 총 경과 시간 : %ld초\n", totalElapsedTime);

		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("\\n > 최근 경과 시간 : %ld초\n", prevElapsedTime);

		decreaseWater(prevElapsedTime);

		if (cursur[num - 1] <= 0) {
			printf("%d번 어항의 물고기는 이미 죽었으므로 물을 주지 않습니다.\n", num);
		}
		else if (cursur[num - 1] > 100) {
			printf("%d번 어항은 물이 가득 찼습니다.\n", num);
		}
		else
		{
			printf("%d번 어항에 물을 줍니다.\n", num);
			cursur[num - 1] += 1;
		}

		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf("*** 축하합니다. %d 레벨에서 %d 레벨로 올랐습니다. ***\n\n", level - 1, level);
		}

		if (checkFishAlive() == 0) {
			printf("물고기가 모두 죽었습니다..\n\n");
			exit(0);
		}
		else {
			printf("물고기가 아직 살아있습니다.\n\n");
		}

		prevElapsedTime = totalElapsedTime;

		if (level == 5) {
			printf("\n\n 축하합니다. 최고 레벨을 달성했습니다. 게임을 종료합니다.\n\n");
			exit(0);
		}
	}

	return 0;
}

void initData() {
	level = 1;

	for (int i = 0; i < sizeof(arrayfish); i++) {
		arrayfish[i] = 100;
	}
}

void printfFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번 \n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < sizeof(arrayfish); i++) {
		printf("	%3d ", arrayfish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < sizeof(arrayfish); i++) {
		arrayfish[i] -= level * 3 * (int)elapsedTime;

		if (arrayfish[i] < 0) {
			arrayfish[i] = 0;
		}

	}

	
}

int checkFishAlive() {
	for (int i = 0; i < sizeof(arrayfish); i++) {
		if (arrayfish[i] > 0) {
			return 1;
		}
	}

	return 0;
}