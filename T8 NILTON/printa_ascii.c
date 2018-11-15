#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]){
	char ALFABETO[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	ALFABETO[strlen(ALFABETO)+1] = '\0';
	printf("\n");
	printf("Maiusculas :\n");
	for (int i = 0; i < strlen(ALFABETO); ++i)	{
		printf("%c ",toupper(ALFABETO[i]));
		printf("%d\n",toupper(ALFABETO[i])+'0');
	}
	printf("\n");
	printf("Minusculas :\n");
	for (int i = 0; i < strlen(ALFABETO); ++i)	{
		printf("%c ",ALFABETO[i]);
		printf("%d\n",ALFABETO[i]+'0');
	}
	printf("Printar para arquivo?(s/n)\n");
	char opc;
	scanf("%c",&opc);
	switch(opc){
		case 's':{
			FILE *arq;
			arq = fopen("ascii.txt","w+");
			fprintf(arq,"\n");
			fprintf(arq,"Maiusculas :\n");
			for (int i = 0; i < strlen(ALFABETO); ++i)	{
				fprintf(arq,"%c ",toupper(ALFABETO[i]));
				fprintf(arq,"%d\n",toupper(ALFABETO[i])+'0');
			}
			fprintf(arq,"\n");
			fprintf(arq,"Minusculas :\n");
			for (int i = 0; i < strlen(ALFABETO); ++i)	{
				fprintf(arq,"%c ",ALFABETO[i]);
				fprintf(arq,"%d\n",ALFABETO[i]+'0');
			}
		}
		case 'n':{
			return 0;
		}
		default:{
			return 0;
		}
	}
	return 0;
}