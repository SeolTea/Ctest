#include <stdio.h>

int main(void) {

	//���� �ݺ��� or ��ø �ݺ���
	for (int i = 1; i <= 3; i++) {
		printf("ù ��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("	�� ��° �ݺ��� : %d\n", j);
		}
	}

	//�ǽ� 1 : ������ ���

	for (int i = 2; i <= 9; i++) {
		printf("%d �� ���\n", i);

		for (int j = 1; j <= 9; j++) {
			printf("	%d * %d = %d\n", i, j, i * j);
		}
	}

	//�ǽ� 2 : ��ǥ ���
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	//�ǽ� 3 : ������ ���ķ� ��ǥ ���

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

	printf("�� ������ �������? : ");
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