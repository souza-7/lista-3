#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int contador=1, altura, menorAltura;
	
	while(contador<=10) {
		printf("Digite a altura da %d� pessoa em cent�metros: ", contador); 
		scanf("%d", &altura);
		fflush(stdin);
			if(altura<50) {
				printf("Altura inv�lida!");
			} else {
				if(contador==1)
					menorAltura=altura;
				if(menorAltura>altura)	
					menorAltura=altura;
				contador++;		
		}
		}	
		printf("A menor altura �: %d", menorAltura);
return 0;
}

