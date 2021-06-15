#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int contador=1, altura, menorAltura;
	
	while(contador<=10) {
		printf("Digite a altura da %dª pessoa em centímetros: ", contador); 
		scanf("%d", &altura);
		fflush(stdin);
			if(altura<50) {
				printf("Altura inválida!");
			} else {
				if(contador==1)
					menorAltura=altura;
				if(menorAltura>altura)	
					menorAltura=altura;
				contador++;		
		}
		}	
		printf("A menor altura é: %d", menorAltura);
return 0;
}

