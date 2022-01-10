#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool solution(char*sentence) {
	char* str = (char*)malloc(sizeof(char) * 103);
	int len = 0;
	for (int i = 0; i < strlen(sentence); i++) {
		char ch = sentence[i];
		//공백이나 마침표가 아니면 str배열에 넣기
		if (ch != ' ' && ch != '.')str[len++]=ch;
	}
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i])return false;
	}
	return true;
}
int main() {
	printf("%d\n", solution("sentence"));
	printf("%d\n", solution("aaaa"));
	return 0;
}