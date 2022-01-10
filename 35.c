#include<stdio.h>
int main() {
	char color[5][10] = { "red","green","blue","brown","cyan" };
	int i, k;
	
	for (i = 0; i < 5; i++) {
		printf("%s\n", color[i]);
	}

	for (i = 0; i < 5; i++) {
		for (k = 0; k < 10; k++) {
			printf("%c", color[i][k]);
		}
		printf("\n");
	}

	return 0;
}