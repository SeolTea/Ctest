#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1;

	// ���� �ڵ�

	printf("%d\n", num);

	int answer = 0;

	for (int chance = 5; chance > 0; chance--) {
		printf("���ڸ� �Է��ϼ���. (���� ��ȸ�� %d �� ���ҽ��ϴ�.) : \n", chance);
		scanf_s("%d", &answer);

		if (num == answer) {
			printf("�����Դϴ� !\n");
			break;
		}
		else if (num > answer) {
			printf("UP ��\n");
		}
		else if (num < answer) {
			printf("Down ��\n");
		}
		else {
			printf("�� �� �����ϴ�. \n");
			break;
		}
	}

	if (num != answer) {
		printf("�����Ͽ����ϴ�.\n");
	}


	// å ����

	printf("���� : %d\n", num);

	answer = 0;
	int chance = 5;

	while (1) {
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���纸����.(1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN �� \n\n");
		}
		else if (answer < num) {
			printf("UP �� \n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ� \n\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��Ͽ���� \n\n");
		}

		if (chance == 0) {
			printf("��� ��ȸ�� ����߾��. �ƽ��Ե� �����߽��ϴ�.\n");
			printf("������? : %d\n", num);
			break;
		}
	}

	return 0;

}