#include <stdio.h>

int main(void) {

	//������ �迭 - 2����

	int arr2[4][2] = {
		{1,2} ,
		{3,4} ,
		{5,6} ,
		{7,8}
	};

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d", arr2[i][j]);
		}

		printf("\n");
	}

	arr2[3][0] = 9;
	arr2[3][1] = 10;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d", arr2[i][j]);
		}

		printf("\n");
	}

	// ������ �迭 - 3����
	int arr3[3][3][3] = {

		{
			{1,2,3},
			{4,5,6},
			{7,8,9}
		},
		{
			{10,11,12},
			{13,14,15},
			{16,17,18}
		},
		{
			{19,20,21},
			{22,23,24},
			{25,26,27}
		}

	};

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			for (int k = 0; k < 3; k++) {

				printf("%d", arr3[i][j][k]);

			}

			printf("\n");
		}

		printf("\n\n");
	}

	return 0;
}