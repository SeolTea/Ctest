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
		printf("�� �� ���׿� ���� �ٱ��? (1~6) ");
		scanf_s("%d", &num);

		if (num < 1 || num > 6) { 
			printf("\n �Է°��� �߸��ƽ��ϴ�. \n"); 
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("\n\n > �� ��� �ð� : %ld��\n", totalElapsedTime);

		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("\\n > �ֱ� ��� �ð� : %ld��\n", prevElapsedTime);

		decreaseWater(prevElapsedTime);

		if (cursur[num - 1] <= 0) {
			printf("%d�� ������ ������ �̹� �׾����Ƿ� ���� ���� �ʽ��ϴ�.\n", num);
		}
		else if (cursur[num - 1] > 100) {
			printf("%d�� ������ ���� ���� á���ϴ�.\n", num);
		}
		else
		{
			printf("%d�� ���׿� ���� �ݴϴ�.\n", num);
			cursur[num - 1] += 1;
		}

		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf("*** �����մϴ�. %d �������� %d ������ �ö����ϴ�. ***\n\n", level - 1, level);
		}

		if (checkFishAlive() == 0) {
			printf("����Ⱑ ��� �׾����ϴ�..\n\n");
			exit(0);
		}
		else {
			printf("����Ⱑ ���� ����ֽ��ϴ�.\n\n");
		}

		prevElapsedTime = totalElapsedTime;

		if (level == 5) {
			printf("\n\n �����մϴ�. �ְ� ������ �޼��߽��ϴ�. ������ �����մϴ�.\n\n");
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
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1, 2, 3, 4, 5, 6);
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