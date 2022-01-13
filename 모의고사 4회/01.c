#include<stdio.h>

int solution(int cards[]) {
	int answer = 0;
	for (int i = 0; i < 5; i++) {
		for (int k = i + 1; k < 5; k++) {
			for (int m = k + 1; m < 5; m++) {
				if ((cards[i] + cards[k] + cards[m]) % 2) {
					printf("%d %d %d\n", cards[i], cards[k], cards[m]);
					answer++;
				}
			}
		}
	}
	return answer;
}
int main() {
	int a[] = { 7,5,6,4,9 };
	printf("%d\n", solution(a));
}