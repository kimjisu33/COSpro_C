#include<stdio.h>

int func_a(char dest[], char src[]) {
	int i;
	dest[0] = src[0];
	for (i = 1; src[i] != 0; i++) {	//문자열이 끝날때 까지
		dest[i] = src[i] + dest[0];	//두번째 문자열 부터 문자열 첫문자랑 더하기
	}
	dest[i] = 0;
	return 0;
}
char* solution(char string[]) {
	char* encoded = (char*)malloc(sizeof(char) * (strlen(string) + 1));
	func_a(encoded, string);
	return encoded;
}

int main() {
	printf("%s\n", solution("korean fighting"));
	return 0;
}