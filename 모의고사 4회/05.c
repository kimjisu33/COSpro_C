#include<stdio.h>
#include<string.h>
int func_a(char s[]) {
	int cnt = 0;
	for (int i = 0; s[i] != 0; i++) {
		if (s[i] == '[')cnt++;
		if (s[i] == ']')cnt--;
	}
	return cnt;
}
int solution(char string[]) {
	int answer = 0;
	if (func_a(string) != 0)return -1;	//���� ���� ����
	for (int i = 0; i < strlen(string); i++) {
		if (string[i] == '[') answer++;	//���� �±� ������ �Ѱ��� �־ �迭
	}
	return answer;
}
int main() {
	printf("%d\n", solution("kim, [10, 20, 30] jing [30, 20]"));
}