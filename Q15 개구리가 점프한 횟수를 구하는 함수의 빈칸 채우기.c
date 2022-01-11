#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int stones[], int stones_len) {
	int cnt = 0;
	int current = 0;
	while (current < stones_len) {
		current += stones[current];
		cnt++;
	}
	return cnt;
}
int main() {
	int a[] = { 2,5,1,3,2,1 };
	printf("%d\n", solution(a,6));
	return 0;
}