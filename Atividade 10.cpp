#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador= 0, numero;
	
	do{
		printf("Digite o número: ");
		scanf("%d", &numero);
		fflush(stdin);	
		contador++;
	}while(numero>=0 && contador<100);
	
	printf("A quantidade de números informados foi %d.", contador);
	
return 0;
}
