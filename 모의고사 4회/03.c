#include<stdio.h>

int solution(int student[], int apts) {
	int result = 0;
	int total = 0;
	for (int i = 0; i < apts; i++) total += student[i]; //태워야하는 총 학생 수
	result = total / 12;	//정원이 12명
	if (total % 12) result++;	//나머지가 있으면 한번더 왔다가야함

	return result;
}

int main() {
	int a[] = { 13,2,3 };
	printf("%d\n", solution(a, 3));

	return 0;
}