#include<stdio.h>

int solution(int price, char*grade) {
	int answer = 0;

	if(grade=="S")price += price * 0.05;
	else if (grade == "G")price += price * 0.1;
	else if (grade == "V")price += price * 0.15;
	
	answer = price;

	return answer;
}
int main() {
	printf("%d\n", solution(10000, "S"));
	return 0;
}