#include <stdio.h>

int main(void) {
	char name[256];
	int age = 0;
	float weight = 0;
	double height = 0;
	char what[256];

	printf("�̸��� �����Դϱ�? : ");
	scanf_s("%s", name, sizeof(name));

	// scanf ������ \n �� ���� ���� �����ڸ� �־��ָ� �ȵ�.

	printf("���̴� ��� �˴ϱ�? : ");
	scanf_s("%d", &age);

	//������ ���� ���� ������ ��� scanf �� ���� �ۼ��� �����͸� ���� ������ �ּҸ� ����־�� ��.

	printf("�����Դ� ��� �˴ϱ�? : ");
	scanf_s("%f", &weight);
	//�Ǽ��� scanf �� .1 �� ���� �Ҽ��� ���� ǥ�ô� ���� �ʴ´�. double �� ��������, ������ f , lf �̴�.

	printf("Ű�� ��� �˴ϱ�? : ");
	scanf_s("%lf", &height);

	printf("���˸��� �����Դϱ�? : ");
	scanf_s("%s", what, sizeof(what));


	printf("\n\n--- ������ ���� --- \n\n");
	printf("�̸�   : %s\n", name);
	printf("����   : %d\n", age);
	printf("������ : %.1f\n", weight);
	printf("Ű     : %.1lf\n", height);
	printf("���˸� : %s\n", what);

	return 0;
}