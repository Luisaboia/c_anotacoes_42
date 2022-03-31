/*
(Só é possível utilizar operadores lógicos)

 if -> Um bloco de código será executado caso os parâmetros forem verdadeiros;
 else if -> O bloco de código será executado caso os parâmetros dos blocos anteriores forem falsos;
 else -> Condição que irá fazer o bloco de código executar caso o parâmetro de todos os blocos anteriores forem falsos;
 switch -> Usa-se apenas quando é necessário alternar blocos de código.
*/

#include <stdio.h>

int main(){

	int x;
	int y;
	x = 10;
	y = 20;


	if(1>2){
		printf("1>2: Verdadeiro\n");
	} else {
		printf("1>2: Falso\n");
	}

	if (2>1){
		printf("2>1: Verdadeiro\n");
	} else {
		printf("2>1: Falso\n");
	}

	if(x>y){
		printf("x>y: Verdadeiro\n");
	} else {
		printf("x>y: Falso\n");
	}

	// Operadores ternários
	(x < 15) ? printf("x<15: Verdadeiro\n") : printf("x<15: Falso\n");

	return 0;
}