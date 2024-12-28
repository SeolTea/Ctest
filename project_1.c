#include <stdio.h>

int main(void) {
	char name[256];
	int age = 0;
	float weight = 0;
	double height = 0;
	char what[256];

	printf("이름이 무엇입니까? : ");
	scanf_s("%s", name, sizeof(name));

	// scanf 에서는 \n 과 같은 서식 지정자를 넣어주면 안됨.

	printf("나이는 어떻게 됩니까? : ");
	scanf_s("%d", &age);

	//정수와 같은 숫자 저장의 경우 scanf 를 통해 작성한 데이터를 넣을 변수의 주소를 집어넣어야 함.

	printf("몸무게는 어떻게 됩니까? : ");
	scanf_s("%f", &weight);
	//실수를 scanf 시 .1 과 같은 소수점 구분 표시는 넣지 않는다. double 도 마찬가지, 무조건 f , lf 이다.

	printf("키는 어떻게 됩니까? : ");
	scanf_s("%lf", &height);

	printf("범죄명은 무엇입니까? : ");
	scanf_s("%s", what, sizeof(what));


	printf("\n\n--- 범죄자 정보 --- \n\n");
	printf("이름   : %s\n", name);
	printf("나이   : %d\n", age);
	printf("몸무게 : %.1f\n", weight);
	printf("키     : %.1lf\n", height);
	printf("범죄명 : %s\n", what);

	return 0;
}