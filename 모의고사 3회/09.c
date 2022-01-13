#include<stdio.h>

int* solution(int scores[][4], int scores_len) {
	int* result = (int*)malloc(sizeof(int) * scores_len);
	for (int i = 0; i < 4; i++) {
		result[i] = 0;
		for (int j = 0; j < 4; j++) {
			if (i != j) {
				result[i] += scores[i][j] * 2; //½ÂÁ¡ 2Á¡
			}
		}
	}
	return result;
}
int main() {
	int a[][4] = {
		{0,1,0,0},
		{0,0,0,1},
		{1,1,0,1},
		{1,0,0,0}
	};
	int* b = solution(a, 4);

	for (int i = 0; i < 4; i++) {
		printf("%d ", b[i]);
	}
}