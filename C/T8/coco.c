#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char frase[999][999];
	int i=0,n=0,j=0;

	scanf("%d\n",&n);
	while(n-- > 0){
		scanf("%s", frase[i]);
		i++;
	}

	for (j = 0; j < i; j++){
		if(strlen(frase[j])!=3){
			printf("%s",frase[j]);
		}else if(strlen(frase[j])==3 && (frase[j][0] == 'U' || frase[j][0] == 'O')){
			if(frase[j][0]=='U'&&frase[j][1]=='R')
				frase[j][2]='I';
			if(frase[j][0]=='O'&&frase[j][1]=='B')
				frase[j][2]='I';
			printf("%s",frase[j]);
		}else if(strlen(frase[j])==3 && (frase[j][0] == 'u' || frase[j][0] == 'o')){
			if(frase[j][0]=='u'&&frase[j][1]=='r')
				frase[j][2]='i';
			if(frase[j][0]=='o'&&frase[j][1]=='b')
				frase[j][2]='i';
			printf("%s",frase[j]);
		}
		if(j!=i-1)
			printf(" ");
	}

	printf("\n");

	return 0;
}