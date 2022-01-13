#include<stdio.h>

int* solution(int arr[], int arr_len) {
	int* answer = (int*)malloc(sizeof(int) * 3);
	for (int i = 0; i < 3; i++) {
		answer[i] = 0;
		for (int k = 0; k < 4; k++) {
			answer[i] += arr[i * 4 + k];	//4개 간격으로
		}
	}
	return answer;
}
int main() {
	int arr[] = { 8,5,3,5,6,7,3,4,5,6,7,8 };
	int* result = solution(arr, 12);
	printf("%d %d %d\n", result[0], result[1], result[2]);
}