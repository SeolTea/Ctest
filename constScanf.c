#include <stdio.h>

int main(void) {
	// ����϶��� �������� �빮�ڷ� �ۼ��Ѵ�.
	const YEAR = 1972;
	printf("C�� ��ǥ�� ���� : %d\n", YEAR);


	// printf ����
	int add = 3 + 7;
	printf("%d\n", add);

	printf("%d + %d = %d \n", add, 5, add + 5);

	// scanf
	// scanf �� scanf_s ����
	// scanf �� �Է� ũ�⿡ ������ ��� ������ ũ�⺸�� �� ���� ���� �Է� ���� �� �ְ� �̷� ��� ���� �����÷� �޸� ������ �߻��� �� ����
	// scanf_S �� �� ���� ������ �Է°��� ũ�⸦ ������ �� ���� - �˻��غ��� ���� ��� �Է¶����� �۵�( �迭�� ���� ũ�⸦ ����ϵ��� )

	int input = 0;
	printf("���� �Է��ϼ���. : ");
	scanf_s("%d", &input);
	// ������ �Է�, �Է¹��� ���� �ּ� = scanf �� ����
	// ���� �� & �� ���������� �Ҵ�� �޸� �ּҸ� �ǹ�

	printf("�Է°� : %d \n", input);


	int one = 0;
	int two = 0;
	int three = 0;

	printf("���� �� ���� �Է��ϼ���. :");
	scanf_s("%d %d %d", &one, &two, &three);

	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);


	//scanf ������
	// ���� ������ ��� ��������ǥ('')�� ǥ��

	char c = 'A';
	printf("%c\n", c);

	//���ڿ��� ������ �ƴ� �迭�� ���
	//scanf_s �� ��� ���۸� ����ϱ⿡ ũ�⸦ ����������

	// sizeof() = �޸� ������ �󸶳� �����ϴ����� ���� ����Ʈ ������ ���

	char str[256];
	scanf_s("%s", str, sizeof(str));
	// str �� ���ڿ��� ����ִ´�. ũ��� 256�� �ѱ��� �ʵ��� ������ġ�� �ɾ�д�.
	// ����� �߸���.

	printf("%s\n", str);

	// 1�� ����

	char test1[64];
	char test2[64];

	printf("���ڿ� 2���� �Է��� �ּ���. : ");
	scanf_s("%s %s", test1, sizeof(test1), test2, sizeof(test2));
	printf("�Է��� ���ڿ� : %s , %s", test1, test2);

	return 0;
}