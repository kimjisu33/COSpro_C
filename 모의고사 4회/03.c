#include<stdio.h>

int solution(int student[], int apts) {
	int result = 0;
	int total = 0;
	for (int i = 0; i < apts; i++) total += student[i]; //�¿����ϴ� �� �л� ��
	result = total / 12;	//������ 12��
	if (total % 12) result++;	//�������� ������ �ѹ��� �Դٰ�����

	return result;
}

int main() {
	int a[] = { 13,2,3 };
	printf("%d\n", solution(a, 3));

	return 0;
}