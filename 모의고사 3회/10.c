#include<stdio.h>
#include<string.h>
int solution(const char* strings[], int str_len) {
	int result = 0;
	int len;
	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i]);
		result += (len / 4);
		if (len % 4)	//(len%4)!=0 �� ���� -> ���ڿ��� 1�� �� �������� ��
			result++;
	}
	return result;
}
int main() {
	char* a[] = { "abc","hello" };
	printf("%d\n", solution(a, 2));
}