#include <stdio.h>

int main(){
	// Sintaxe: (tipo)(nome)[] = {...}
	int meuArray[] = {10, 20, 30, 40, 50};

	for(int i = 0; i <= 4; i++){
		printf("Acessando... [%d]\n", meuArray[i]);
	}

	// Adicionando índices ao Array
	int array2[4];
	array2[0] = 25;
	array2[1] = 50;
	array2[2] = 75;
	array2[3] = 100;

	for(int x = 0; x < 4; x++){
		printf("Lendo array... [%d]\n", array2[x]);
	}

	return 0;
}