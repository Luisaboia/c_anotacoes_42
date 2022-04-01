#include <stdio.h>

// Criar uma função (Declaração)
void funcao(){
	// Corpo da função (Definição)
	printf("Olá, eu sou uma função.\n");
}

int funcao2(int x, int y){
	return x + y;
}

int main(){
	int resultado = funcao2(5,3);
	funcao(); // Chamando uma função
	printf("O resultado é: %d\n", resultado);
	return 0;
}