#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n=0, contador=1;
	double h=0;
	
	printf("Quanto vale n: ");
	scanf("%d", &n);
	
	while(contador <= n) {
		h += (1.0/contador); 
		contador++;
	}
	printf("O valor de 'h' é: %.4lf", h);
	return 0;
}


