#include <stdio.h>

int main15(void) {

	//����
	int subway_array[3];

	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("%d ȣ���� %d���� Ÿ�� �ֽ��ϴ�\n", i+1, subway_array[i]);
	}

	//�� ���� �ʱ�ȭ
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	//�Ϻθ� �ʱ�ȭ
	int array[10] = { 1,2 };

	for (int i = 0; i < 10; i++) {
		printf("%d\n", array[i]);
	}

	//�迭 ���� �� ũ�� �������� �ʰ� �ʱ�ȭ
	int arraytest[] = { 1,2,3 };

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arraytest[i]);
	}

	//�Ǽ��� �ʱ�ȭ
	float arrayf[5] = { 1.0f,2.0f,3.0f };

	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arrayf[i]);
	}

	// �迭�� ���ڿ� ����
	char c = 'A';
	printf("%c\n", c);


	// ���� Null ���� ���� ���ڿ� - ���� �̻��� ���� ���
	char str[6] = "coding";
	printf("%s\n", str);

	//���� Null ���� �ִ� ���ڿ� - ����ϰ� ���ϴ� ���ڸ� ���
	char strtest[7] = "coding";
	printf("%s\n", strtest);

	// �迭 ũ�� ������ �� ���ڿ� ���� ���� �� ���� ���
	char strof[] = "coding";
	printf("%s\n", strof);
	printf("%d\n", sizeof(strof));

	for (int i = 0; i < sizeof(strof); i++) {
		printf("%c\n", strof[i]);
	}

	// �迭 �ѱ� ���
	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	// �ѱ��� �� ���ڴ� 2����Ʈ�� ��� (����, ���ڴ� 1����Ʈ�� ���)
	// �׷��� ���� ���� �� 9 ����Ʈ�� �����°���

	// ���ڷ� ���� ��
	char c_array[7] = { 'c','o','d','i','n','g','\0' };
	printf("%s\n", c_array);

	//���� ���ڿ����� �迭 ũ�Ⱑ Ŭ ��
	char strbig[10] = "coding";
	printf("%s\n", strbig);
	
	for (int i = 0; i < sizeof(strbig); i++) {
		printf("%c\n", strbig[i]);
	}

	//�ƽ�Ű�ڵ�� ��ȯ
	for (int i = 0; i < sizeof(strbig); i++) {
		printf("%d\n", strbig[i]);
	}

	// �Է� �޾Ƽ� ���
	char name[256];

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", &name,sizeof(name));

	printf("�Է��� �̸��� %s �Դϴ�.", name);


	// �ƽ�Ű �ڵ� �ش� ���� ��ü Ȯ��

	for (int i = 0; i < 128; i++) {
		printf("�ƽ�Ű�ڵ� �� %d : %c \n", i, i);
	}
	// ������� �︮�µ� �ƽ�Ű�ڵ� 7���� ������ �ڵ���
	

	return 0;
}