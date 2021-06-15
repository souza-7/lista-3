#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int fat, numero;
	
	printf("Digite o número: ");
	scanf("%d", &numero);
	
	if(numero == 0) 
		fat == 1;
	
	for(fat = 1;numero >= 1;numero--) { 
		fat *= numero; 
	}
	
	printf("O fatorial do número é: %d", fat);
	
return 0;
}
