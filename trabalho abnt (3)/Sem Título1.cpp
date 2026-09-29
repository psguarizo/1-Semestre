#include<stdio.h>
#include<windows.h>
void main (){
	SetConsoleOutputCP(CP_UTF8);
	float peso, excesso, limite = 50;
	printf("Digite o peso da pesca:\n");
	scanf ("%f", &peso);
	if(peso > 50){
		excesso = peso - limite;
		multa = excesso * 4;
		printf ("Voce excedeu o limite em %.2f quilos\n,", excesso); 
		printf ("Pagara uma multa de %.2f", multa);
	}else{
		printf("Voce nao excedeu o limite de 50 quilos");	
	}
	getch ();
}

