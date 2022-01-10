#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer=(int*)malloc(sizeof(int)*6);
	char* size[] = { "XS","S","M","L","XL","XXL" };
	for (int i = 0; i < 6; i++) { answer[i] = 0; } //0으로 초기화 해줘야함
	/*for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "XS") == 0) answer[0]++;
		else if (strcmp(shirt_size[i], "S") == 0) answer[1]++;
		else if (strcmp(shirt_size[i], "M") == 0) answer[2]++;
		else if (strcmp(shirt_size[i], "L") == 0) answer[3]++;
		else if (strcmp(shirt_size[i], "XL") == 0) answer[4]++;
		else if (strcmp(shirt_size[i], "XXL") == 0) answer[5]++;
	}*/
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < shirt_size_len; j++) {
			if (strcmp(size[i], shirt_size[j]) == 0) answer[i]++;
		}
	}

	return answer;
}

int main() {
	char* shirtsize[] = { "XS","S","XXL","XS","XL" };
	int* a = solution(shirtsize, 5);
	for (int i = 0; i < 6; i++) printf("%d\n", a[i]);

	return 0;
}