#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int contador, quantidadeProduto;
	char auxiliar, tipoProduto[10];
	float preco;
	
	printf("Quantidade de produtos: ");
	scanf("%d", &quantidadeProduto);
	fflush(stdin);
	
	for (contador=1;contador<=quantidadeProduto;contador++){	
		if (contador<=quantidadeProduto){
	        printf("Nome do produto %d:\n ", contador);
		    fgets(tipoProduto, 10, stdin);
			fflush(stdin);
	    
	    	printf("Preço do produto %d:\n ", contador);
	    	scanf("%f", &preco);
	    	fflush(stdin);
			printf("O produto %s agora custa R$ %.2f\n", tipoProduto, preco*1.1);
	 
		   
			printf("Deseja cadastrar outro produto? |s|- sim e |n|- não.\n");
			scanf("%c", &auxiliar);
			fflush(stdin); 
			auxiliar=tolower(auxiliar);
		} else
		    printf("Por padrão o preço do último produto deve ser -1");
		if(auxiliar=='n') {
			contador=quantidadeProduto;
		}
	}
return 0;
}
