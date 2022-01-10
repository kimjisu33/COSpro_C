#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		int current = i;
		while (current != 0) {
			if (current %10==3 || current % 10 == 6 || current % 10 == 9) {
				count++;
				printf("¦");
			}
			current /= 10;
		}
	}
	printf("\n");
	return count;
}

int main() {
	
	printf("%d\n", solution(13));
	return 0;
}