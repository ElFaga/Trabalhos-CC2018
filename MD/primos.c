#include <stdio.h>
#include <math.h>

int ePrimo(int num){
	if (num <=1) return 0;//implementacao obvia, 0 e 1 nao sao primos
	if (num % 2 == 0 && num > 2) return 0; //Elemina processamento se levarmos em conta que nao ha mais numeros pares pra processar 
	for(int k = 3; k < num / 2; k+= 2){ //k inica em 3 pois os casos anteriores ja foram testados, incrementa em dois pois precisa ser impar
		if (num % k == 0)//se a metade do numero modulado pelo indice do k for igual a zero, ele e divisivel por algum outro numero a nao ser ele mesmo
			return 0;
	}
	return 1;
}

typedef struct ResFermat{
	int x1,x2;
}aux;
aux pao;

int eInt(int num2){
	if(floor(num2)!=num2) return 0;
	else return 1;
}
int eImpar(int nu){
	if (nu % 2 == 0 ) return 0;
	return 1;
}
aux Fermat(int num){
	if (eImpar(num) == 1){
		int x,y;
		x = ceil(sqrt(num));
		y = (x*x)-num;
		while(!eInt(sqrt(y))){
			x++;
			y = x*x-num;
		}
		pao.x1 = (x-sqrt(y));
		pao.x2 = (x+sqrt(y));
	}else{
		pao.x1 = 0;
		pao.x2 = 0;
	}
	return pao;
}

int main(int argc, char const *argv[]){
	int teto,opc;
	FILE *arq;	
	arq = fopen("primos.txt","w+");
	printf("1)Normal\n");
	printf("2)Fermat\n");
	scanf("%d",&opc);
	switch(opc){
		case 1:{
			fprintf(arq,"Printa primos\n");
			printf("Qual o teto?\n");
			scanf("%d",&teto);
			printf("Metodo 1:\n");
			fprintf(arq,"Metodo 1\n");
			for (int i = 0; i <= teto; ++i){
				if(ePrimo(i) == 1){
					printf("%d e primo\n",i);
					fprintf(arq, "%d\n",i);
				}
			}
			break;
		}	
		case 2:{
			printf("Qual o numero?\n");
			scanf("%d",&teto);
			printf("Fermat:\n");
			fprintf(arq,"Metodo 2\n");
			Fermat(teto);
			if (pao.x1 == 0 && pao.x2 ==0){
				printf("Nao e possivel resolver esse numero pelo metodo de fermat\n");
				break;
			}else{
				printf("%d tem seus fatores %d %d\n",teto,pao.x1, pao.x2);
				fprintf(arq, "%d\n",teto);
				break;
			}
		}
	}
	fclose(arq);
	return 0;
}