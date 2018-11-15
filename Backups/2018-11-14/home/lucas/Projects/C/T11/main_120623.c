#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>


int menu() //menu principal
{
	int opc;
	write(1,"\E[H\E[2J",7);//funcao pra limpar a tela
	printf("Informe a opcao:\n");
	printf("1-Decifra arquivo\n"); //Decifra padrao
	printf("2-Grava numero linha em arquivo\n"); // for loop com i incrementando printando no inicio com brakets, tipo [Linha (i)]
	printf("3-Quantas linhas o arquivo tem\n"); //gerar esse i pre execucao pois o usuario precisa disso right away
	printf("4-Qual a maior linha\n"); //maior == l1 se atual > maior maior = sizeof(atual)
	printf("5-Pesquisar uma palavra\n"); //for loop ate feof com a palavra em um vetor checando posicao a posicao do arquivo
	printf("0-Encerrar\n");

	scanf("%d",&opc);
	getchar();	
	write(1,"\E[H\E[2J",7);//funcao pra limpar a tela
	return opc;
}

void decifra(){ //opc 1 done
	char buffer,process[3],aux;
	int k = 0, lmao;
	FILE* in, *out;
	in = fopen("readme.code.txt", "r+");
	out = fopen("readme.decifra.txt","w+");
	if (in==NULL || out== NULL) exit(-1);
	//fseek(in,0,SEEK_SET);
	do{
		fread(&buffer,1,1,in);
		// fgets(&buffer,1,in);
		for (int i = 0; i < 3; ++i){
			process[i] = 0;
		}
		
		if ((buffer == '[')){
			// fprintf(out,"|");
			while(buffer != ']'){
				fread(&buffer,1,1,in);
				if (buffer!= ']'){
				// fgets(&buffer,1,in);
					process[k++] = buffer;
					// fprintf(out,"%c",buffer);					
				}
			}
			k = 0; //reseta o process pra receber a proxima string de char
			lmao = atoi(process);
			aux = (char)lmao;
			printf("%d\n",lmao );
			fprintf(out,"%c %d \n",aux,lmao);
		}
	}while(!feof(in));
	getchar();
	//ate aqui ele simplesmente printou todos os numeros sem brackets em ordem de linha, linha por linha, em char, pode ser convertido pra int posteriormente
	fclose(in);
	fclose(out);
}

/*void concatena(){ //concatena "[Linha (i)]" ao inicio de cada linha
FILE* out;
char buf,aux[50];
	int j = 0, k=0; //contadora
	out = fopen("readme.decifra.txt","w+"); //apenas o out nesse loop pq so vamos concatenar nele usando strcat.... de alguma forma
	fseek(out,0,SEEK_SET);
	do{
		do{
			fread(&buf,1,1,out);
			strcat(aux,buf);
		}while(!'\n');
		// if (buf == '|'){
		// 	do{
		// 		aux[k] = buf;
		// 		k++;
		// 	}while(buf!='\0');
		// 	k = 0;
		// }
	}while(!feof(out));
	fclose(out);
//------------------------------------------------------------------------------------------------------------------ (parei aqui)
}*/

int main(int argc, char const *argv[])//so chamar as funcoes
{
	int opc = menu();
	switch(opc){
		case 1:{
			decifra();
		}
	}
	return 0;
}	