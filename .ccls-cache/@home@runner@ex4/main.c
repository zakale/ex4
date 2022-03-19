#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media(float , float );

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, med;
	
	
	printf("digite a sua 1ª nota:\n");
	scanf("%f", &num1);
	printf("digite a sua 2º nota:\n");
	scanf("%f", &num2);

    med = media(num1, num2);
 	printf("a nota é: %.2f", med);
 	return 0;
}
float media (float n1, float n2){
  	float med;

  	med = (n1 + n2) /2;
	
	return med;
}