#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n, contador=1, fat=1;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	if(n==0)
		fat=1;
	
	while(contador<=n) {
		fat *= contador; 
		contador++;
	}
	printf("O fatorial do número %d é: %d", n, fat);
	
	return 0;
}
