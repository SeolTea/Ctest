//25
#define _CRT_SECURE_NO_WARNINGS
//매크로를 정의하는 전처리기 지시문
//소스 코드 안에서 값을 대체해 사용하는 문자열을 의미
//코드에 직접 정의할 수도 있고, C언어에 내장된 매크로를 불러와 정의할 수도 있음
//_CRT_SECURE_NO_WARNINGS 얘는 내장된 매크로 = 보안 경고를 사용하지 않도록 설정

#define ADD(x1,x2) (x1+x2)
// 이건 직접 정의한 매크로 = ADD 함수에 x1,x2 값을 전달하면 x1+x2 의 값을 출력한다.

#define MAX 10000
#include <stdio.h>

int main(void) {

	//입력이나 출력 데이터 같은 값은 컴퓨터의 메모리에 저장
	//프로그램을 종료하면 값은 사라짐
	//보통 메모리는 Ram(Random Access Memory)를 의미
	//단기 저장장치인 메모리는 전원 공급이 없으면 저장된 데이터를 잃음 = 프로그램을 재실행해도 작업한 데이터는 남아있지 않음
	//데이터를 파일로 저장하면 저장소 또는 스토리지라는 장기 저장장치에 보관 = 다시 불러올 수 있음 (SSD/HDD)

	// 직접 정의 매크로 테스트
	int result = ADD(1, 2);
	printf("%d\n", result);

	FILE* file = fopen("C:\\Users\\Public\\test1.txt", "wb");
	// 파일 포인터에 데이터 저장 = 바이너리 데이터를 쓰기 전용 설정
	// 주소를 작성할 때 역슬래시는 무조건 1개 더 작성 = 1개만 작성할 시 \n 과 같은 이스케이프 시퀀스로 인지하기 때문
	
	if (file == NULL) {
		printf("파일1 열기 실패\n");
		return 1;
	}

	fputs("fputs() 함수로 글을 써볼게요.\n",file);
	fputs("잘 써지는지 확인해 주세요.\n", file);
	// 데이터 쓰기

	fclose(file);
	// 파일을 닫는 함수 = 안 닫게 되면 데이터 손실이 발생할 수 있기에 열었으면 꼭 닫아야함.


	file = fopen("C:\\Users\\Public\\test1.txt", "rb");
	// 파일 포인터에 데이터 저장 = rb (읽기 전용으로 설정)

	char line[MAX];
	// MAX 는 10000 이기에 배열을 10000 크기로 설정하는 것과 같음

	while (fgets(line,MAX,file) != NULL) {
		printf("%s", line);
	}

	fclose(file);

	//fputs , fgets 는 문자열 단위로 파일에 데이터를 쓰거나 읽음

	//fprintf , fscanf 는 정해진 형식으로 파일에 데이터를 쓰거나 읽음

	file = fopen("C:\\Users\\Public\\test2.txt", "wb");

	if (file == NULL) {
		printf("파일2 열기 실패\n");
		return 1;
	}

	fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "보너스번호", 7);

	fclose(file);

	char str1[MAX];
	char str2[MAX];

	int num[6] = { 0,0,0,0,0,0 };
	int bonus = 0;

	file = fopen("C:\\Users\\Public\\test2.txt", "rb");

	if (file == NULL) {
		printf("파일2 열기 실패\n");
		return 1;
	}

	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);

	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bonus);

	printf("%s %d", str2, bonus);

	fclose(file);

	return 0;
}
