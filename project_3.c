#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) {
	int count = 0;

	srand(time(NULL));

	for (int i = 1; i <= 5; i++) {
		
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);

		showQuestion(i, num1, num2);

		int answer = -1;

		scanf_s("%d", &answer);

		if (answer == -1) {
			printf("프로그램을 종료합니다.");
			//break;
			exit(0); // 뒤에 코드 상관없이 바로 프로그램 종료하는 명령어 , 매개변수 0은 정상종료 / 1은 오류 발생으로 인한 종료
		}
		else if (answer == num1 * num2) {
			success();
			count++;
		}
		else {
			fail();
		}
	}

	printf("\n\n >> 비밀번호 %d개를 맞혔습니다.<< \n", count);
	return 0;
}

int getRandomNumber(int level) {
	return rand() % (level * 9) + 1;
}

void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n########## %d 번째 비밀번호 ###########\n", level);
	printf("\n\t %d * %d ? \n\n", num1, num2);							//\t 는 Tap 키를 누르는 효과가 있음
	printf("######################################\n");
	printf("\n비밀번호를 입력하세요.(종료를 원하면 -1 입력) >> ");
} 

void success() {
	printf("\n >> Good! 정답입니다.\n");
}

void fail() {
	printf("\n >> 땡! 틀렸습니다.\n");
}