#include<stdio.h>

double solution(int a, int b) {
	double answer = 0;
	int diff = (a < b) ? b - a : a - b;
	answer = 10.0 / diff;
	return answer * 60;
}
int main() {
	printf("%f\n", solution(10, 12));
}