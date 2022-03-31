#include <stdio.h>

int main(){
	char greetings[] = "Hello World";
	printf("%s\n", greetings);

	// %c serve para capturar apenas um caractere isolado.
	printf("%c\n", greetings[2]);

	// Modificando um índice da string
	greetings[0] = 'P';
	printf("%s\n", greetings);

	// Criando strings de forma alternativa
	// \0 irá dizer ao interpretador que o retorno será nulo, indicando o fim da string.
	char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	printf("%s\n", greetings2);
	return 0;
}