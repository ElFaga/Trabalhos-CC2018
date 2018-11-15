#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[]){
	int n,i,k;
	char frase[9999];
	scanf("%d\n", &n);

	fgets(frase,9999,stdin);
	frase[strlen(frase)+1] = '\0';


	for (i = 0; i <= strlen(frase); ++i){
		if (frase[i] == '\n' || '\0'){
			break;
		}else{
			if (i == 0){
				if (((frase[0] == 'u' || frase[0] == 'U') && (frase[1] =='r' || frase[1] == 'R'))||((frase[0] == 'o' || frase[0] == 'O') && (frase[1] =='b' || frase[1] == 'B'))){
					if (frase[0] == 'U' || 'u'){
						printf("URI ");	
						i= i + 3;
					}else{
						printf("OBI ");
						i= i + 3;	
					}
			} //VALIDO PARA PRIMEIRA EXECUCAO APENAS
		}else{

			if (frase[i] == ' '){
				if (((frase[i+1] == 'u' || frase[i+1] == 'U') && (frase[i+2] =='r' || frase[i+2] == 'R'))||((frase[i+1] == 'o' || frase[i+1] == 'O') && (frase[i+2] =='b' || frase[i+2] == 'B'))){
					if (frase[i+1] == 'U' || 'u'){
						printf("URI ");
						i= i + 3;
					}else{
						printf("OBI ");
						i= i + 3;
					}
				}//Resto das palavras
			}else{
				// k = i;
				do{
					printf("%c",frase[i]);
					i++;
				}while(frase[i]!= ' '); // printa as palavras sem corrigir
				printf(" ");
			}
		}
	}
}
printf("\n");
return 0;
}		



// #include <string.h>
// #include <stdio.h>

// int main(int argc, char const *argv[]){
// 	int n,i,j,k, index,index_antigo,index_real,palavras;
// 	char frase[99999];
// 	scanf("%d\n", &n);
// 	fgets(frase,99999,stdin);
// 	// fflush(stdin);
// 	for ( j = 0; j <= strlen(frase); ++j){
// 		if (palavras>n){
// 			break;
// 		}
// 		if (frase[j] == ' '){
// 			index_antigo = index;
// 			index = j;
// 			index_real = index - index_antigo;
// 			palavras++;
// 		}

// 		if (index_real == 3){
// 			if ((frase[0]== 'U' || frase[0] == 'u') && (frase[1] == 'R' || frase[1] == 'r')){
// 				printf("URI");
// 			}else if ((frase[0]== 'O' || frase[0] == 'o') && (frase[1] == 'B' || frase[1] == 'b')){
// 				printf("OBI");
// 			}else{
// 				for (index_antigo; index_antigo <= index_real ; ++index_antigo){
// 					printf("%c",frase[index_antigo]);
// 				}
// 			}
// 		}else{
// 			for (index_antigo; index_antigo <= index_real ; ++index_antigo){
// 				printf("%c",frase[index_antigo]);
// 			}
// 		}
// 		if (j != (n - 1)){
// 			printf(" ");
// 		}
// 	}
// 	printf("\n");

// 	return 0;
// }		