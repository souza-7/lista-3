#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int frutas;
	char comprarMais;
	
	do {
		printf("Segue abaixo as tr�s op��es de frutas:\n");
		printf("1-Abacaxi\n2-Ma�a\n3-Pera\n");
		printf("Digite o n�mero da sua escolha");
		scanf("%d", &frutas);
		fflush(stdin);
			switch(frutas) {
				case 1: printf("Abacaxi\n", frutas); break;
				case 2: printf("Ma�a\n", frutas); break;
				case 3: printf("Pera\n", frutas); break;	
				default: printf("N�o temos essa op��o dispon�vel!\n");		
			}		
			do {
				printf("Voc� deseja comprar mais?|s|- sim ou |n|- n�o.");
				scanf("%c", &comprarMais);
				fflush(stdin);
			} while(comprarMais!='s' && comprarMais!='n');	
	} while(comprarMais == 's');
	
return 0;	
}
