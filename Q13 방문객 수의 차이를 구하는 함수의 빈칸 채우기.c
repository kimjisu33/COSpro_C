#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int* func_a(int arr[], int arr_size, int num) { //num�� ������ �迭 �����
	int* ret = (int*)malloc(sizeof(int) * (arr_size - 1));
	int idx = 0;
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] != num)ret[idx++]=arr[i];
	}
	return ret;
}
int func_b(int a, int b) { //�� ���ϱ�
	if (a >= b)
		return a - b;
	else
		return b - a;
}
int func_c(int arr[], int arr_size) { //�ִ밪 ���ϱ�
	int ret = -1;
	for (int i = 0; i < arr_size; i++) {
		if (ret < arr[i])ret = arr[i];
	}
	return ret;
}
int solution(int visitor[], int n) {
	int max_first = func_c(visitor, n);
	int* visitor_removed = func_a(visitor, n, max_first);
	int max_second = func_c(visitor_removed, n - 1);
	int answer = func_b(max_first, max_second);
	return answer;
}
int main() {
	int a[] = { 4,7,2,9,3 };
	int result = solution(a,5);
	printf("%d\n", result);
	return 0;
}