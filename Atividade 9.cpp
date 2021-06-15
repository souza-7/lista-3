#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char sexo, corOlho[10], corCabelo[10];
	int idade, contador=1, mulherEspecifica=0, maiorIdade, pessoas;
	float porcentagem;
	
	printf("Seja bem vindo a nossa pesquisa!\n");
	printf("Quantas pessoas serão cadastradas? ");
	scanf("%d", &pessoas);
	fflush(stdin);
	
	printf("Para encerrar a pesquisa digite '-1' no campo idade.\n");
	do {
		printf("Digite o sexo da %dª pessoa |m|ou|f|: \n", contador);
		scanf("%c", &sexo);
		sexo=tolower(sexo);
		fflush(stdin);
			
		printf("Cor dos olhos da %dª pessoa: |azul| |castanho| |verde| |preto|: \n", contador);
		scanf("%s", &corOlho);
		fflush(stdin);
			
		printf("Cor do cabelo da %dª pessoa: |loiro| |castanho| |preto|: \n", contador);
		scanf("%s", &corCabelo);
		
		printf("Informe a idade da %dª pessoa: \n", contador);
		scanf("%d", &idade);
		fflush(stdin);
		
		if((idade>=18 || idade<=35) && (sexo=='f') && strcmp(corOlho, "verde") && strcmp(corCabelo, "loiro"));
			mulherEspecifica++;
		
		if(contador==1)
			maiorIdade=idade;
		if(maiorIdade<idade) 
			maiorIdade=idade;
			
		contador++;	
	} while(idade>=0);	
		porcentagem=(mulherEspecifica/pessoas) * 100; 
		
		printf("Obrigado por contribuir com a pesquisa!\n");
		printf("O/A habitante com a maior idade possui: %d anos.\n", maiorIdade);
		printf("A porcentagem de habitantes do sexo feminino, com idade entre 18 e 35 anos, olho verde e cabelo loiro é de: %.2f %%", porcentagem);

return 0;	
}
