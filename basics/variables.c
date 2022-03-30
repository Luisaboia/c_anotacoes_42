// int - Armazena inteiros (sem os decimais).
// float - Armazena números incluindo suas casas decimais.
// char - Armazena caracteres isolados.

// Sintaxe -> tipo nomeDaVariável = valor
// Exemplo: int meuNum = 42;
// int meuNum;
// meuNum = 15

// Para imprimir variáveis:

#include <stdio.h>

int main(){

	// Criando as variáveis.
	int meuNum = 42;
	float numFlut = 12.99;
	char letra = 'A';

	// Imprimindo as variáveis.
	printf("Estou no Basecamp da %d\nEste é o número flutuante: %f\nEsta é a letra: %c\n\n\n", meuNum,numFlut,letra);

	// Imprimindo múltiplas variáveis.
	int x,y;
	x = y = 21;
	printf("24 x 2 = %d\n",x+y);

	return 0;
}

// Regras gerais dos nomes das variáveis:
// 1. Podem conter letras maiúsculas, minúsculas e "_";
// 2. Devem começar obrigatoriamente com uma letra ou um "_";
// 3. São "case-sensitives": "minhaVar" é diferente de "minhavar";
// 4. Não podem conter espaços vazios ou caracteres especiais;
// 5. Não é possível usar palavras reservadas como nomes. Ex: int int.