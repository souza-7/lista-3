#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	int notas, alunos, contador, mediaM, mediaF, notasM=0, notasF=0, alunosM=0, alunosF=0;
	
	printf("Quantidade de alunos: ");
	scanf("%d", &alunos);
	fflush(stdin);

	for(contador=1;contador<=alunos;contador++) {
		do {
			printf("Qual o sexo do aluno %d: ", contador);
			scanf("%c", &sexo);
			sexo=tolower(sexo);
			fflush(stdin);
			printf("Qual a nota do aluno %d: ", contador);
			scanf("%d", &notas);
			fflush(stdin);
	} while(sexo!='m' && sexo!='f');
		if(sexo=='m') {
			alunosM++;
			notasM=notas;	
			mediaM=notasM/alunosM;
		} else if(sexo=='f') {
			alunosF++;
			notasF=notas;
			mediaF=notasF/alunosF;
		}		
	}	
	printf("A nota m�dia masculina �: %d\n", mediaM);
	printf("A nota m�dia feminina �: %d\n", mediaF);
return 0;
}
