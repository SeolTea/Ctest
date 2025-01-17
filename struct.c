#include <stdio.h>

//23
//구조체 : 여러 자료형으로 된 변수들을 묶어 하나의 새로운 자료형으로 정의
// 이름과 멤버를 사용자가 직접 정의할 수 있음 => 사용자 정의 자료형(UDT) 이라고 부름
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
}GAME_INFO;  // 구조체에 GAME_INFO 라는 별명을 만들어줌

typedef struct {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
}GAME_INF2;		// 구조체명을 쓰지 않고 별명만 붙여줘도 됨.

int main(void) {
	struct GameInfo gameInfo1;

	gameInfo1.name = "나도게임";
	gameInfo1.year = 2002;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	printf("-- 게임 출시 정보--\n");
	printf("게임이름 : %s\n", gameInfo1.name);
	printf("제작년도 : %d\n", gameInfo1.year);
	printf("판매가격 : %d\n", gameInfo1.price);
	printf("제작회사 : %s\n", gameInfo1.company);

	// 다른 초기화 방법
	struct GameInfo gameInfo2 = { "너도게임",2022,100,"너도회사" };

	printf("-- 게임 출시 정보--\n");
	printf("게임이름 : %s\n", gameInfo2.name);
	printf("제작년도 : %d\n", gameInfo2.year);
	printf("판매가격 : %d\n", gameInfo2.price);
	printf("제작회사 : %s\n", gameInfo2.company);

	// 구조체 배열도 가능
	struct GameInfo gameInfo3[2] = {
		{"나도게임", 2022,50,"나도회사"},
		{"너도게임", 2022, 50, "너도회사"}
	};

	//구조체 포인터
	struct GameInfo* gameInfo4;
	gameInfo4 = &gameInfo1;

	printf("-- 게임 출시 정보--\n");
	printf("게임이름 : %s\n", (*gameInfo4).name);
	printf("제작년도 : %d\n", (*gameInfo4).year);
	printf("판매가격 : %d\n", (*gameInfo4).price);
	printf("제작회사 : %s\n", (*gameInfo4).company);

	//구조체 포인터 출력 다른 방법
	printf("-- 게임 출시 정보--\n");
	printf("게임이름 : %s\n", gameInfo4->name);
	printf("제작년도 : %d\n", gameInfo4->year);
	printf("판매가격 : %d\n", gameInfo4->price);
	printf("제작회사 : %s\n", gameInfo4->company);

	// 구조체 안에 구조체

	struct GameInfo gameInfo5;

	gameInfo5.name = "나도게임";
	gameInfo5.year = 2002;
	gameInfo5.price = 50;
	gameInfo5.company = "나도회사";

	printf("-- 게임 출시 정보--\n");
	printf("게임이름 : %s\n", gameInfo5.name);
	printf("제작년도 : %d\n", gameInfo5.year);
	printf("판매가격 : %d\n", gameInfo5.price);
	printf("제작회사 : %s\n", gameInfo5.company);

	struct GameInfo gameInfo6;

	gameInfo6.friendGame = &gameInfo5;

	printf("-- 게임 출시 정보--\n");
	printf("게임이름 : %s\n", gameInfo6.friendGame->name);
	printf("제작년도 : %d\n", gameInfo6.friendGame->year);
	printf("판매가격 : %d\n", gameInfo6.friendGame->price);
	printf("제작회사 : %s\n", gameInfo6.friendGame->company);


	// typedef 키워드
	// 자료형을 간단하게 줄이며 별명을 붙이는 기능

	typedef struct GameInfo gameInfo7;
	gameInfo7 game1;

	game1.name = "한글 게임";
	game1.year = "2022";

	GAME_INFO game2;

	game2.name = "한글 게임2";
	game2.year = "2023";



	printf("-- 게임 출시 정보--\n");
	printf("게임이름 : %s\n", game1.name);
	printf("제작년도 : %d\n", game1.year);
	printf("게임이름 : %s\n", game2.name);
	printf("제작년도 : %d\n", game2.year);

	struct GameInformation game3;

	return 0;
}