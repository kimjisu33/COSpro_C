#include<stdio.h>

int solution(char string[]) {
	int answer = 0;
	int number = 0;
	for (int i = 0; string[i] != 0; i++) {
		if ('0' <= string[i] && string[i] <= '9') {
			number = (number * 10) + (string[i]-'0'); //��Ұ� ������ �ƴ� ������!!!  '0'�� ���� ������ �ٲ������.
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