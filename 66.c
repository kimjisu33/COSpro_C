#include<stdio.h>

int* solution(int len) {
	int* arr = (int*)malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++) arr[i] = i + 100;
	return arr;
}
void main() {
	int* result;
	result = solution(10);
	for (int i = 0; i < 10; i++) printf(" %d", result[i]);
}