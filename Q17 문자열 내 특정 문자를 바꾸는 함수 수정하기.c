#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

char* solution(char *s) {
	char* s_ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	strcpy(s_ret, s);

	for (int i = 0; s_ret[i] != 0; i++) {
		if (s_ret[i] == 'a')
			s_ret[i] = 'z';
		else if (s_ret[i] == 'z') //else �� �־����
			s_ret[i] = 'a';
	}
	return s_ret;
}
int main() {
	
	printf("%s\n", solution("abz"));

	return 0;
}