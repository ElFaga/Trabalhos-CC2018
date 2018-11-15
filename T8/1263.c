#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]){
	int i = 0,numvezes = 0,contletras = 0;
	char frase[1000],letra;
	fgets(frase,50,stdin);
	letra = frase[0];
	while(frase[i] != '\0'){
		contletras++;
		i++;
	}
	for (i = 0; i < contletras; ++i){
		if (frase[i] == ' '){
			if (letra == frase[i+1] || letra == toupper(frase[i+1]) || letra == tolower(frase[i+1])){
				numvezes++;
			}else if (numvezes == 0){
				if (frase[i] != '\0'){
					letra = frase[i];
				}else{
					letra = ' ';
				}
			}else{
				break;
			}
		}
	}
	printf("%d\n",numvezes + 1);
	return 0;
}