/*Por 
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
    int t;
    //Validacao do numero de clicks
    printf("Entre com o numero de pessoas que clicam no t link:\n");
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