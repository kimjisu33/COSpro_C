#include<stdio.h>

int solution(int arr[], int arr_len, int k) {
	int answer = 0;
	for (int i = 0; i < arr_len; i++) {
		answer += arr[i] / k;		//���� �ִ� �ο� ������
		if (arr[i] % 4)answer++;	//�Ѹ��̶� ���������� �氳�� �߰�
	}
	return answer;
}
int main() {
	int arr[] = { 13,16,9,2,10,7 };
	printf("%d\n", solution(arr, 6, 4));
}