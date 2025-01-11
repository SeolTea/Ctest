#include <stdio.h>

int main15(void) {

	//선언
	int subway_array[3];

	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("%d 호차에 %d명이 타고 있습니다\n", i+1, subway_array[i]);
	}

	//한 번에 초기화
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	//일부만 초기화
	int array[10] = { 1,2 };

	for (int i = 0; i < 10; i++) {
		printf("%d\n", array[i]);
	}

	//배열 선언 시 크기 저장하지 않고 초기화
	int arraytest[] = { 1,2,3 };

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arraytest[i]);
	}

	//실수형 초기화
	float arrayf[5] = { 1.0f,2.0f,3.0f };

	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arrayf[i]);
	}

	// 배열에 문자열 저장
	char c = 'A';
	printf("%c\n", c);


	// 끝에 Null 값이 없는 문자열 - 끝에 이상한 문자 출력
	char str[6] = "coding";
	printf("%s\n", str);

	//끝에 Null 값이 있는 문자열 - 깔끔하게 원하는 문자만 출력
	char strtest[7] = "coding";
	printf("%s\n", strtest);

	// 배열 크기 미지정 시 문자열 길이 측정 및 문자 출력
	char strof[] = "coding";
	printf("%s\n", strof);
	printf("%d\n", sizeof(strof));

	for (int i = 0; i < sizeof(strof); i++) {
		printf("%c\n", strof[i]);
	}

	// 배열 한글 출력
	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	// 한글은 한 문자당 2바이트씩 사용 (영어, 숫자는 1바이트씩 사용)
	// 그래서 길이 측정 시 9 바이트가 나오는거임

	// 문자로 저장 시
	char c_array[7] = { 'c','o','d','i','n','g','\0' };
	printf("%s\n", c_array);

	//기존 문자열보다 배열 크기가 클 시
	char strbig[10] = "coding";
	printf("%s\n", strbig);
	
	for (int i = 0; i < sizeof(strbig); i++) {
		printf("%c\n", strbig[i]);
	}

	//아스키코드로 변환
	for (int i = 0; i < sizeof(strbig); i++) {
		printf("%d\n", strbig[i]);
	}

	// 입력 받아서 출력
	char name[256];

	printf("이름을 입력하세요 : ");
	scanf_s("%s", &name,sizeof(name));

	printf("입력한 이름은 %s 입니다.", name);


	// 아스키 코드 해당 문자 전체 확인

	for (int i = 0; i < 128; i++) {
		printf("아스키코드 값 %d : %c \n", i, i);
	}
	// 경고음이 울리는데 아스키코드 7번이 비프음 코드임
	

	return 0;
}