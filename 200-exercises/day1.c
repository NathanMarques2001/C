#include <stdio.h>
#include <string.h>

// 03/04/2024 - 17:10 - 17:30

void helloWorld(void){
	printf("Hello, World!\n");
}

void greetings(void){
	char name[20];

	printf("\nDigite seu nome -> ");
	scanf("%s",name);

	printf("Ola, %s! :)\n",name);
}

void sum(void){
	int x,y;

	printf("\nInsira o primeiro numero da soma -> ");
	scanf("%d",&x);

	printf("\nInsira o segundo numero da soma -> ");
	scanf("%d",&y);

	printf("%d + %d = %d\n",x,y,(x+y));
}

void evenOrOdd(void){
	int n;

	printf("Insira o numero para validar se eh par ou impar -> ");
	scanf("%d",&n);

	if(n % 2 == 0){
		printf("Eh par!\n");
	} else {
		printf("Eh impar!\n");
	}
}

int main(void){
	helloWorld();
	greetings();
	sum();
	evenOrOdd();

	return 0;
}
