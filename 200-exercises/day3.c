#include <stdio.h>
#include <string.h>

// 05/04/2025 - 23:00 - 23:40

void stringSize(void){
	char str[200];

	printf("Digite uma string de ate 200 caracteres para descobrir o tamanho dela -> ");
	fgets(str, sizeof(str), stdin);
    	str[strcspn(str, "\n")] = '\0';

	printf("Qtd. caracteres: %d\n",strlen(str));
}

void stringReverse(void){
	char str[200];

	printf("Digite uma string de ate 200 caracteres para descobrir como ela ficaria invertida -> ");
	fgets(str, sizeof(str), stdin);
    	str[strcspn(str, "\n")] = '\0';

	for(int i = strlen(str) - 1; i >= 0; i--){
		printf("%c",str[i]);
	}
}

void identifyVowels(void){
	char vowels[] = {'A','E','I','O','U','a','e','i','o','u'};
	char str[200];
	int aux = 0;

	printf("\nDigite uma string de ate 200 caracteres para descobrir quantas vogais ela tem -> ");
	fgets(str, sizeof(str), stdin);
    	str[strcspn(str, "\n")] = '\0';

	for(int i = 0; i < strlen(str); i++){
		for(int j = 0; j < strlen(vowels); j++){
			if(vowels[j] == str[i]){
				aux++;
			}
		}
	}

	printf("Qtd. vogais: %d\n",aux);
}

void identifyConsonants(void){
	char vowels[] = {'A','E','I','O','U','a','e','i','o','u'};
	char str[200];
	int aux = 0;

	printf("Digite uma string de ate 200 caracteres para descobrir quantas consoantes ela tem -> ");
	fgets(str, sizeof(str), stdin);
    	str[strcspn(str, "\n")] = '\0';

	for(int i = 0; i < strlen(str); i++){
		if(str[i] < 65 || str[i] > 90 && str[i] < 97 || str[i] > 122){
			continue;
		}
		int countVowels = 0;
		for(int j = 0; j < strlen(vowels); j++){
			if(vowels[j] == str[i]){
				countVowels++;
			}
		}
		if(countVowels == 0){
			aux++;
		}
	}

	printf("Qtd. consoantes: %d\n",aux);
}

void identifyWords(void){
	char str[200];
	int aux = 1;

	printf("Digite uma string de ate 200 caracteres para descobrir quantas palavras ela tem -> ");
	fgets(str, sizeof(str), stdin);
    	str[strcspn(str, "\n")] = '\0';

	for(int i = 0; i < strlen(str); i++){
		if(str[i] == ' '){
			aux++;
		}
	}

	printf("Qtd. palavras -> %d\n",aux);
}

void toUpper(void){
	char str[200];
	int aux = 1;

	printf("Digite uma string de ate 200 caracteres para converter seu texto em upper case -> ");
	fgets(str, sizeof(str), stdin);
    	str[strcspn(str, "\n")] = '\0';

	for(int i = 0; i < strlen(str); i++){
		if(str[i] > 96 && str[i] < 123){
			printf("%c",str[i]-32);
			continue;
		}
		printf("%c",str[i]);
	}
}

void toLower(void){
	char str[200];
	int aux = 1;

	printf("\nDigite uma string de ate 200 caracteres para converter seu texto em lower case -> ");
	fgets(str, sizeof(str), stdin);
    	str[strcspn(str, "\n")] = '\0';

	for(int i = 0; i < strlen(str); i++){
		if(str[i] > 64 && str[i] < 91){
			printf("%c",str[i]+32);
			continue;
		}
		printf("%c",str[i]);
	}
	printf("\n");
}

int main(void){
	stringSize();
	stringReverse();
	identifyVowels();
	identifyConsonants();
	identifyWords();
	toUpper();
	toLower();

	return 0;
}
