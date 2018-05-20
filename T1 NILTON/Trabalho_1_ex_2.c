/*Por
      20/05/18
      George Andre  (38338)
      Lincoln Lins  (38344)
      Lucas Roberto (38346)
      Hugo tavares  (40139)
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n2-GANGORRA: Joãozinho acaba de mudar de escola e a primeira coisa que");
    printf("\npercebeu na nova escola é que a gangorra do parquinho não é simétrica,");
    printf("\numa das extremidades é mais longa que a outra. Após brincar algumas");
    printf("\nvezes com um amigo de mesmo peso, ele percebeu que quando está em");
    printf("\numa extremidade, a gangorra se desequilibra para o lado dele (ou seja, ele");
    printf("\nfica na parte de baixo, e o amigo na parte de cima), mas quando eles");
    printf("\ntrocam de lado, a gangorra se desequilibra para o lado do amigo. Sem");
    printf("\nentender a situação, Joãozinho pediu ajuda a outro amigo de outra série,");
    printf("\nque explicou que o comprimento do lado interfere no equilíbrio da");
    printf("\ngangorra, pois a gangorra estará equilibrada quando P1 C1 = P2 C2");
    printf("\nonde P1 e P2 são os pesos da criança no lado esquerdo e direito,");
    printf("\nrespectivamente, e C1 e C2 são os comprimentos da gangorra do lado");
    printf("\nesquerdo e direito, respectivamente. Com a equação, Joãozinho já");
    printf("\nconsegue dizer se a gangorra está equilibrada ou não mas, além disso, ele");
    printf("\nquer saber para qual lado a gangorra descerá caso esteja desequilibrada.");
    printf("\nSe a gangorra estiver equilibrada, imprima ‘0’. Se ela estiver");
    printf("\ndesequilibrada de modo que a criança esquerda esteja na parte de baixo,");
    printf("\nimprima ‘-1’, senão, imprima ‘1’. As restrições de entrada são:");
    printf("\n10 ≤ P1 ≤ 100 e 10 ≤ C1 ≤ 100 e 10 ≤ P2 ≤ 100 e 10 ≤ C2 ≤ 100.");
    
    int p1, p2, c1, c2, a, b;
    //Valida o primeiro peso informado
    printf("\nEscreva o peso da primeira crianca(em Kg):");
    scanf("%i", &p1);
    while (p1<10 || p1>100){
        printf("\nNumero invalido. Informe novamente.");
        scanf("%i", &p1);
    }
    //Valida o comprimento do lado da gangorra em que a primeira pessoa sentará
    printf("\nAgora o comprimento do lado aonde a crianca vai sentar(em cm):");
    scanf("%i", &c1);
    while (c1<10 || c1>100){
        printf("\nNumero invalido. Informe novamente.");
        scanf("%i", &c1);
    }
    //Valida o segundo peso informado
    printf("\nEscreva o peso da segunda crianca(em Kg):");
    scanf("%i", &p2);
    while (p2<10 || p2>100){
        printf("\nNumero invalido. Informe novamente.");
        scanf("%i", &p2);
    }
    //Valida o comprimento do lodo da gangorra em que a segunda pessoa sentará
    printf("\nE o comprimento do lado aonde a crianca vai sentar(em cm):");
    scanf("%i", &c2);
    while (c2<10 || c2>100){
        printf("\nNumero invalido. Informe novamente.");
        scanf("%i", &c2);
    }
    //Realiza o calculo e imprime as saidas
    a = p1*c1;
    b = p2*c2;
    if (a==b){
        printf("\n0\n");
    }
    if (a>b){
        printf("\n-1\n");
    }
    if (a<b){
        printf("\n1\n");
    }
    system("pause");
    return 0;
}
