#include <stdio.h>

int main(){
	// While irá retornar o loop durante a condição ser verdadeira
	// Ex:

	int x;
	x = 10;

	while(x <= 20){
		printf("Somando... (%d)\n", x);
		x++;
	}
	return 0;

	// Isto pode causar um loop infinito na aplicação, é necessário tomar cuidado com Loops, principalmente While.
}
