#include <stdio.h>
// Para incluir a biblioteca de funções matemáticas
#include <math.h>

int main(){
	// Para a raíz quadrada, usamos sqrt()
	printf("%f\n\n", sqrt(16));

	// Para arredondar números, usamos round() e ceil()
	printf("%f\n\n", ceil(1.4)); // +
	printf("%f\n\n", round(1.4)); // -

	// Para pegar a potência, usamos pow(x,y)
	printf("%f\n\n", pow(4,3));

	// Existem outras operações matemáticas, que
	// podem ser encontradas aqui:
	// https://www.w3schools.com/c/c_math.php
}
