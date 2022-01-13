#include<stdio.h>

int solution(char string[]) {
	int answer = 0;
	int number = 0;
	for (int i = 0; string[i] != 0; i++) {
		if ('0' <= string[i] && string[i] <= '9') {
			number = (number * 10) + (string[i]-'0'); //요소가 정수가 아닌 문자임!!!  '0'을 빼서 정수로 바꿔줘야함.
		}
		else {
			answer += number;
			number = 0;
		}
	}
	return answer;
}
int main() {
	printf("%d\n", solution("korean world Cup 2018, olympic stadium 10, 11 pm 1."));
}