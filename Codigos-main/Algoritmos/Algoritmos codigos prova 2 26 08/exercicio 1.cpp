#include <stdio.h>

 int main(){
 	printf("digite um numero\n");
 	int numero;
 	scanf("%d", &numero);
 	if(numero < 0){
 		printf("O numero informado eh negativo");
	 }else if (numero <=100){
	 	printf("o numero informado eh menor que 100");
	 } else{
	 	printf("o numero informado eh maior que 100");
	 }
 }

