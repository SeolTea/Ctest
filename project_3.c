#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) {
	int count = 0;

	srand(time(NULL));

	for (int i = 1; i <= 5; i++) {
		
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);

		showQuestion(i, num1, num2);

		int answer = -1;

		scanf_s("%d", &answer);

		if (answer == -1) {
			printf("���α׷��� �����մϴ�.");
			//break;
			exit(0); // �ڿ� �ڵ� ������� �ٷ� ���α׷� �����ϴ� ��ɾ� , �Ű����� 0�� �������� / 1�� ���� �߻����� ���� ����
		}
		else if (answer == num1 * num2) {
			success();
			count++;
		}
		else {
			fail();
		}
	}

	printf("\n\n >> ��й�ȣ %d���� �������ϴ�.<< \n", count);
	return 0;
}

int getRandomNumber(int level) {
	return rand() % (level * 9) + 1;
}

void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n########## %d ��° ��й�ȣ ###########\n", level);
	printf("\n\t %d * %d ? \n\n", num1, num2);							//\t �� Tap Ű�� ������ ȿ���� ����
	printf("######################################\n");
	printf("\n��й�ȣ�� �Է��ϼ���.(���Ḧ ���ϸ� -1 �Է�) >> ");
} 

void success() {
	printf("\n >> Good! �����Դϴ�.\n");
}

void fail() {
	printf("\n >> ��! Ʋ�Ƚ��ϴ�.\n");
}