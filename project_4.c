#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 15
int main(void) {
	srand(time(NULL));
	
	int treatment = rand() % 4;

	int cntShowBottle = 0;
	int prevCntShowBottle = 0;

	printf("\n\n === 자라나라 머리카락 게임 === \n\n");
	
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0 };
		do {
			cntShowBottle = rand() % 2 + 2;
		} while (prevCntShowBottle == cntShowBottle);

		prevCntShowBottle = cntShowBottle;
		printf(" > %d번째 테스트 : ", i);

		int isIncluded = 0;

		for (int j = 1; j <= cntShowBottle; j++) {
			int randBottle = rand() % 4;

			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;

				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}
			else {
				j--;
			}
		}
	}
	return 0;
}
