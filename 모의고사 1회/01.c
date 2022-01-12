#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int price[], int price_len, int money) {
	int answer = 0;
	
	for (int i = 0; i < price_len; i++) {
		answer += price[i];
	}
	answer = money - answer;

	if (answer < 0) answer = -1;
	return answer;
}
int main() {
	int price[] = { 2100,3200,2100,800 };
	int result = solution(price, 4, 10000);
	printf("%d\n", result);

	return 0;
}