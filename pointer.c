#include <stdio.h>
//17

void swap(int num1, int num2);
void swap_addr(int* num1, int* num2);

void changeArray(int* ptr);

int main(void) {

	int chulsu = 1;
	int younghee = 2;
	int minsu = 3;

	printf("철수네 주소 : %p , 암호 : %d\n", &chulsu, chulsu);
	printf("영희네 주소 : %p , 암호 : %d\n", &younghee, younghee);
	printf("민수네 주소 : %p , 암호 : %d\n", &minsu, minsu);

	int* mission;
	mission = &chulsu;

	printf("미션맨의 주소 : %p , 암호 : %d\n", mission, *mission * 3);

	mission = &younghee;
	printf("미션맨의 주소 : %p , 암호 : %d\n", mission, *mission * 3);

	mission = &minsu;
	printf("미션맨의 주소 : %p , 암호 : %d\n", mission, *mission * 3);


	// 포인터 변수를 이용해 값 바꾸기

	mission = &chulsu;
	*mission = *mission * 3;
	printf("%d\n", *mission);

	//포인터 추가하기
	int* spy = mission;
	printf("%p , %p\n", mission, spy);

	//포인터로 변경한 값이 바뀌었나?
	printf("%p , %d\n", &chulsu, chulsu);

	//포인터 변수의 주소 찾기
	printf("%p , %p\n", &mission, &spy);



	printf("\n\n\n\n");

	// 포인터와 배열

	int arr[3] = { 5,10,15 };

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}

	int* ptr = arr;
	for (int i = 0; i < 3; i++) {
		printf("%d\n", ptr[i]);
	}

	// 포인터 변수에 배열을 집어넣을 시 배열의 첫번째 요소의 주소(시작 주소)를 가리킴

	int* ptrstr = arr;
	ptrstr[0] = 100;
	ptrstr[1] = 200;
	ptrstr[2] = 300;

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);

		printf("%d\n", *(arr + i));		// 이 방식도 위 printf와 똑같이 출력 arr 배열 시작 위치에서 더하기 때문

	}  // 포인터 변수를 사용해 수정 시 가리킨 배열의 값이 바뀐다.

	for (int i = 0; i < 3; i++) {
		printf("%d\n", ptrstr[i]);
	}

	// 포인터 변수는 배열을 가리킬 수 있지만, 배열은 포인터 변수를 담을 수 없다.

	// 배열 주소와 배열 시작 주소가 같다.
	printf("%p\n", &arr);
	printf("%p\n", &arr[0]);

	printf("%d\n", *arr);		// 원래는 *(arr + 0) 임.
	printf("%d\n", *&arr[0]);	// arr[0] 의 주소의 값 이기에 *& 이다. (없는거나 마찬가지)

	//실습 1 (포인터로 두 변수의 값 교환)

	int a = 10;
	int b = 20;

	printf("main :: a의 주소 : %p\n", &a);
	printf("main :: b의 주소 : %p\n", &b);
	
	printf("main :: 함수 호출 전 : a = %d , b = %d\n", a, b);
	swap(a, b);
	printf("main :: swap 함수 호출 후 : a = %d , b = %d\n", a, b);

	// 메인 함수의 a,b 와 swap 함수 a,b 의 주소가 다름 -> 함수는 변수를 전달하는 것이 아닌 값만 전달함. ( 값에 의한 호출 이라고 부름 )

	swap_addr(&a, &b);
	printf("main :: swap_addr 함수 호출 후 : a = %d , b = %d\n", a, b);

	// 함수는 포인터 변수를 전달할 시 주소를 참조하기에 값이 변경 및 수정이 됨. ( 참조에 의한 호출 이라고 부름 )


	//실습2 : 포인터로 배열의 값 바꾸기

	int arr2[3] = { 10,20,30 };
	changeArray(arr2);

	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(arr2 + i));
	}

	return 0;
}

void swap(int num1, int num2) {

	printf("swap :: a의 주소 : %p\n", &num1);
	printf("swap :: b의 주소 : %p\n", &num2);

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