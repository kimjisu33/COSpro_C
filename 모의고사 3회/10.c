#include<stdio.h>
#include<string.h>
int solution(const char* strings[], int str_len) {
	int result = 0;
	int len;
	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i]);
		result += (len / 4);
		if (len % 4)	//(len%4)!=0 도 가능 -> 문자열이 1개 라도 남아있을 시
			result++;
	}
	return result;
}
int main() {
	char* a[] = { "abc","hello" };
	printf("%d\n", solution(a, 2));
}