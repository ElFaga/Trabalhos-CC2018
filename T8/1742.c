#include <stdio.h>
#include <strings.h>

int main(int argc, char const *argv[]){
	int exec;
	char nome[1000][1000];

	scanf("%d\n", &exec);

	start:

	fgets(nome[exec],999,stdin);
	fflush(stdin);
	puts(nome[exec]);

	while(exec!=0){
		exec--;
		goto start;
	}

	return 0;
}