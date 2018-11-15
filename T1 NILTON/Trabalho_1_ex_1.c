/*Por
      20/05/18
      George Andre  (38338)
      Lincoln Lins  (38344)
      Lucas Roberto (38346)
      Hugo tavares  (40139)
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    printf("\n1-ACESSO WEB: Em um site de busca encontra-se a resposta no terceiro link.");
    printf("\nNesse mesmo site observa-se que t pessoas já haviam clicado no terceiro");
    printf("\nlink. Já no segundo link o número de pessoas que o acessam é o dobro do");
    printf("\nnúmero de pessoas que clicam no terceiro link. Mais curioso ainda é que o");
    printf("\nnúmero de pessoas que clicam no segundo link é a metade do número de");
    printf("\npessoas que clicam no primeiro link. Determine quantas pessoas clicaram");
    printf("\nno primeiro link para t pessoas, que representa o número de pessoas que");
    printf("\nclicaram no terceiro link, onde 1 < t < 1000.");
    int t;
    //Validacao do numero de clicks
    printf("\nEntre com o numero de pessoas que clicam no t link:\n");
    scanf("%i", &t);
    if (t<=0 || t>1000){
        printf("Numero invalido. Digite novamente.\n");
        scanf("%i", &t);
    }
    //Imprime as saidas
    printf("\nNumero de pessoas que clicaram no terceiro link: %i\n", t);
    printf("\nNumero de pessoas que clicaram no segundo link: %i\n", t*2);
    printf("\nNumero de pessoas que clicaram no primeiro link: %i\n", t*4);
    system("pause");
    return 0;
}