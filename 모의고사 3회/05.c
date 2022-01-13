#include<stdio.h>

int solution(int mho_arr[], int mhe_arr[], int arr_len) {
	int result = -1;

	int mho_win = 0;
	int mhe_win = 0;
	for (int i = 0; i < arr_len; i++) {
		if (mho_arr[i] > mhe_arr[i])mho_win++;			//¹ÎÈ£ Ä«µå°¡ ´õ Å©¸é mho_win++
		else if (mho_arr[i] < mhe_arr[i])mhe_win++;		//¹ÎÈñ Ä«µå°¡ ´õ Å©¸é mhe_win++
	}
	if (mho_win > mhe_win) result = 1;					//¹ÎÈ£ ½ÂÁ¡ÀÌ ³ôÀ½
	else if (mho_win < mhe_win) result = 0;				//¹ÎÈñ ½ÂÁ¡ÀÌ ³ôÀ½
	//else result = -1;

	return result;
}

int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[] = { 13,12,10,11,7,8,9,10,1,2 };
	
	printf("%d\n", solution(a, b, 10));

	return 0;
}