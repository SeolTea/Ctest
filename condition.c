#include <stdio.h>

int main(void) {
	int age = 15;

	if (age > 19) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("û�ҳ� �Դϴ�.\n");
	}

	int age2 = 25;

	if (age2 >= 17 && age2 <= 19) {
		printf("����л��Դϴ�.\n");
	}
	else if (age2 >= 14 && age2 <= 16) {
		printf("���л��Դϴ�.\n");
	}
	else if (age2 >= 8 && age2 <= 13) {
		printf("�ʵ��л��Դϴ�.\n");
	}
	else {
		printf("û�ҳ��� �ƴմϴ�.\n");
	}

	// && : AND ������
	// == : �� ������ or ���� ������

	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;

	if (a == b && c == d) {
		printf("a�� b�� ���� c�� d�� �����ϴ� \n");
	}
	else {
		printf("���� ���� �ٸ��ϴ�.\n");
	}

	//|| : OR ������

	int e = 10;
	int f = 10;
	int g = 12;
	int h = 13;

	if (e == f || g == h) {
		printf("a�� b �Ǵ� c�� d�� ���� �����ϴ�\n");
	}

	// 1�� ����

	int bread = 1;
	int coffee = 3;

	if (bread > 0) {
		printf("���� �����ð��� 5�� �̻� �ɸ� �� �ֽ��ϴ�.\n");
	}
	if (coffee > 0) {
		printf("���� �ȿ����� ��ȸ�� ���� ����� �� �����ϴ�.\n");
	}
	printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");


	return 0;
}