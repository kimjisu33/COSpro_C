#include<stdio.h>

int solution(int walls) {
	int answer = 0;
	int painted_walls = 0;
	int i;
	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i)+(i / 2) + (i / 4); // i�ð��� ĥ�� ���� ����(����)
						//1�ð� ���� 1�� ĥ��, 1�ð����� 1/2�� ĥ��, 1�ð� ���� 1/4�� ĥ��
	}
	answer = i-1;
	return answer;
}
int main() {
	printf("%d\n", solution(3));
	return 0;
}