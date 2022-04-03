#include <stdio.h>
#include <stdlib.h>

int main(){
	double x, y, temp;

	printf("\n===============\n");
	printf("Insira o primeiro número: ");
	scanf("%lf", &x);
	printf("Insira o segundo número: ");
	scanf("%lf", &y);

	printf("\n.....---= Fazendo a inversão =---.....\n");

	temp = x;
	x = y;
	y = temp;

	printf("\nNúmeros invertidos: 1. %.2lf / 2. %.2lf\n", x, y);

	return 0;
}