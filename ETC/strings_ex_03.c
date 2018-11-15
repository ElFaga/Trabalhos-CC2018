#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[]){
	char nome[100];
	printf("Informe o nome\n");
	fgets(nome,100,stdin);
	for (int i = 0; i <= strlen(nome); ++i){
		if (nome[i]=='a'||nome[i]=='e'||nome[i]=='i'||nome[i]=='o'||nome[i]=='u'||nome[i]=='A'||nome[i]=='E'||nome[i]=='I'||nome[i]=='O'||nome[i]=='U'){
			nome[i] = '*';
		}
	}
	puts(nome);
	return 0;
}