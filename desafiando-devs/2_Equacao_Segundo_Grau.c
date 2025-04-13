#include <stdio.h>
#include <math.h>

int main(void){
	float a,b,c,delta,bhaskara,result1,result2;

	printf("Insira o valor de A -> ");
	scanf("%f",&a);
	printf("Agora, insira o valor de B -> ");
	scanf("%f",&b);
	printf("Por fim, insira o valor de C -> ");
	scanf("%f",&c);

	delta = pow(b,2.0) - (4 * a * c);
	printf("Delta = %.2f\n",delta);

	if(delta < 0){
		printf("Delta eh %f. Como o valor eh menor que zero nao tem raizes reais!\n",&delta);
		return 0;
	}

	result1 = (-b + sqrt(delta)) / (2 * a);
	result2 = (-b - sqrt(delta)) / (2 * a);

	printf("x' = %.2f\n",result1);
	printf("x'' = %2.f\n",result2);

	return 0;
}
