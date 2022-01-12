#include<stdio.h>

int solution(int data[], int data_len) {
	int total = 0;
	for (int i = 0; i < data_len; i++) total += data[i];
	int cnt = 0;
	int average = total / data_len;
	for (int i = 0; i < data_len; i++)
		if (data[i] < average) cnt += 1;
	return cnt;
}
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,8,10 };
	printf("%d\n", solution(a,10));
	return 0;
}