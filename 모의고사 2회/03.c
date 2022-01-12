#include<stdio.h>
#include<stdlib.h>

int* func_a(int arr[], int arr_size, int num) {
	int* ret = (int*)malloc(sizeof(int) * (arr_size-1));
	int idex = 0;
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] != num)ret[idex++] = arr[i];
	}
	return ret;
}
int func_b(int a, int b) {
	if (a > b)return a - b;
	else return b - a;
}
int func_c(int arr[], int arr_size) {
	int ret = -1;
	for (int i = 0; i < arr_size; i++) {
		if (ret < arr[i])
			ret = arr[i];
	}
	return ret;
}
int solution(int visitor[],int n) {
	int max_first = func_c(visitor, n);
	int* visitor_remove = func_a(visitor, n, max_first);
	int max_second = func_c(visitor_remove, n - 1);
	int answer=func_b(max_first, max_second);
	return answer;
}
int main() {
	int a[] = { 1,2,3,4,5,10 };
	printf("%d\n", solution(a, 6));
	return 0;
}