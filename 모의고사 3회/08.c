#include<stdio.h>

int solution(char pass[],char key[]) {
	int answer = 0;
	int match_cnt=0;	//초기화 해줘야함
	for (int i = 0; key[i] != 0; i++) {
		for (int k = 0; pass[k] != 0; k++) {
			if (key[i] == pass[k]) {
				match_cnt++;
				break;
			}
		}
	}
	if (match_cnt >= strlen(key))answer = 1;
	return answer;
}
int main() {
	printf("%d\n", solution("Ga##","Ga#9"));
}