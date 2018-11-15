#include <stdio.h>
#include <string.h>
#include <time.h>

void LimpaTela()
{
	int n;
	for (n = 0; n < 10; n++)
		printf("\n\n\n\n\n\n\n\n\n\n");
}

int main(int argc, char const *argv[]){
	char AskYouOut;
	printf("Hello, what's your name?\n");
	printf("Kkkk, to so zoando, sei quem e Letissia, voce chamou muito minha atencao, entao, vamos ao que interessa.\n");
	printf("Se eu lhe pedisse formalmente, sairia comigo? (s/n)\n");
	scanf("%c",&AskYouOut);
	if (AskYouOut == 's'){
		LimpaTela();
		printf("Me mande mensagem no whats e a gente combina hehehe (67 981565038)\n");
		getchar();
	}else{
		LimpaTela();
		printf("Tudo bem, espero que ainda possamos ser amigos.\n");
		getchar();
	}
	getchar();
	LimpaTela();
	puts(
		"        @@@@@@           @@@@@@\n"
		"      @@@@@@@@@@       @@@@@@@@@@\n"
		"    @@@@@@@@@@@@@@   @@@@@@@@@@@@@@\n"
		"  @@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@\n"
		" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
		"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
		"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
		"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
		" @@@@@@@@@@@@@@Ate mais@@@@@@@@@@@@@@@\n"
		"  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
		"   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
		"    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
		"      @@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
		"        @@@@@@@@@@@@@@@@@@@@@@@\n"
		"          @@@@@@@@@@@@@@@@@@@\n"
		"            @@@@@@@@@@@@@@@\n"
		"              @@@@@@@@@@@\n"
		"                @@@@@@@\n"
		"                  @@@\n"
		"                   @\n"
		);
	getchar();
	return 0;
}