#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int contador=1, juizes, nota[2], maiorNota;
	char finalista1[30], finalista2[30], finalista3[30], vencedor[30];
	
	printf("Qual o nome do 1° finalista? ");
	fgets(finalista1, 30, stdin);
	fflush(stdin);
	
	printf("Qual o nome do 2° finalista? ");
	fgets(finalista2, 30, stdin);
	fflush(stdin);
	
	printf("Qual o nome do 3° finalista? ");
	fgets(finalista3, 30, stdin);
	fflush(stdin);
	
	printf("Quantos juízes estarão presentes? ");
	scanf("%d", &juizes);

	do {
		printf("Juiz %d, qual a nota do finalista %s", contador, finalista1);
		scanf("%d", &nota[0]);
		fflush(stdin);
			
			while(nota[0]<0 || nota[0]>100) 
				printf("Você informou uma nota improvável, tente novamente!");		
		
		printf("Juiz %d, qual a nota do finalista %s", contador, finalista2);
		scanf("%d", &nota[1]);
		fflush(stdin);
			
			while(nota[1]<0 || nota[1]>100) 
				printf("Você informou uma nota improvável, tente novamente!");
				
		printf("Juiz %d, qual a nota do finalista %s", contador, finalista3);
		scanf("%d", &nota[2]);
		fflush(stdin);
			
			while(nota[2]<0 || nota[2]>100) 
				printf("Você informou uma nota improvável, tente novamente!");		
		
		contador++;
	} while(contador<=juizes);
	
	if (nota[0]>nota[1] && nota[0]>nota[2]){
		strcpy(vencedor, finalista1);
		maiorNota = nota[0];
	} else if(nota[1]>nota[0] && nota[1]>nota[2]){
		strcpy(vencedor, finalista2);
		maiorNota = nota[1];
	} else if(nota[2]>nota[0] && nota[2]>nota[1]){
	    strcpy(vencedor, finalista3);
		maiorNota = nota[2];
	}
	printf("\nNota do finalista 1 - %s: %d", finalista1,nota[0]);
	printf("\nNota do finalista 2 - %s: %d", finalista2,nota[1]);
	printf("\nNota do finalista 3 - %s: %d", finalista3,nota[2]);
	printf("\nO vencedor do concurso é: %s, com o total de pontos: %d", vencedor, maiorNota*juizes);	
				
return 0;	
}
