#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[]){
	printf("Informe a frase e tambem a palavra:\n");
	char palavra[100], frase[150];
	fgets(frase,149,stdin);
	fgets(palavra,99,stdin);
	char *comparado = strstr(frase, palavra);
	if (comparado){
		strcpy(frase, palavra);
		printf("%s\n",frase );
	}else{
		printf("Nao contem\n");
	}
	return 0;
}
