#include <stdio.h>

int main(void) {

	// ++ ������ 

	int a = 10;
	printf("a�� %d\n", a);

	// �� �Ȱ��� ���
	//a = a + 1;
	//a += 1;
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);

	// ++ �� ������ 1�� ���� �ٽ� ������ �ִ� ����

	int b = 20;
	printf("b�� %d\n", ++b);
	printf("b�� %d\n", b++);
	printf("b�� %d\n", b);

	// ++ ��ġ�� ���� ���� ������ �޶���.
	// ���� : ++ �� ���� �տ� ���� �� - ���� 1�� �����ϰ� ��� �۾� ���� ++b
	// ���� : ++ �� ���� �ڿ� ���� �� - ���� ��� �۾��� �����ϰ� 1 ���� ���� b++
	// ���̳ʽ�(-) �� ����
	// �̸� ���� ������ ��� �� ( ++, --)

	// �ݺ����� ����

	// For ��
	// ���� ; ���� ; ���� ;
	printf("\nFor ��\n");

	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}

	// While �� - ������ ������ �ݺ�, ������ Ʋ���� Ż��
	// ���� ���� �� ���Ǹ� ����

	printf("\nWhile ��\n");

	int i = 1;

	while (i <= 10) {
		printf("Hello World %d\n",i++);
	}

	//do While �� - �ϴ� ������ �� �� ���� �� ���� Ȯ��
	//���� �� do - while ���� while ���� ����

	printf("\ndo - While ��\n");

	int d = 1;

	do {
		printf("Hello World %d\n", d++);
	} while (d <= 10);


	// ���� �ݺ����� ����ߴµ� ���� �ݺ� (Infinite Loop) �� �ɷ��� �� Ctrl + c ������ ���� �����

	// 1�� ����

	printf("\n1�� ����\n");

	for (int t = 1; t <= 3; t++) {
		printf("������ \n");
	} 

	int m = 3;
	
	do {
		printf("������\n");
		m--;
	} while (i > 3);

	return 0;
}