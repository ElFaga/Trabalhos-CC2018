/*Por
      20/05/18
      George Andre  (38338)
      Lincoln Lins  (38344)
      Lucas Roberto (38346)
      Hugo tavares  (40139)
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

	printf("\n4-CONSECUTIVOS: Num sorteio que distribui prêmios, um participante");
	printf("\nsorteia um inteiro N que representa a quantidade de bolas de um globo da");
	printf("\nsorte e cada bola possui um valor. O número de pontos do participante é o");
	printf("\ntamanho da maior sequência de valores consecutivos iguais. Por exemplo,");
	printf("\nsuponhamos que um participante sorteia N = 11 e, nesta ordem, os");
	printf("\nvalores 30, 30, 30, 30, 40, 40, 40, 40, 40, 30, 30. Então, o participante");
	printf("\nganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. Note que");
	printf("\no participante sorteou 6 valores iguais a 30, mas nem todos são");
	printf("\nconsecutivos. Determine o número de pontos de um participante onde a");
	printf("\nquantidade de bolas deve ser 1 ≤ N ≤ 104");

	int num, vbola, aux, score, score_f, i;

	i = 1; //variavel contadora
	score = 0;
	score_f = 0;
	aux = 0; 

	printf("\nInforme a quantidade de bolas(1 - 10 000)\n");
	scanf("%d", &num); //NUMERO INTEIRO DE BOLAS A SEREM SORTEADAS
	do{
		while (num <=0 || num > 10000){ // 10 000 do enunciado 10^4
			printf("Numero de bolas invalido, informe novamente\n");
			scanf("%d", &num); //NUMERO INTEIRO DE BOLAS A SEREM SORTEADAS
		}
		printf("Informe o valor da %d bola\n",i );
		scanf("%d",&vbola);
		while (vbola <=0 || vbola>50){
			printf("O valor retirado nao pode ser menor que zero, ou maior que cinquenta\n");
			printf("Informe o valor da %d bola\n",i );
			scanf("%d",&vbola);
		}
		//marca o "score", do jogo
		if (i == 1){
			aux = vbola;
			//printf("prim.exec\n") DEBUG;
		}
		if (vbola != aux){
			score = 1;
			aux = vbola;
			//printf("reset.exec\n") DEBUG;
		}
		else if (vbola == aux){
			//printf("atrib++\n") DEBUG;
			score++;
			if (score_f < score);
			{
				//printf("atrib_f\n") DEBUG;
				score_f = score;
			}
		}
		aux=vbola;		
		i++;
	}while(i<=num);
	printf("O score final foi %d\n",score_f);
system("pause"); //Espera input pra sair
return 0;
}