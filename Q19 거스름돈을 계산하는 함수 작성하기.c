#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int price[], int price_len, int money) {
	int answer = 0;
	int total = 0;
	
	for (int i = 0; i < price_len; i++) total += price[i];
	answer = money - total;
	
	if (answer < 0) return -1;
	return answer;
}
int main() {
	int price[] = { 2100,3200,2100,800 };
	int result = solution(price, 4, 10000);
	int result2 = solution(price, 4, 5000);
	printf("%d\n", result);
	printf("%d\n", result2);
	return 0;
}