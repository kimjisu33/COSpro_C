#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int func_a(int a[][4], int n) { //�ּҰ�
	int min = 1001;
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < 4; c++) {
			if (min > a[r][c]) min = a[r][c];
		}
	}

	return min;
}
int func_b(int a[][4], int n, int del) { //�ش� �ε����� �ִ밪�ֱ�
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < 4; c++) {
			if (del == a[r][c]) {	//�迭 ��� �� del�� ���� ã��
				a[r][c] = 1001;		//���� ū ���� 1001�� �ٲپ� �����Ѵ�.	
				return 1;
			}
		}
	}
	return 0;
}
int solution(int arr[][4], int n, int k) {
	int answer = 0;
	for (int i = 1; i <= k; i++) {
		answer =func_a(arr, i);
		//if (i == k)break;
		func_b(arr, n, answer);
	}
	return answer;
}
int main() {
	int a[][4] = {
		{5,12,4,31},
		{24,13,11,2},
		{43,44,19,26},
		{33,65,20,21}
	};
	int answer = solution(a, 4, 3);

	printf("%d\n", answer);

	return 0;
}