#include<stdio.h>

int solution(int table[][5],int table_len) {
	int answer = 0;
	int max = 0;

	for (int i = 1; i < table_len; i++) { //�л���
		int cnt = 0;
		for (int j = 0; j <5; j++) { //5�г�
			if (table[0][j] == table[i][j]) cnt++; //�����԰� �л��� ���� ������ ī��Ʈ
		}
		if (max < cnt) {
			max = cnt;
			answer = i;
		}
	}
	return answer;
}
int main() {
	int a[][5] = {
		{2,6,1,7,3},
		{2,9,4,6,8},
		{6,3,4,7,1},
		{7,7,1,1,2},
		{8,6,9,7,3},
		{4,6,5,9,2}
	};
	printf("%d\n", solution(a, 6));
	return 0;
}