#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]){
	char linha[100000];
	int index,letra, soma=0,i;
	scanf("%s",linha);
	for (i = 0; i < strlen(linha); ++i){
		letra = linha[i] +'0';
		index = letra-144; //144 sendo o valor de 'a' para criar os pesos
		soma+=index;
	}
	printf("%d\n",soma);
	return 0;
}