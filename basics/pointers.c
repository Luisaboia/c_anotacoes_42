#include <stdio.h>

int main(){
	int x = 10;
	int* ptr = &x; // O ponteiro ptr irá armazenar o endereço de memória de x

	// Um ponteiro é uma variável que armazena o endereço de memória de outras variáveis como seu valor.
	// Uma variável de ponteiro aponta à um Data Type, e é criado com o "*"
	printf("%d (Valor)\n", x);
	printf("%p (Ponteiro [Endereço de memória])\n\n", &x);

	// Para referenciar um ponteiro:
	printf("%p (Referenciar)\n", ptr);

	// Para deferenciar um ponteiro:
	printf("%d (Deferenciar)\n", *ptr);

	return 0;
}