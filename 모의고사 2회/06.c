#include<stdio.h>

int solution(int weight[], int weight_len, int k) {
	int answer = 0;
	for (int i = 0; i < weight_len; i++)
		if (weight[i] > k)
			answer++;
	return answer;
}
int main() {
	int a[] = { 65,70,75,80,84};
	printf("%d\n", solution(a, 6, 75));
}