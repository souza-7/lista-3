#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, i, soma=0;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &a);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &b);
	
	for(i=1;i<=a;i++)
		soma = soma + b; 
	
	printf("Resultado: %d", soma);

return 0;
}
