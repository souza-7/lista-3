#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int frutas;
	char comprarMais;
	
	do {
		printf("Segue abaixo as três opções de frutas:\n");
		printf("1-Abacaxi\n2-Maça\n3-Pera\n");
		printf("Digite o número da sua escolha");
		scanf("%d", &frutas);
		fflush(stdin);
			switch(frutas) {
				case 1: printf("Abacaxi\n", frutas); break;
				case 2: printf("Maça\n", frutas); break;
				case 3: printf("Pera\n", frutas); break;	
				default: printf("Não temos essa opção disponível!\n");		
			}		
			do {
				printf("Você deseja comprar mais?|s|- sim ou |n|- não.");
				scanf("%c", &comprarMais);
				fflush(stdin);
			} while(comprarMais!='s' && comprarMais!='n');	
	} while(comprarMais == 's');
	
return 0;	
}
