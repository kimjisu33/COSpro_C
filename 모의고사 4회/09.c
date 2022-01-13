#include<stdio.h>

int solution(int arr[], int arr_len, int k) {
	int answer = 0;
	for (int i = 0; i < arr_len; i++) {
		answer += arr[i] / k;		//방의 최대 인원 나누기
		if (arr[i] % 4)answer++;	//한명이라도 남아있으면 방개수 추가
	}
	return answer;
}
int main() {
	int arr[] = { 13,16,9,2,10,7 };
	printf("%d\n", solution(arr, 6, 4));
}