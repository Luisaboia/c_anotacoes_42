#include <stdio.h>

int main(){

	for(int i = 0; i<=10; i++){
		printf("Somando (%d)\n", i);
	}

	// Break + for
	// Irá quebrar o For Loop na condição especificada.

	for(int x = 0; x <=10; x++){
		printf("Somando [2] (%d)\n", x);
		if(x == 7){
			break;
		}
	}

	// Continue + for
	// Irá pular o valor especificado (3).
	for(int y = 0; y <=10; y++){
		if(y == 3){
			continue;
		}
		printf("Somando [3] (%d)\n", y);
	}

	return 0;
}