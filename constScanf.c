#include <stdio.h>

int main(void) {
	// 상수일때는 변수명을 대문자로 작성한다.
	const YEAR = 1972;
	printf("C언어가 발표된 연도 : %d\n", YEAR);


	// printf 연산
	int add = 3 + 7;
	printf("%d\n", add);

	printf("%d + %d = %d \n", add, 5, add + 5);

	// scanf
	// scanf 와 scanf_s 차이
	// scanf 는 입력 크기에 제한이 없어서 지정된 크기보다 더 많은 양을 입력 받을 수 있고 이럴 경우 버퍼 오버플로 메모리 문제가 발생할 수 있음
	// scanf_S 는 이 점을 보완해 입력값의 크기를 지정할 수 있음 - 검색해보니 버퍼 기반 입력때에만 작동( 배열에 버퍼 크기를 명시하듯이 )

	int input = 0;
	printf("값을 입력하세요. : ");
	scanf_s("%d", &input);
	// 정수형 입력, 입력받을 값의 주소 = scanf 도 동일
	// 변수 앞 & 은 변수명으로 할당된 메모리 주소를 의미

	printf("입력값 : %d \n", input);


	int one = 0;
	int two = 0;
	int three = 0;

	printf("값을 세 가지 입력하세요. :");
	scanf_s("%d %d %d", &one, &two, &three);

	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);


	//scanf 문자형
	// 값이 문자일 경우 작은따옴표('')로 표시

	char c = 'A';
	printf("%c\n", c);

	//문자열은 변수가 아닌 배열을 사용
	//scanf_s 의 경우 버퍼를 사용하기에 크기를 명시해줘야함

	// sizeof() = 메모리 공간을 얼마나 차지하는지에 대해 바이트 단위로 출력

	char str[256];
	scanf_s("%s", str, sizeof(str));
	// str 에 문자열을 집어넣는다. 크기는 256을 넘기지 않도록 안전장치를 걸어둔다.
	// 띄어쓰기는 잘린다.

	printf("%s\n", str);

	// 1분 퀴즈

	char test1[64];
	char test2[64];

	printf("문자열 2개를 입력해 주세요. : ");
	scanf_s("%s %s", test1, sizeof(test1), test2, sizeof(test2));
	printf("입력한 문자열 : %s , %s", test1, test2);

	return 0;
}