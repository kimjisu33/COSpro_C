#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int* solution(int arr[], int arr_len) {
	int left = 0;
	int right = arr_len - 1;
	while (left<right) { //left°¡ rightº¸´Ù °°°Å³ª Å©¸é ¸ØÃã
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	return arr;
}
int main() {
	int a[]={ 1,2,3,4,5 };
	int n = 5;
	for (int i = 0; i < n; i++) printf(" %d", a[i]);
	printf("\n");

	int* result = solution(a, n);
	for (int i = 0; i < n; i++) printf(" %d", result[i]);
	printf("\n");
	return 0;
}