#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	int contpalavras = 0;
	char str[100];
	printf("Informe a frase:\n");
	fgets(str,100,stdin);
	for (int i = 0; str[i] != '\0'; ++i){
		if (str[i] == ' '){
			contpalavras++;
		}
	}

	printf("%d\n",contpalavras + 1);
	return 0;
}