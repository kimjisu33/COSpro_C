#include<stdio.h>

int func_a(int a[], int n) {	//������ ����
	int total = 0;
	for (int i = 0; i < n; i++)total += a[i];
	return total;
}
int func_b(int a, int b) {		//�� ���ϱ�
	return (a < b) ? b - a : a - b;
}
int func_c(int a, int b[], int n) {	//���̰� ���� ū ���� ���ϱ�
	int diff;
	int max_diff = 0;
	int max_score = 0;
	for (int i = 0; i < n; i++) {
		diff = func_b(a, b[i]);
		if (max_diff < diff) {
			max_diff = diff;
			max_score = b[i];
		}
	}
	return max_score;
}
int solution(int scores[], int scores_len) {
	int answer = 0;
	int total = func_a(scores, scores_len);				//1.�ִ�����
	int avg = total / scores_len;						//2.���
	int max_score = func_c(avg, scores, scores_len);	//3.����ϰ� ���� ���̳��� �迭
	answer = max_score;
	return answer;
}
int main() {
	int scores[] = { 10,90,50,30,60 };
	printf("%d\n", solution(scores, 5));
}