#include <stdio.h>

int main(){
	int i, x, linhas;
	printf("Insira o número de linhas: ");
	scanf("%d", &linhas);
	for(i = 1; i <= linhas; i++){
		for(x = 1; x <= i; x++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}