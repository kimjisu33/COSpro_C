#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool solution(char* sentence) {
	char* str = (char*)malloc(sizeof(char) * 103);
	int len = 0;
	for (int i = 0; sentence[i] != 0; i++) {
		char ch = sentence[i];
		if (ch != ' ' && ch != '.')str[len++] = ch;
	}
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i])return false;
	}
	return true;
}
int main() {
	printf("%d\n", solution("eeeeeed"));
	printf("%d\n", solution("abccba"));
	return 0;
}