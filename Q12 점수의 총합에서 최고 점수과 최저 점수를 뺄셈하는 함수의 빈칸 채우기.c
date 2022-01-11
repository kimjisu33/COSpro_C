#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int func_a(int s[], int arr_size) { //최대값 구하기
	int ret = 0;
	for (int i = 0; i < arr_size; i++) {
		if (s[i] > ret) ret = s[i];
	}
	return ret;
}
int func_b(int s[], int arr_size) { //배열의 합계
	int ret = 0;
	for (int i = 0; i < arr_size; i++) {
		 ret += s[i];
	}
	return ret;
}
int func_c(int s[], int arr_size) {	//최소값 구하기
	int ret = 101;
	for (int i = 0; i < arr_size; i++) {
		if (s[i] < ret) ret = s[i];
	}
	return ret;
}
int solution(int scores[], int scores_len) {
	int sum = func_b(scores, scores_len);
	int max_score = func_c(scores, scores_len);
	int min_score = func_a(scores, scores_len);
	return sum - max_score - min_score;
}
int main() {
	int a[] = { 50,90,65,100 };
	printf("%d\n", solution(a,4));
	return 0;
}