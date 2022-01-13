#include<stdio.h>

int solution(int walls) {
	int answer = 0;
	int painted_walls = 0;
	int i;
	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i)+(i / 2) + (i / 4); // i시간후 칠한 벽의 개수(면적)
						//1시간 동안 1개 칠함, 1시간동안 1/2개 칠함, 1시간 동안 1/4개 칠함
	}
	answer = i-1;
	return answer;
}
int main() {
	printf("%d\n", solution(3));
	return 0;
}