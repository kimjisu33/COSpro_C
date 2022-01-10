#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++) {
		if (650 <= scores[i] && scores[i] < 800)count++;
	}
	return count;
}
int main() {
	int a[] = { 600,900,780,660,800,600,500,750,860,700 };
	printf("%d\n", solution(a, 10));

	return 0;
}