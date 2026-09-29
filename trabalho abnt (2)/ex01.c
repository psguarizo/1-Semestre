#include <stdio.h>
int main(){
	int numero;
	int passos = 0; 
	
	printf("Digite um numero inteiro\n:");
	scanf("%d", &numero);
	while (numero != 1) {
		if (numero % 2 == 0){
			numero = numero / 2;
		} else {
			numero = 3 * numero + 1;
		}
		passos++;
	}
	printf ("Total de passos: %d\n", passos);
	getch();

}