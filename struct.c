#include <stdio.h>

//23
//����ü : ���� �ڷ������� �� �������� ���� �ϳ��� ���ο� �ڷ������� ����
// �̸��� ����� ����ڰ� ���� ������ �� ���� => ����� ���� �ڷ���(UDT) �̶�� �θ�
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
};

typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
}GAME_INFO;  // ����ü�� GAME_INFO ��� ������ �������

typedef struct {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
}GAME_INF2;		// ����ü���� ���� �ʰ� ���� �ٿ��൵ ��.

int main(void) {
	struct GameInfo gameInfo1;

	gameInfo1.name = "��������";
	gameInfo1.year = 2002;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	printf("-- ���� ��� ����--\n");
	printf("�����̸� : %s\n", gameInfo1.name);
	printf("���۳⵵ : %d\n", gameInfo1.year);
	printf("�ǸŰ��� : %d\n", gameInfo1.price);
	printf("����ȸ�� : %s\n", gameInfo1.company);

	// �ٸ� �ʱ�ȭ ���
	struct GameInfo gameInfo2 = { "�ʵ�����",2022,100,"�ʵ�ȸ��" };

	printf("-- ���� ��� ����--\n");
	printf("�����̸� : %s\n", gameInfo2.name);
	printf("���۳⵵ : %d\n", gameInfo2.year);
	printf("�ǸŰ��� : %d\n", gameInfo2.price);
	printf("����ȸ�� : %s\n", gameInfo2.company);

	// ����ü �迭�� ����
	struct GameInfo gameInfo3[2] = {
		{"��������", 2022,50,"����ȸ��"},
		{"�ʵ�����", 2022, 50, "�ʵ�ȸ��"}
	};

	//����ü ������
	struct GameInfo* gameInfo4;
	gameInfo4 = &gameInfo1;

	printf("-- ���� ��� ����--\n");
	printf("�����̸� : %s\n", (*gameInfo4).name);
	printf("���۳⵵ : %d\n", (*gameInfo4).year);
	printf("�ǸŰ��� : %d\n", (*gameInfo4).price);
	printf("����ȸ�� : %s\n", (*gameInfo4).company);

	//����ü ������ ��� �ٸ� ���
	printf("-- ���� ��� ����--\n");
	printf("�����̸� : %s\n", gameInfo4->name);
	printf("���۳⵵ : %d\n", gameInfo4->year);
	printf("�ǸŰ��� : %d\n", gameInfo4->price);
	printf("����ȸ�� : %s\n", gameInfo4->company);

	// ����ü �ȿ� ����ü

	struct GameInfo gameInfo5;

	gameInfo5.name = "��������";
	gameInfo5.year = 2002;
	gameInfo5.price = 50;
	gameInfo5.company = "����ȸ��";

	printf("-- ���� ��� ����--\n");
	printf("�����̸� : %s\n", gameInfo5.name);
	printf("���۳⵵ : %d\n", gameInfo5.year);
	printf("�ǸŰ��� : %d\n", gameInfo5.price);
	printf("����ȸ�� : %s\n", gameInfo5.company);

	struct GameInfo gameInfo6;

	gameInfo6.friendGame = &gameInfo5;

	printf("-- ���� ��� ����--\n");
	printf("�����̸� : %s\n", gameInfo6.friendGame->name);
	printf("���۳⵵ : %d\n", gameInfo6.friendGame->year);
	printf("�ǸŰ��� : %d\n", gameInfo6.friendGame->price);
	printf("����ȸ�� : %s\n", gameInfo6.friendGame->company);


	// typedef Ű����
	// �ڷ����� �����ϰ� ���̸� ������ ���̴� ���

	typedef struct GameInfo gameInfo7;
	gameInfo7 game1;

	game1.name = "�ѱ� ����";
	game1.year = "2022";

	GAME_INFO game2;

	game2.name = "�ѱ� ����2";
	game2.year = "2023";



	printf("-- ���� ��� ����--\n");
	printf("�����̸� : %s\n", game1.name);
	printf("���۳⵵ : %d\n", game1.year);
	printf("�����̸� : %s\n", game2.name);
	printf("���۳⵵ : %d\n", game2.year);

	struct GameInformation game3;

	return 0;
}