//Fiz o que eu pude e consegui, o codigo esta uma zona, nao consegui fazer quase nada dar certo, os menus sao rudimentares, os itens 4 e 5 nao funcionam e a printagem de opcionais esta bugada dmeais
//Basicamente varias pecas quebradas coladas junto no meio da frustracao
//Aceito humildemente meu zero, so queria mostrar que tentei
//Lucas Roberto 38346

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 50
typedef struct {
	int id_reg;
	char placa[9];
	char modelo[TAM];
	char fabricante[TAM];
	int ano_fabricacao;
	int ano_modelo;
	char combustivel[TAM];
	char cor[TAM];
	int opcional[8];
	float preco_compra;
} CARRO; 
char opcionais[][TAM]={
	{"4.portas"},
	{"cambio.automatico"},
	{"vidros.eletricos"},
	{"abs"},
	{"air.bag"},
	{"ar.condicionado"},
	{"banco.couro"},
	{"sensor.estacionamento"}}; 
	int main(int argc, char const *argv[]){

		FILE *arq, *temp;
		int i = 0,opc;
		struct combustiveis{
			char tipos[50];
			int contador;
		};

		struct combustiveis var[4];
		CARRO estruturas[2282];
		CARRO pao;
		CARRO tempchar;
		CARRO kek;
		CARRO est[2282];
		int z = 0;

		printf("Informe o que quer acessar:\n");
		printf("1. Informar registros de carro.dbf\n");
		printf("2. Ordenar os registros de “carro.dbf” de forma crescente pelo campo “placa” e armazená-los no arquivo “carro.ord”. \n");
		printf("3. Mostrar os registros de “carro.ord”. \n");
		printf("4. Para cada tipo de combustível informar a quantidade de carros. \n"); //AINDA A FAZER
		printf("5. Para cada tipo de opcional informar a quantidade de carros. \n"); //AINDA A FAZER
		scanf("%d",&opc);
		switch(opc){
		//-----------------------------------------------------------------------------------------------------
			case 1 || 2:
			if((arq = fopen("carro.dbf", "rb")) == NULL){
				printf("NAO FOI POSSIVEL ABRIR O ARQUIVO");
			}else{

				fseek(arq,0,SEEK_SET);
				do{
					if (fread(&tempchar ,sizeof(tempchar),1,arq)>0){
						estruturas[i] = tempchar;
						i++;
					// printf("%d\n",i );
					}
				//fprintf(temp, "%c",fread(tempchar,sizeof(tempchar),1,arq));
				}while(!feof(arq));
			//inicio ordenacao da estrutura
				int j,k;
				for (j = 0; j < i; j++){
					for (k = 0; k < i; k++){
						if (strcmp(estruturas[j].placa,estruturas[k].placa)>0){

						}else{
							pao = estruturas[j];
							estruturas[j] = estruturas[k];
							estruturas[k]  = pao;
						}
					}
				}
				fclose(arq);
			//ordena
			///-----------------------------------------------------------------------------------------------------
				if((temp = fopen("carro.ord", "w+")) == NULL){
					printf("NAO FOI POSSIVEL ENCONTRAR CARRO.ORD\n");
				// break;
				}else{
					for (int l = 0; l < i; ++l){
						fwrite(&estruturas[l],sizeof estruturas[l],1,temp);
					}
					fseek(temp,0,SEEK_SET);

					do{
						if (fread(&kek ,sizeof(kek),1,temp)>0){
							est[z] = kek;
							z++;
						}
					}while(!feof(temp));
					if (opc ==1){
						printf("%d Registros\n",i);
					}
					break;
				}

				case 3:{
					for (int m = 0; m < i; ++m){
						printf("%d %s %s %s %d %d %s %s",est[m].id_reg,est[m].placa,est[m].modelo,est[m].fabricante,est[m].ano_fabricacao,est[m].ano_modelo,est[m].combustivel,est[m].cor );
						for (j = 0; j <= sizeof est[m].opcional; j++){
							if (est[m].opcional[j] == 1){
								printf("%s ",opcionais[est[m].opcional[j]]);
							}
						}
						printf("%.2f R$\n",est[m].preco_compra);
					}
					break;
				}
				//-------------------------------------------------------------------------------------------------
				z=0;
				j=0;
				fseek(temp,0,SEEK_SET);
				do{
					if (z ==0){
						strcpy(var[z].tipos,est[z].combustivel);
					}else{
						for (j = 0; j <= sizeof var ; ++j){
							for (k = 0; k <= sizeof var; ++k){
								if((strcmp(var[k].tipos,est[j].combustivel)) == 0){
									var[k].contador++;
								}else{
									strcpy(var[k+1].tipos,est[j].combustivel);
								}
							}
						}
					}
				}while(!feof(temp));
				for (j = 0; j < sizeof var; ++j){
					puts(var[j].tipos);
					printf("%d carros\n",var[j].contador);
				}


			}
		}


		fclose(temp);
		return 0;
	}
