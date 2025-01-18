#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	char* name;
	char* character;
	int age;
	int level;
}CAT;

CAT cats[5];
int collection[5] = {0,0,0,0,0};
void initCats();
void printCat(int selected);

int checkCollection();

int main(void) {

	srand(time(NULL));
	initCats();

	while (1)
	{
		printf("두근두근! 어느 고양이의 집사가 될까요? \nEnter를 눌러 확인하세요!");
		getchar();

		int selected = rand() % 5;
		printCat(selected);
		collection[selected] = 1;
		int collectAll = checkCollection();

		if (collectAll == 1) {
			break;
		}
	}

	initCats();
	return 0;
}

void printCat(int selected) {
	printf("\n\n=== 당신은 다음 고양이의 집사가 됐어요! ===\n\n");
	printf(" 이름 : %s\n", cats[selected].name);
	printf(" 특징 : %s\n", cats[selected].character);
	printf(" 나이 : %d\n", cats[selected].age);
	printf(" 레벨 : ");
	for (int i = 0; i < cats[selected].level; i++) {
		printf("%s", "★");
	}
	printf("\n\n");

	/*printf(" 레벨 : %s\n", cats[selected].level);*/
}

void initCats() {
	cats[0].name = "고양이1";
	cats[0].character = "온순함";
	cats[0].age = 1;
	cats[0].level = 1;

	cats[1].name = "고양이2";
	cats[1].character = "까칠함";
	cats[1].age = 2;
	cats[1].level = 2;

	cats[2].name = "고양이2";
	cats[2].character = "까칠함";
	cats[2].age = 3;
	cats[2].level = 3;

	cats[3].name = "고양이2";
	cats[3].character = "까칠함";
	cats[3].age = 4;
	cats[3].level = 4;

	cats[4].name = "고양이2";
	cats[4].character = "까칠함";
	cats[4].age = 5;
	cats[4].level = 5;
}

int checkCollection() {
	int collectionAll = 1;

	printf("\n\n=== 보유한 고양이 목록이에요. ===\n\n");

	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0) {
			printf("%10s", "(빈 상자)");
			collectionAll = 0;
		}
		else {
			printf("%10s", cats[i].name);
		}
	}

	printf("\n=====================================\n\n");

	if (collectionAll == 1) {
		printf("\n\n 축하합니다 ! 고양이 5마리를 모두 모았어요. 열심히 키워주세요.\n\n");
	}
	return collectionAll;
}