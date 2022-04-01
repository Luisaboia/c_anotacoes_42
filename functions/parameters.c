#include <stdio.h>

void funcao(char nome[30]){
	printf("Olá, %s\n", nome);
}

int main(){
	funcao("Luis");
	funcao("Robson");
	funcao("Ronaldinho");
	return 0;
}