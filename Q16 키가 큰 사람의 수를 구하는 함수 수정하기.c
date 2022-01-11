#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int height[], int height_len, int k) {
	int answer = 0;
	for (int i = 0; i < height_len; i++) {
		if (height[i] > k)
			answer++;
	}
	return answer;
}
int main() {
	int a[] = { 165,170,175,180,184 };
	printf("%d\n", solution(a, 5, 170));

	return 0;
}