#include<stdio.h>

int* solution(int a[][3], int b[][3], int len) {
	int* answer=(int*)malloc(sizeof(int)*2);

	int total = 0;		//학생 명수
	int total_a = 0;	//찬성 합계
	int total_b = 0;	//방대 합계
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 3; j++) {
			total += a[i][j] + b[i][j];
			total_a += a[i][j];
			total_b += b[i][j];
		}
	}
	printf("%d\n", total);
	printf("%d\n", total_a);
	printf("%d\n", total_b);
	answer[0] = (int)((double)total_a / total * 100);	//백분율
	answer[1] = (int)((double)total_b / total * 100);

	return answer;
}
int main() {
	int a[][3] = {
		{3,2,7},
		{4,2,6},
		{5,3,8},
		{7,6,8}
	};
	int b[][3] = {
		{30,50,120},
		{70,80,180},
		{120,150,260},
		{102,120,104}
	};
	int* result = solution(a,b,4);
	printf("%d%%    %d%%", result[0], result[1]);
}