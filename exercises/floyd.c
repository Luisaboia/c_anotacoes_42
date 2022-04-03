#include <stdio.h>

int main(){
	int i, x, linhas, num = 1;
	printf("Insira o número de linhas: ");
	scanf("%d", &linhas);
	for(i = 1; i<=linhas;i++){
		for(x = 1; x <= i;x++){
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}
	return 0;
}