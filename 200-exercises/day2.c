#include <stdio.h>

// 04/04/2025 - 22:40 - 23:10

void positiveOrNegative(void){
	int n;

	printf("Digite um numero para verificar se eh positivo ou negativo -> ");
	scanf("%d",&n);

	if(n >= 0) {
		printf("Eh positivo!");
	} else {
		printf("Eh negativo");
	}
}

void isPrime(void){
	int n;

	printf("\nDigite um numero para verificar se ele eh ou nao primo -> ");
	scanf("%d",&n);

	if(n > 1) {
		int aux = 0;
		for(int i = 2; i <= n; i++){
			if(n % i == 0){
				aux++;
			}
		}
		if(aux == 1){
			printf("Eh primo!");
		} else {
			printf("Nao eh primo!");
		}
	}
}

void checkApproval(void){
	int result1,result2,average = 13;

	printf("\nDigite a primeira nota (0 a 10) -> ");
	scanf("%d",&result1);

	printf("\nDigite a segunda nota (0 a 10) -> ");
	scanf("%d",&result2);

	if((result1 / result2) >= average){
		printf("Aprovado!");
	} else {
		printf("Reprovado!");
	}
}

void printPrimes(void){
	int n;

	printf("\nDigite um numero para verificar quais os numeros primos que existem de zero ate n -> ");
	scanf("%d",&n);

	for(int i = 2; i <= n; i++){
		int aux = 0;
		for(int j = 2; j <= i; j++){
			if(i % j == 0){
				aux++;
			}
		}
		if(aux == 1){
			printf("%d,",i);
		}
	}
}

void printEven(void){
	int n;

	printf("\nDigite um numero para verificar quais numeros pares existem de zero ate n -> ");
	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		if(i == 0 || i % 2 == 0){
			printf("%d,",i);
		}
	}
}


void printOdd(void){
	int n;

	printf("\nDigite um numero para verificar quais numeros impares existem de zero ate n -> ");
	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		if(i % 2 != 0){
			printf("%d,",i);
		}
	}
}

int main(void){
	positiveOrNegative();
	isPrime();
	checkApproval();
	printPrimes();
	printEven();
	printOdd();

	return 0;
}
