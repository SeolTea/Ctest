#include <stdio.h>

void p(int num);

void function_without_return(void);

int function_with_return(void);

void function_without_params(void);

void function_with_params(int a, int b, int c);

int apple(int total, int ate);

// 1�� ����
void cal(int num);

//��Ģ���� �Լ� �����
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

//1�� ����
void my_func(int i);
void my_func(int i, int j);
void my_func(int i, int j, int k);

// 12
int main(void) {
	int num = 2;
	p(num);
	/* �Լ��� ����ϴ� ����
	ù°, �ڵ� �ߺ��� �����ϰ� ȿ�������� ���α׷����� �ϱ� ����
	 - �ߺ��ؼ� �ۼ��ϸ� ������ �ϳ��ϳ� �����ؾ��ϴ� ���ŷο� ����
	 - ȣ���ؼ� ����ϸ� �Լ��� �����ϸ� ��
	 
	 ��°, �ٸ� ������Ʈ���� ���� ����
	 */

	/* �Լ��� �� ���� ����
	ǥ�� �Լ� : �� �� �̹� ������� �ִ� �Լ� (printf, scanf ... ) = ǥ�� ���̺귯�� �Լ�, ���� �Լ�, �ý��� ���� �Լ� ��� �Ҹ�
	����� ���� �Լ� : ����ڰ� ���� �����(������) ����ϴ� �Լ�
	*/


	function_without_return();
	int ret = function_with_return();
	p(ret);

	function_without_params();
	function_with_params(1, 2, 3);

	int total = 5;
	int ate = 2;


	// ��ȯ���� ������ ���� �� ���
	int ret2 = apple(total, ate);
	printf("��� %d�� �߿��� %d���� ������ %d�� �����ϴ�.\n", total, ate, ret2);

	//��ȯ���� ������ �������� �ʰ� �ٷ� ���
	printf("��� %d�� �߿��� %d���� ������ %d�� �����ϴ�.\n", total, ate, apple(total, ate));

	// �� �� ��µǴ°� �Ȱ���

	// 1�� ����
	int test = 3;
	cal(test);

	//��Ģ���� �Լ� �����

	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);

	// 1�� ����

	my_func(3, 5);

	return 0;
}

void p(int num) {
	printf("num�� ���簪�� %d �Դϴ�.\n", num);
}

void function_without_return(void) {
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return(void) {
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_params(void) {
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int a, int b, int c) {
	printf("���ް��� �ִ� �Լ��Դϴ�\n");
	printf("%d %d %d\n", a, b, c);
}

int apple(int total, int ate) {
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}

//1�� ����
void cal(int num) {
	num += 2;
	printf("%d\n", num);
}

//��Ģ���� �Լ� �����

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

//1�� ����

void my_func(int i) {
	printf("ù ��° �Լ�");
}

void my_func(int i, int j) {
	printf("�� ��° �Լ�");
}

void my_func(int i, int j, int k) {
	printf("�� ��° �Լ�");
}