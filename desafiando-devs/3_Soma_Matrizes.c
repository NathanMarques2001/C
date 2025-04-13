#include <stdio.h>

int main(void){
	int matrizA[5][5]= {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	int matrizB[5][5] = {{26,27,28,29,30},{31,32,33,34,35},{36,37,38,39,40},{41,42,43,44,45},{46,47,48,49,50}};
	int matrizC[5][5];

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			matrizC[i][j] = matrizA[i][j]+matrizB[i][j];
		}
	}

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("MatriC[%d][%d] = %d\n",i,j,matrizC[i][j]);
		}
	}
	
	return 0;
}
