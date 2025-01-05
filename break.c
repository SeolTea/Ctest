#include <stdio.h>

//���� ������ �ʿ� ��ó���� ���ù�	
#include <time.h>	// �ð� ���� �Լ��� ��Ƴ��� ��� ����
#include <stdlib.h>	// ���� ������ ���ڿ� ��ȯ���� �����ϴ� �Լ����� ��Ƴ��� �������

int main(void) {

	//break �� : ���� ������ �������� �ʰ�, �ݺ����� Ż���Ѵ�.
	for (int i = 1; i <= 30; i++) {
		if (i > 5) {
			printf("������ �л����� ���� ������. \n");
			break;
		}
		printf("%d�� �л��� ���� ������ �غ��ϼ���. \n", i);
	}


	printf("\n\n");

	//Continue �� : ���� ������ �������� ������, �ݺ����� Ż������ �ʰ� ���� �ݺ����� �Ѿ
	for (int i = 1; i <= 30; i++) {

		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�. \n", i);
				continue;
			}

			printf("%d�� �л��� ���� ������ �غ��ϼ���. \n", i);
			
		}
		
	 }

	printf("\n\n");

	// 1�� ����
	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			continue;
		}
		printf("%d\n",i);
	}


	printf("\n\n");

	// ���� ����
	// ���� : rand() % ���� ���� �� + ���� �� - ���� ���� ���� �������� �̰� ���� ������ ������ �����ϴ� ���� , ���� ���� �����ϰ��� �ϴ� ��
	// ������ �������� �׻� �ʱ�ȭ�� ����� ��

	//srand(time(NULL)); // ���� �ʱ�ȭ - time() �Լ��� �⺻������ unsigned int �����̱⿡ ����ȯ�� �������ָ� ����
	// srand((unsigned int)time(NULL)); // ����ȯ ����
	//rand() % 3 + 1;// 1���� ���� ������ 3���� ( 1 ~ 3 ������ ���� )

	printf("���� �ʱ�ȭ ����... \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);		// �ʱ�ȭ�� ���� �ʰ� ���� �� ���� ������ ��� ���� - �ʱ�ȭ �ʿ�
	}

	printf("���� �ʱ�ȭ ����... \n");
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);		// �ʱ�ȭ�� ���� �ʰ� ���� �� ���� ������ ��� ���� - �ʱ�ȭ �ʿ�
	}

	//switch ��
	printf("\n\n");

	srand(time(NULL));
	int i = rand() % 3;

	switch (i) {				// break ���� ������� �ʾ� case �� �´� ���ڸ� ã�� �� ���� ������ ���� ����ع���
	case 0 :
		printf("����\n");
	case 1:
		printf("����\n");
	case 2:
		printf("��\n");
	default :
		printf("�����.\n");
	}

	printf("\n\n");

	switch (i) {
	case 0:
		printf("����\n");
		break;
	case 1:
		printf("����\n");
		break;
	case 2:
		printf("��\n");
		break;
	default:
		printf("�����.\n");
		break;
	}


	// �ǽ� : û�ҳ� ���� �����ϱ�
	printf("\n\n");

	int age = 9;

	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19) {
		printf("����л��Դϴ�.\n");
	}
	else {
		printf("û�ҳ��� �ƴմϴ�.\n");
	}

	// Switch ������ ����
	// Switch ���� ������ �ƴ� ���� �ִ� ���̹Ƿ� ������ �־������.

	switch (age) {
	case 8:
		printf("�ʵ��л��Դϴ�.\n");
		break;
	case 9:
		printf("�ʵ��л��Դϴ�.\n");
		break;
	case 10:
		printf("�ʵ��л��Դϴ�.\n");
		break;
	case 11:
		printf("�ʵ��л��Դϴ�.\n");
		break;
	case 12:
		printf("�ʵ��л��Դϴ�.\n");
		break;
	case 13:
		printf("�ʵ��л��Դϴ�.\n");
		break;

	case 14:
		printf("���л��Դϴ�.\n");
		break;
	case 15:
		printf("���л��Դϴ�.\n");
		break;
	case 16:
		printf("���л��Դϴ�.\n");
		break;

	case 17:
		printf("����л��Դϴ�.\n");
		break;
	case 18:
		printf("����л��Դϴ�.\n");
		break;
	case 19:
		printf("����л��Դϴ�.\n");
		break;
	default :
		printf("û�ҳ��� �ƴմϴ�.\n");
	}


	//�㳪 �� ����� �ʹ� �밡�ٰ� ����
	// break �� ���� ������ �� �ؿ� case �� ���� ��µǴ� Ư���� �̿��� ����ȭ ����

	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
		printf("�ʵ��л��Դϴ�.\n");
		break;

	case 14:
	case 15:
	case 16:
		printf("���л��Դϴ�.\n");
		break;

	case 17:;
	case 18:
	case 19:
		printf("����л��Դϴ�.\n");
		break;
	default:
		printf("û�ҳ��� �ƴմϴ�.\n");
	}


	// 1�� ����

	int n = 2;

	switch (n) {
	case 1: printf("���\n");
	case 2: printf("����\n");
	case 3: printf("����\n");
	}

	return 0;
}