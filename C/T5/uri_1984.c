#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char comn[25], inv[25];
	int indice=0, aux;

	scanf("%s",comn);

	indice= strlen(comn);

	int i,j;

	for (i = 0,j=indice-1; i < indice/2; ++i,j--){
		aux = comn[i];
		comn[i] = comn[j];
		comn[j] = aux;
	}

	printf("%s", comn);
	printf("\n");

	return 0;
}