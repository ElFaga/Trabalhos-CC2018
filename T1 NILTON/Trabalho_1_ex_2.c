/*Por 
      George Andre  (38338)
      Lincoln Lins  (38344)
      Lucas Roberto (38346)
      Hugo tavares  (40139)
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p1, p2, c1, c2, a, b;
    //Valida o primeiro peso informado
    printf("Escreva o peso da primeira crianca:");
    scanf("%i", &p1);
    while (p1<10 || p1>100){
        printf("\nNumero invalido. Informe novamente.");
        scanf("%i", &p1);
    }
    //Valida o comprimento do lado da gangorra em que a primeira pessoa sentará
    printf("\nAgora o comprimento do lado aonde a crianca vai sentar:");
    scanf("%i", &c1);
    while (c1<10 || c1>100){
        printf("\nNumero invalido. Informe novamente.");
        scanf("%i", &p2);
    }
    //Valida o segundo peso informado
    printf("\nEscreva o peso da segunda crianca:");
    scanf("%i", &p2);
    while (p2<10 || p2>100){
        printf("\nNumero invalido. Informe novamente.");
        scanf("%i", &c1);
    }
    //Valida o comprimento do lodo da gangorra em que a segunda pessoa sentará
    printf("\nE o comprimento do lado aonde a crianca vai sentar:");
    scanf("%i", &c2);
    while (c2<10 || c2>100){
        printf("\nNumero invalido. Informe novamente.");
        scanf("%i", &c2);
    }
    //Realiza o calculo e imprime as saidas
    a = p1*c1;
    b = p2*c2;
    if (a==b){
        printf("\n0");
    }
    if (a>b){
        printf("\n-1");
    }
    if (a<b){
        printf("\n1");
    }
    system("pause");
    return 0;
}