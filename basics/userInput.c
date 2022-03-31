#include <stdio.h>

int main(){
	int num;

	// Pergunta ao usuário para digitar um número aí:
	printf("Digita um número aí: \n");

	// Escaneia o número digitado;
	scanf("%d", &num);

	// Printa o número
	printf("O número é %d\n", num);

	
	// Capturando strings
	char nome[30];

	printf("Digita seu nome aí: \n");
	scanf("%s", nome);
	printf("Olá, %s\n", nome);
	return 0;
}