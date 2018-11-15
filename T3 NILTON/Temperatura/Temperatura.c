/*
    Trabalho realizado por:
        Lucas Roberto Raineri Oliveira (38346)
        Joao Vitor de Oliveira (38342)
        Kaledi da Silva Dias (38343)
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	int medidas[1000], l = 1,mediamaior[1000],mediamenor[1000],intervalo,i=0,j=1,k=0,mediaMaior=-999999999,mediaMenor=999999999,divisao,cont_medidas,contteste = 0,soma=0,aux=1;
	do{
		system("cls");
		printf("Informe quantas medidas foram tiradas.\n");
		scanf("%d",&cont_medidas);
		while(cont_medidas < 0 || cont_medidas > 800){
			printf("Dado invalido, tente novamente\n");
			scanf("%d",&cont_medidas);
		}
		printf("Informe o intervalo entre as medidas\n");
		scanf("%d",&intervalo);
		while(intervalo < 0 || intervalo > 800 || intervalo > cont_medidas){
			printf("Dado invalido, tente novamente\n");
			scanf("%d",&intervalo);
		}
		if (cont_medidas == 0 && intervalo == 0){
			goto fim;
		}
		contteste++; //Contadore de testes sempre tem que estar aqui pois se for antes incrementara antes do teste acontecer
	    for (i = 1; i < cont_medidas+1; ++i){//le o vetor das medidas
	    	printf("Informe a %d medida tirada\n", i);
	    	scanf("%d",&medidas[i]);
	    	while(medidas[i] < -200 || medidas[i] > 200){
	    		printf("Dado invalido, tente novamente\n");
	    		scanf("%d",&medidas[i]);
	    	}
	    	if(i >= intervalo){
	    		for (k = 1; k <= intervalo; ++k){
		    		    soma = soma + medidas[j];//soma os valores do intervalo
		    		    j++;//aumenta o indice minimo
		    		}
		    		divisao = (soma/intervalo);
		    		if (divisao > mediaMaior){
		    			mediaMaior = divisao;
		    		}
		    		if (divisao < mediaMenor){
		    			mediaMenor = divisao;
		    		}
		    		soma = 0;
			        j = j - intervalo + 1;
			}			
		}
		mediamenor[l]=mediaMaior;
		mediamaior[l]=mediaMenor;
		l++;
		j = 1; // retorna o indice minimo
		mediaMaior=-999999999; //reseta as medias kk
		mediaMenor=999999999;
		system("pause");
	} while ((cont_medidas !=0) && (intervalo != 0));
    fim: //do jeito que fiz o setup ele so ferificaria depois que o loop terminasse, foi necessaria a adicao do goto
    for (int i = 1; i <= contteste; ++i){
    	printf("Teste %d\n",i ); 
        printf("%d ",mediamaior[i]);
        printf("%d\n",mediamenor[i]);
    }
    system("pause");
	return 0;
}