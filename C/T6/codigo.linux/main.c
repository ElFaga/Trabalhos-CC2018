#include "myList.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
	int urMom=0;
	int c, n, b, op, i=10;

	inicializa();
	// pega o alcance
	printf("Digite o alcance(9<n<1000000)\n");
	scanf("%d", &n);

	while(n<9 || n>1000000){
		printf("Input invalido, tente novamente\n");
		scanf("%d", &n);
	}

	while(i<=n){
		b = eNarcisismo(i);

		if(b==1)
			insere(i);

		i++;
	}
	//entra no menu
	while(urMom!=666){
		system("clear");
		b=0;
		n=0;
		printf("\n-----Welcome-----\n");
		printf("1- Imprimir\n");
		printf("2- Buscar\n");
		printf("3- Retirar\n");
		printf("0- Sair\n");
		printf("\n-----------------\n");
		scanf("%d", &op);
		//executa o menu
		switch (op){
			case 1:
			system("clear");
			imprime();
			printf("Digite qualquer nymero para sair\n");
			scanf("%d", &c);

			break;

			case 2:
			system("clear");
			printf("Digite o numero a ser procurado\t");
			scanf("%d", &n);

			if(busca(n)==1){
				printf("\nO Numero esta na estrutura\n");
			}else{
				printf("\nO Numero nao esta na estrutura\n");
			}
			printf("Digite qualquer numero para sair\n");
			scanf("%d", &c);

			break;

			case 3:
			system("clear");
			printf("E recomendado uma busca antes da extracao...\n");
			printf("Digite o numero a ser retirado\t");
			scanf("%d", &n);

			if(busca(n)==1){
				retira(n);
				printf("\nO Numero foi retirado\n");
			}else{
				printf("\nO Numero nao esta na estrutura\n");
			}
			printf("Digite qualquer numero para sair\n");
			scanf("%d", &c);

			break;

			case 0:
			urMom = 666;
			break;
		}
	}
//o codigo se explica, nao ha muita necessidade de compentario
//no linux nao ha system("pause");
	esvazia();
}