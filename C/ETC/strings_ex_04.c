#include <stdio.h>
#include <string.h>

void inverte(char s[]){
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	s[strlen(s)-1] = '\0';
}

int main(int argc, char const *argv[]){
	char nome[100],plm[50],prtnome[100];
	int i = 0, j = 2/*pois as duas primeiras posicoes ja sao preenchidas*/,k;
	fgets(nome,100,stdin);
	plm[0] = nome[0];
	plm[1] = '.';

	while(nome[i] != '\0'){
		if (nome[i] == ' '){
			//pega o primeiro caracter de cada nome
			plm[j] = nome[i+1];
			plm[j+1] = '.';
			j+=2;
		}
		i++;
	}
	k=0;
	while(plm[k] != '\0'){
		k++;
	}
	plm[k-2/*2 pois o plm incrementa de dois em dois*/] = '\0';
	k = 0;
	if (nome[i] == '\0'){
		inverte(nome);
		while(nome[k] != ' '){
			k++;
		}
		strncpy(prtnome, nome,k*sizeof(char));
		prtnome[k] = '\0';
	}
	inverte(prtnome);
	printf("%s, %s", prtnome, plm);
	printf("\n");
	// printf("%s%s",prtnome, plm);
	// strcat(prtnome, plm);
	// puts(prtnome);
	return 0;
}