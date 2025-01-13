#include <stdio.h>
//17

void swap(int num1, int num2);
void swap_addr(int* num1, int* num2);

void changeArray(int* ptr);

int main(void) {

	int chulsu = 1;
	int younghee = 2;
	int minsu = 3;

	printf("ö���� �ּ� : %p , ��ȣ : %d\n", &chulsu, chulsu);
	printf("����� �ּ� : %p , ��ȣ : %d\n", &younghee, younghee);
	printf("�μ��� �ּ� : %p , ��ȣ : %d\n", &minsu, minsu);

	int* mission;
	mission = &chulsu;

	printf("�̼Ǹ��� �ּ� : %p , ��ȣ : %d\n", mission, *mission * 3);

	mission = &younghee;
	printf("�̼Ǹ��� �ּ� : %p , ��ȣ : %d\n", mission, *mission * 3);

	mission = &minsu;
	printf("�̼Ǹ��� �ּ� : %p , ��ȣ : %d\n", mission, *mission * 3);


	// ������ ������ �̿��� �� �ٲٱ�

	mission = &chulsu;
	*mission = *mission * 3;
	printf("%d\n", *mission);

	//������ �߰��ϱ�
	int* spy = mission;
	printf("%p , %p\n", mission, spy);

	//�����ͷ� ������ ���� �ٲ����?
	printf("%p , %d\n", &chulsu, chulsu);

	//������ ������ �ּ� ã��
	printf("%p , %p\n", &mission, &spy);



	printf("\n\n\n\n");

	// �����Ϳ� �迭

	int arr[3] = { 5,10,15 };

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}

	int* ptr = arr;
	for (int i = 0; i < 3; i++) {
		printf("%d\n", ptr[i]);
	}

	// ������ ������ �迭�� ������� �� �迭�� ù��° ����� �ּ�(���� �ּ�)�� ����Ŵ

	int* ptrstr = arr;
	ptrstr[0] = 100;
	ptrstr[1] = 200;
	ptrstr[2] = 300;

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);

		printf("%d\n", *(arr + i));		// �� ��ĵ� �� printf�� �Ȱ��� ��� arr �迭 ���� ��ġ���� ���ϱ� ����

	}  // ������ ������ ����� ���� �� ����Ų �迭�� ���� �ٲ��.

	for (int i = 0; i < 3; i++) {
		printf("%d\n", ptrstr[i]);
	}

	// ������ ������ �迭�� ����ų �� ������, �迭�� ������ ������ ���� �� ����.

	// �迭 �ּҿ� �迭 ���� �ּҰ� ����.
	printf("%p\n", &arr);
	printf("%p\n", &arr[0]);

	printf("%d\n", *arr);		// ������ *(arr + 0) ��.
	printf("%d\n", *&arr[0]);	// arr[0] �� �ּ��� �� �̱⿡ *& �̴�. (���°ų� ��������)

	//�ǽ� 1 (�����ͷ� �� ������ �� ��ȯ)

	int a = 10;
	int b = 20;

	printf("main :: a�� �ּ� : %p\n", &a);
	printf("main :: b�� �ּ� : %p\n", &b);
	
	printf("main :: �Լ� ȣ�� �� : a = %d , b = %d\n", a, b);
	swap(a, b);
	printf("main :: swap �Լ� ȣ�� �� : a = %d , b = %d\n", a, b);

	// ���� �Լ��� a,b �� swap �Լ� a,b �� �ּҰ� �ٸ� -> �Լ��� ������ �����ϴ� ���� �ƴ� ���� ������. ( ���� ���� ȣ�� �̶�� �θ� )

	swap_addr(&a, &b);
	printf("main :: swap_addr �Լ� ȣ�� �� : a = %d , b = %d\n", a, b);

	// �Լ��� ������ ������ ������ �� �ּҸ� �����ϱ⿡ ���� ���� �� ������ ��. ( ������ ���� ȣ�� �̶�� �θ� )


	//�ǽ�2 : �����ͷ� �迭�� �� �ٲٱ�

	int arr2[3] = { 10,20,30 };
	changeArray(arr2);

	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(arr2 + i));
	}

	return 0;
}

void swap(int num1, int num2) {

	printf("swap :: a�� �ּ� : %p\n", &num1);
	printf("swap :: b�� �ּ� : %p\n", &num2);

	int temp = num1;
	num1 = num2;
	num2 = temp;

	printf("swap :: num1 : %d , num2 : %d\n", num1, num2);
}

void swap_addr(int* num1, int* num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	printf("swap_addr :: num1 : %d , num2 : %d\n", *num1, *num2);
}

void changeArray(int* ptr) {
	ptr[2] = 50;
}