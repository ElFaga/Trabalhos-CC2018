#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int toDec(char letra)
{
	int dec;
	dec = letra - 49 - '0';
	return dec;
}

int main(int argc, char const *argv[])
{
	char pos1[2],posf[2];
	char strI,strF;
	int pntX1, pntX2, pntY1, pntY2,movX,movY;
/*									
|7		
|6
|5
|4
|3
|2
|1	
|0
	a b	c d	e f	g h	|
	0 1 2 3 4 5 6 7	*/
	start:
	scanf("%s", pos1);
	scanf("%s", posf);


	//pega a parte de letras e converte pra decimal
	//tendo a parte com char sendo x do plano cartesiano e o numeral o y
	strI = pos1[0];
	strF = posf[0];
	//converte pra decimal baseado no vetor matriz por conveniencia p/ usar no vetor normalmente
	pntX1 = toDec(strI);
	pntX2 = toDec(strF);
	//converte o numeral da string em decimal
	pntY1 = (pos1[1] - 1) - '0'; 
	pntY2 = (posf[1] - 1) - '0';

	if (pntX1 > 7 || pntX2 > 7 || pntX1 < 0 || pntX2 < 0 || pntY1 > 7 || pntY2 > 7 || pntY1 < 0 || pntY2 < 0 ){
		goto end;
	}

	for (movX = 0; movX < abs(pntX2 - pntX1) ; ++movX){ //quantas casas se move em X sendo que a quantidade de casas sempre e definida por final menos inicial, tendo seu valor absoluto
		
	}

	for (movY = 0; movY < abs(pntY2 - pntY1) ; ++movY){ //quantas casas se move em Y sendo que a quantidade de casas sempre e definida por final menos inicial, tendo seu valor absoluto
		
	}

	if (movX < 1 || movX > 2 || movY < 1 || movY > 2){
		goto invalido;
		goto start;
	}else{
		switch(movX){
			case 1:
			if (movY == 2){
				goto valido;
			}
			break;
			case 2:
			if (movY == 1){
				goto valido;
			}
			break;
			// default:
			// goto invalido;
			// break;
		}
		switch(movY){
			case 1:
			if (movX == 2){
				goto valido;
			}
			break;
			case 2:
			if (movX == 1){
				goto valido;
			}
			break;
			default:
			goto invalido;
			break;
		}
	}
	valido:
	printf("VALIDO");
	printf("\n");
	goto end;
	invalido:
	printf("INVALIDO");
	printf("\n");
	goto end;
	end:
	return 0;
}