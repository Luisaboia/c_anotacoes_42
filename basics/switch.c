#include <stdio.h>

int main(){
	int x = 4;

	switch(x){
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;
		case 3:
			printf("3\n");
			break;
		case 4:
			printf("4\n");
			break;
		default:
			printf("Não é nenhum desses números\n");
	}
	return 0;
}