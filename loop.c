#include <stdio.h>

int main(void) {

	// ++ 연산자 

	int a = 10;
	printf("a는 %d\n", a);

	// 다 똑같은 결과
	//a = a + 1;
	//a += 1;
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);

	// ++ 는 변수에 1을 더해 다시 변수에 넣는 역할

	int b = 20;
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	printf("b는 %d\n", b);

	// ++ 위치에 따라 연산 순서가 달라짐.
	// 전위 : ++ 가 변수 앞에 있을 때 - 먼저 1을 증가하고 출력 작업 진행 ++b
	// 후위 : ++ 가 변수 뒤에 있을 때 - 먼저 출력 작업을 진행하고 1 증가 진행 b++
	// 마이너스(-) 도 동일
	// 이를 증감 연산자 라고 함 ( ++, --)

	// 반복문의 종류

	// For 문
	// 선언 ; 조건 ; 증감 ;
	printf("\nFor 문\n");

	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}

	// While 문 - 조건이 맞으면 반복, 조건이 틀리면 탈출
	// 변수 선언 후 조건만 기입

	printf("\nWhile 문\n");

	int i = 1;

	while (i <= 10) {
		printf("Hello World %d\n",i++);
	}

	//do While 문 - 일단 무조건 한 번 실행 후 조건 확인
	//선언 후 do - while 에서 while 조건 기입

	printf("\ndo - While 문\n");

	int d = 1;

	do {
		printf("Hello World %d\n", d++);
	} while (d <= 10);


	// 만약 반복문을 사용했는데 무한 반복 (Infinite Loop) 에 걸렸을 시 Ctrl + c 누르면 강제 종료됨

	// 1분 퀴즈

	printf("\n1분 퀴즈\n");

	for (int t = 1; t <= 3; t++) {
		printf("파이팅 \n");
	} 

	int m = 3;
	
	do {
		printf("오케이\n");
		m--;
	} while (i > 3);

	return 0;
}