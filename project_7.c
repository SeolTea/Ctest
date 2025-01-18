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
		printf("�αٵα�! ��� ������� ���簡 �ɱ��? \nEnter�� ���� Ȯ���ϼ���!");
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
	printf("\n\n=== ����� ���� ������� ���簡 �ƾ��! ===\n\n");
	printf(" �̸� : %s\n", cats[selected].name);
	printf(" Ư¡ : %s\n", cats[selected].character);
	printf(" ���� : %d\n", cats[selected].age);
	printf(" ���� : ");
	for (int i = 0; i < cats[selected].level; i++) {
		printf("%s", "��");
	}
	printf("\n\n");

	/*printf(" ���� : %s\n", cats[selected].level);*/
}

void initCats() {
	cats[0].name = "�����1";
	cats[0].character = "�¼���";
	cats[0].age = 1;
	cats[0].level = 1;

	cats[1].name = "�����2";
	cats[1].character = "��ĥ��";
	cats[1].age = 2;
	cats[1].level = 2;

	cats[2].name = "�����2";
	cats[2].character = "��ĥ��";
	cats[2].age = 3;
	cats[2].level = 3;

	cats[3].name = "�����2";
	cats[3].character = "��ĥ��";
	cats[3].age = 4;
	cats[3].level = 4;

	cats[4].name = "�����2";
	cats[4].character = "��ĥ��";
	cats[4].age = 5;
	cats[4].level = 5;
}

int checkCollection() {
	int collectionAll = 1;

	printf("\n\n=== ������ ����� ����̿���. ===\n\n");

	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0) {
			printf("%10s", "(�� ����)");
			collectionAll = 0;
		}
		else {
			printf("%10s", cats[i].name);
		}
	}

	printf("\n=====================================\n\n");

	if (collectionAll == 1) {
		printf("\n\n �����մϴ� ! ����� 5������ ��� ��Ҿ��. ������ Ű���ּ���.\n\n");
	}
	return collectionAll;
}