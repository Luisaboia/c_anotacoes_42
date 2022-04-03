/*

----------------------------------------
| Tipos de Dados | Tamanho | Descrição |
----------------------------------------
--------------------------------------------------------------------------------------------------
| int | 2 a 4 Bytes | Armazena números inteiros                                                  |
| float | 4 Bytes | Armazena números incluindo suas casas decimais (máx: 7 casas)                |
| double | 8 Bytes | Armazena números fracionários, contendo suas casas decimais (máx: 15 casas) |
| char | 1 Byte | Armazena uma letra, caractere ou número, ou um código ASCII                    |
--------------------------------------------------------------------------------------------------

Outros tipos de dados:

short int (%hd): Ocupam usualmente 2 Bytes;
unsigned int (%u): As vezes ocupam 2 Bytes, mas usualmente ocupam 4 Bytes;
long int (%ld, %li): As vezes ocupam 4 Bytes, mas usualmente ocupam 8 Bytes;
long long int (%lld, %lli): Ocupam 8 Bytes;
unsigned long int(%lu): Ocupam 4 Bytes;
unsigned long long int(%llu): Ocupam 8 Bytes;
signed char(%c): Ocupam 1 Byte;
unsigned char(%c): Ocupam 1 Byte;
long double(%Lf): Ocupam 10, 12 ou 16 Bytes.

Especificadores dos tipos de dados:

%d ou %i: int;
%f: float;
%lf: double;
%c: char;
%s: strings.

*/

// Exemplos:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	float b;
	double c;
	char d;
	long e;
	long long f;
	long double g;
	short h;
	signed int i;
	unsigned int j;

	printf("int: %ld Bytes.\n", sizeof(a));
	printf("float: %ld Bytes.\n", sizeof(b));
	printf("double: %ld Bytes.\n", sizeof(c));
	printf("char: %ld Bytes.\n", sizeof(d));
	printf("long: %ld Bytes.\n", sizeof(e));
	printf("long long: %ld Bytes.\n", sizeof(f));
	printf("long double: %ld Bytes.\n", sizeof(g));
	printf("short: %ld Bytes.\n", sizeof(h));
	printf("signed int: %ld Bytes.\n", sizeof(i));
	printf("unsigned int: %ld Bytes.\n", sizeof(j));

	return 0;
}