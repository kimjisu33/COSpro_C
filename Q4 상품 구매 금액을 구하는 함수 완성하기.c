#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int price, char* grade) {
	int answer = 0;

	if (strcmp(grade, "S") == 0) {
		answer =(int)(price * 0.95);
	}else if (strcmp(grade, "G") == 0) {
		answer = (int)(price * 0.9);
	}else if (strcmp(grade, "V") == 0) {
		answer = (int)(price * 0.85);
	}

	return answer;
}
int main() {

	printf("%d\n", solution(10000, "G"));

	return 0;
}