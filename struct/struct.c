#include <stdio.h>
// Structures podem conter diversos tipos de dados
struct Carro {
	char marca[50];
	char modelo[50];
	int ano;
	char modificacoes[50];
};


int main(){

	

	struct Carro carro1 = {"BMW", "X5", 1999};
	struct Carro carro2 = {"Ford", "Mustang", 1969, "Modificado"};
	struct Carro carro3 = {"Toyota", "Corolla", 2011};

	printf("Marca: %s | Modelo: %s | Ano: %d | Modificações: %s\n", carro1.marca, carro1.modelo, carro1.ano, carro1.modificacoes);
	printf("Marca: %s | Modelo: %s | Ano: %d | Modificações: %s\n", carro2.marca, carro2.modelo, carro2.ano, carro2.modificacoes);
	printf("Marca: %s | Modelo: %s | Ano: %d | Modificações: %s\n", carro3.marca, carro3.modelo, carro3.ano, carro3.modificacoes);

	return 0;
}