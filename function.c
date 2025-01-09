#include <stdio.h>

void p(int num);

void function_without_return(void);

int function_with_return(void);

void function_without_params(void);

void function_with_params(int a, int b, int c);

int apple(int total, int ate);

// 1분 퀴즈
void cal(int num);

//사칙연산 함수 만들기
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

//1분 퀴즈
void my_func(int i);
void my_func(int i, int j);
void my_func(int i, int j, int k);

// 12
int main(void) {
	int num = 2;
	p(num);
	/* 함수를 사용하는 이유
	첫째, 코드 중복을 방지하고 효율적으로 프로그래밍을 하기 위함
	 - 중복해서 작성하면 일일이 하나하나 수정해야하는 번거로움 존재
	 - 호출해서 사용하면 함수만 수정하면 됨
	 
	 둘째, 다른 프로젝트에서 재사용 가능
	 */

	/* 함수는 두 가지 존재
	표준 함수 : 각 언어에 이미 만들어져 있는 함수 (printf, scanf ... ) = 표준 라이브러리 함수, 내장 함수, 시스템 제공 함수 라고도 불림
	사용자 정의 함수 : 사용자가 직접 만들어(정의해) 사용하는 함수
	*/


	function_without_return();
	int ret = function_with_return();
	p(ret);

	function_without_params();
	function_with_params(1, 2, 3);

	int total = 5;
	int ate = 2;


	// 반환값을 변수에 저장 후 출력
	int ret2 = apple(total, ate);
	printf("사과 %d개 중에서 %d개를 먹으면 %d가 남습니다.\n", total, ate, ret2);

	//반환값을 변수에 저장하지 않고 바로 출력
	printf("사과 %d개 중에서 %d개를 먹으면 %d가 남습니다.\n", total, ate, apple(total, ate));

	// 둘 다 출력되는건 똑같음

	// 1분 퀴즈
	int test = 3;
	cal(test);

	//사칙연산 함수 만들기

	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);

	// 1분 퀴즈

	my_func(3, 5);

	return 0;
}

void p(int num) {
	printf("num의 현재값은 %d 입니다.\n", num);
}

void function_without_return(void) {
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return(void) {
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_params(void) {
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int a, int b, int c) {
	printf("전달값이 있는 함수입니다\n");
	printf("%d %d %d\n", a, b, c);
}

int apple(int total, int ate) {
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}

//1분 퀴즈
void cal(int num) {
	num += 2;
	printf("%d\n", num);
}

//사칙연산 함수 만들기

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

//1분 퀴즈

void my_func(int i) {
	printf("첫 번째 함수");
}

void my_func(int i, int j) {
	printf("두 번째 함수");
}

void my_func(int i, int j, int k) {
	printf("세 번째 함수");
}