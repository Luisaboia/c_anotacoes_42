// Recursão funciona como uma função callback.

#include <stdio.h>

int soma(int num);

int main(){
	int resultado = soma(10);
	printf("Resultado: %d\n", resultado);
	return 0;
}

int soma(int num){
	if(num > 0){
		return num + soma(num-1);
	} else {
		return 0;
	}
}