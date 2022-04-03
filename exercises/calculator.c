#include <stdio.h>
#include <stdlib.h>

int main(){
	double x, y;
	char op;
	int resultado;

	printf("\n===============\n");
	printf("\nEscolha o X: ");
	scanf("%lf", &x);
	printf("Escolha o Y: ");
	scanf("%lf", &y);
	printf("Escolha a operação: ");
	scanf("%s", &op);

	printf("\nX: %.1lf, Y: %.1lf, Operação: %c\n", x,y,op);

	switch(op){
		case '+':
			resultado = x + y;
			printf("\n%.1lf + %.1lf = %d\n", x, y, resultado);
			break;
		case '-':
			resultado = x - y;
			printf("\n%.1lf - %.1lf = %d\n", x, y, resultado);
			break;
		case '*':
			resultado = x * y;
			printf("\n%.1lf * %.1lf = %d\n", x, y, resultado);
			break;
		case '/':
			resultado = x / y;
			printf("\n%.1lf / %.1lf = %d\n", x, y, resultado);
			break;
		default:
			printf("\nNão suportamos esta operação.\n");
			break;
	}
	printf("\n===============\n");
	return 0;
}