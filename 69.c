#include<stdio.h>

int func_a(char (*p)[20], int n) {
//int func_a(char p[][20], int n) {
	for (int i = 0; i < n; i++) printf("%s\n", p[i]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 20; j++) {
			printf("%c", p[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void main() {
	char c[][20] = { "aaaa","bbbb","cccc" };
	func_a(c,3);
}