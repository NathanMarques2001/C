#include <stdio.h>

int main(void){
	int year;

	printf("Insira um ano para verificar se eh bissexto -> ");
	scanf("%d",&year);

	if(year % 100 != 0 || year % 400 == 0 && year % 4 == 0){
		printf("%d eh bissexto!\n",year);
		return 0;
	}

	printf("%d nao eh bissexto!\n",year);	
	return 0;
}
