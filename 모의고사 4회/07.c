#include<stdio.h>
#include<string.h>

int solution(char input[], int arr_len) {
	int answer = 0;
	int x, y;
	x = y = 0;
	for (int i = 0; i < arr_len; i++) {
		if (input[i] == 'w')y--;
		else if (input[i] == 's')y++;
		else if (input[i] == 'a')x--;
		else if (input[i] == 'd')x++;
		if (x == y)answer++;	//x�� y ���ƾ� ++

	}
	return answer;
}
int main() {
	char a[] = "waawsddsassadw3wd";
	printf("%d\n", solution(a,strlen(a)));
}