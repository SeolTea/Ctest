//25
#define _CRT_SECURE_NO_WARNINGS
//��ũ�θ� �����ϴ� ��ó���� ���ù�
//�ҽ� �ڵ� �ȿ��� ���� ��ü�� ����ϴ� ���ڿ��� �ǹ�
//�ڵ忡 ���� ������ ���� �ְ�, C�� ����� ��ũ�θ� �ҷ��� ������ ���� ����
//_CRT_SECURE_NO_WARNINGS ��� ����� ��ũ�� = ���� ��� ������� �ʵ��� ����

#define ADD(x1,x2) (x1+x2)
// �̰� ���� ������ ��ũ�� = ADD �Լ��� x1,x2 ���� �����ϸ� x1+x2 �� ���� ����Ѵ�.

#define MAX 10000
#include <stdio.h>

int main(void) {

	//�Է��̳� ��� ������ ���� ���� ��ǻ���� �޸𸮿� ����
	//���α׷��� �����ϸ� ���� �����
	//���� �޸𸮴� Ram(Random Access Memory)�� �ǹ�
	//�ܱ� ������ġ�� �޸𸮴� ���� ������ ������ ����� �����͸� ���� = ���α׷��� ������ص� �۾��� �����ʹ� �������� ����
	//�����͸� ���Ϸ� �����ϸ� ����� �Ǵ� ���丮����� ��� ������ġ�� ���� = �ٽ� �ҷ��� �� ���� (SSD/HDD)

	// ���� ���� ��ũ�� �׽�Ʈ
	int result = ADD(1, 2);
	printf("%d\n", result);

	FILE* file = fopen("C:\\Users\\Public\\test1.txt", "wb");
	// ���� �����Ϳ� ������ ���� = ���̳ʸ� �����͸� ���� ���� ����
	// �ּҸ� �ۼ��� �� �������ô� ������ 1�� �� �ۼ� = 1���� �ۼ��� �� \n �� ���� �̽������� �������� �����ϱ� ����
	
	if (file == NULL) {
		printf("����1 ���� ����\n");
		return 1;
	}

	fputs("fputs() �Լ��� ���� �Ẽ�Կ�.\n",file);
	fputs("�� �������� Ȯ���� �ּ���.\n", file);
	// ������ ����

	fclose(file);
	// ������ �ݴ� �Լ� = �� �ݰ� �Ǹ� ������ �ս��� �߻��� �� �ֱ⿡ �������� �� �ݾƾ���.


	file = fopen("C:\\Users\\Public\\test1.txt", "rb");
	// ���� �����Ϳ� ������ ���� = rb (�б� �������� ����)

	char line[MAX];
	// MAX �� 10000 �̱⿡ �迭�� 10000 ũ��� �����ϴ� �Ͱ� ����

	while (fgets(line,MAX,file) != NULL) {
		printf("%s", line);
	}

	fclose(file);

	//fputs , fgets �� ���ڿ� ������ ���Ͽ� �����͸� ���ų� ����

	//fprintf , fscanf �� ������ �������� ���Ͽ� �����͸� ���ų� ����

	file = fopen("C:\\Users\\Public\\test2.txt", "wb");

	if (file == NULL) {
		printf("����2 ���� ����\n");
		return 1;
	}

	fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "���ʽ���ȣ", 7);

	fclose(file);

	char str1[MAX];
	char str2[MAX];

	int num[6] = { 0,0,0,0,0,0 };
	int bonus = 0;

	file = fopen("C:\\Users\\Public\\test2.txt", "rb");

	if (file == NULL) {
		printf("����2 ���� ����\n");
		return 1;
	}

	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);

	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bonus);

	printf("%s %d", str2, bonus);

	fclose(file);

	return 0;
}
