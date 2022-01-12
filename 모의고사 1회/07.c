#include<stdio.h>

int* solution(int arr[], int arr_len) {
	int left = 0;
	int right = arr_len - 1;
	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left += 1;
		right -= 1;
	}

	return arr;
}
int main() {
	int a[] = { 3,2,4,1 };
	int* b = solution(a, 4);
	for(int i=0 ; i<4;i++)	printf("%d ", b[i]);
	return 0;
}