#include <stdio.h>

int main(){
	int soma1 = 150 + 100;
	int soma2 = 100 + soma1;
	int soma3 = soma1 + soma2;

	printf("%d\n\n\n\n",soma2);

	// Outros operadores:
	/*
		= -> x = x
		=+ -> x = x + y
		-= -> x = x - y
		*= -> x = x * y
		/= -> x = x / y
		%= -> x = x % y
		&= -> x = x & y
		|= -> x = x | y
		^= -> x = x ^ y
		>>= -> x = x >> y
		<<= -> x = x << y
	*/

	// Operadores de comparação:
	/*
		== -> Igual à
		!= -> Diferente de
		> -> Maior que
		< -> Menor que
		>= -> Maior ou igual à
		<= -> Menor ou igual à
	*/

	// Operadores lógicos:
	/*
		&& (And) -> Retorna verdadeiro se as duas condições forem verdadeiras
		|| (Or) -> Retorna verdadeiro se uma das duas condições forem verdadeiras
		! (Not) -> Retorna o valor contrário, retornaria falso caso o resultado fosse verdadeiro
	*/

	// Operador "sizeof"
	// sizeof irá retornar o tamanho (em Bytes) que aquela variável ocupa na memória.

	int meuInt;
	float meuFloat;
	double meuDouble;
	char meuChar;
	
	printf("%lu Bytes na memória.\n",sizeof(meuInt));
	printf("%lu Bytes na memória.\n",sizeof(meuFloat));
	printf("%lu Bytes na memória.\n",sizeof(meuDouble));
	printf("%lu Bytes na memória.\n",sizeof(meuChar));

	// %lu significa "long unsigned int", isto é mais seguro de usar nesta ocasião do que o %d.
	return 0;
}