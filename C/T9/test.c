#include <stdio.h>

int main(int argc, char const *argv[]){
	FILE *arq;
	arq = fopen("paocombatata.poi", "w+");
	fprintf(arq, "ola meu nome e jonas" );
	char s;
	do{
		s = getc(arq);
		printf("%c\n",s);
	}while(s != EOF);
	fclose(arq);	
	return 0;
}