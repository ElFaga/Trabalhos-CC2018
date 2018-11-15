#include <stdio.h>
#include <string.h>
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
	out = fopen("readme.decifra.txt","w");
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
			fprintf(out,"%c",aux);
		}
	}while(!feof(in));
	//ate aqui ele simplesmente printou todos os numeros sem brackets em ordem de linha, linha por linha, em char, pode ser convertido pra int posteriormente
	fclose(in);
	fclose(out);
	write(1,"\E[H\E[2J",7);//funcao pra limpar a tela

}

void concatena(){ //concatena "[Linha (i)]" ao inicio de cada linha
FILE* in,*out;
char buf[65],aux[125];
	int j = 1; //contadora
	out = fopen("readme.decifra.txt","r"); //apenas o out nesse loop pq so vamos concatenar nele usando strcat.... de alguma forma
	in = fopen("auxiliar.txt","w+");
	fseek(out,0,SEEK_SET);
	while(fgets(buf,65,out)){
		sprintf(aux,"Linha %d: %s",j,buf);
		fprintf(in,"%s",aux);
		j++;
	}
	fclose(out);
	fclose(in);
	in = fopen("auxiliar.txt","r");
	out = fopen("readme.decifra.txt","w");
	while(fgets(buf,65,in)){
		sprintf(aux,"%s",buf);
		fprintf(out,"%s",aux);
	}
	fclose(in);
	fclose(out);
}

int contaLinha(){ //done
	unsigned pao=0;
	char buf[80];
	FILE *in;
	in = fopen("auxiliar.txt","r");
	while(fgets(buf,80,in)){
		pao++;
	}
	return pao;

}

int maiorLinha(){ //done
	int k=0,maiorL;
	char buf[100], maior[100];
	FILE *in;
	in = fopen("auxiliar.txt","r");
	while(fgets(buf,100,in)){
		if (strlen(buf)>strlen(maior)){
			strcpy(maior,buf);
			maiorL= k;
		}
		k++;
	}
	return maiorL;
}

int encontraPalavra(){	//mecanismo lixo de pesquisa
	int k=0,encontrada;
	char cbuf,buf[80], palavra[20];
	FILE *in;
	in = fopen("auxiliar.txt","r");
	printf("Informe a palavra:\n");
	scanf("%s", palavra);
	getchar();
	while(fread(&cbuf,1,1,in)){
		k++;
		if (cbuf == ' '){
			//cmmpara
			if (strcmp(palavra,buf)==0){
				encontrada =1;
			}
			//esvazia o vetor
			for (int i = 0; i < 80; ++i){
				buf[i] = 0;
			}
			k = 0; //pra alocar o buffer dnv
		}
		buf[k] = cbuf;
	}
	//problema com essa implementacao seria que o programan nao conta pra simbolos, pra fazer essa verificaccao seria ideal um alfabeto com os char especiais
	if (encontrada == 1){
		return printf("A palavra foi encontrada na linha %d",k);
	}else{
		return printf("A palavra nao foi encontrada\n");
	}
	getchar();
}

int main(int argc, char const *argv[])//so chamar as funcoes
{
	int opc,pao; 
	do{
		opc =menu();
		switch(opc){
			case 1:{
				decifra();
				break;
			}
			case 2:{
				concatena();
				break;
			}
			case 3:{
				pao = contaLinha();
				printf("Ha %d linhas\n",pao);
				getchar();
				break;
			}
			case 4:{
				int maiorl = maiorLinha();
				printf("A maior linha e a: %d\n",maiorl);
				getchar();
				break;
			}
			case 5:{
				encontraPalavra();
				break;
			}
			default:{
				break;
			}
		}
	}while(opc!=0);
	return 0;
}	