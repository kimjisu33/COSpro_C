#include<stdio.h>

int solution(int arr[], int arr_len, int payload) {
	int cnt = 0;
	int weight = 0;
	int diff = 0;

	for (int i = arr_len - 1; i >= 0; i--) {	//최대한 적은 추를 사용해야 하므로 마지막 방부터 0번 방까지
		diff = payload - weight;
		if (diff >= arr[i]) {
			printf("%d\n", arr[i]);
			weight += arr[i];
			cnt++;
		}
	}
	if (weight != payload) cnt = 0;

	return cnt;
}
int main() {
	int arr[] = { 1,2,3,5,7,11,13,17,19,23 };
	printf("%d개\n", solution(arr, 10, 25));
}