#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int fat, numero;
	
	printf("Digite o n�mero: ");
	scanf("%d", &numero);
	
	if(numero == 0) 
		fat == 1;
	
	for(fat = 1;numero >= 1;numero--) { 
		fat *= numero; 
	}
	
	printf("O fatorial do n�mero �: %d", fat);
	
return 0;
}
