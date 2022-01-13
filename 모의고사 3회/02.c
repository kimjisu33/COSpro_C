#include<stdio.h>

int func_a(int arr[], int len) {
	int total = 0;
	for (int i = 0; i < len; i++)total += arr[i];
	return total;
}
int* solution(int total, int arr[], int arr_len) {
	int* result = (int*)malloc(sizeof(int) * arr_len);
	int req_total = func_a(arr, arr_len);
	if (total < req_total) {
		for (int i = 0; i < arr_len; i++)
			result[i] = total / arr_len;
	}
	else {
		for (int i = 0; i < arr_len; i++)
			result[i] = arr[i];
	}
	return result;
}
int main() {
	int req_arr[4] = { 200,300,200,300 };
	int* result = solution(1000, req_arr, 4);
	for (int i = 0; i < 4; i++)printf("%d\n", result[i]);
}