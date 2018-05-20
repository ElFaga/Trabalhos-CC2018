/*Por 
      George Andre  (38338)
      Lincoln Lins  (38344)
      Lucas Roberto (38346)
      Hugo tavares  (40139)
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdlib.h>

void flush_in()
{
    int ch;
    while ((ch=fgetc(stdin)) != EOF && (ch != '\n')){};
}

int main()
{
    float qte, str, dst, preco, gas, km, precokm, multpr, precot, vtotal,des, des_t;
    int i, aux;
    //Valida a entrada da distancia do percurso
    printf("Informe a distancia em Km do percurso(estrada): ");
    scanf("%f", &str);
    flush_in();
    if (str<=0 || str>10000){
        printf("Kilometros invalidos. Informe novamente: ");
        scanf("%f", &str);
        flush_in();
    }
    //Valida e realiza o calculo do desgaste durante o percurso
    printf("\nInforme o valor(R$) do desgaste por Km : ");
    scanf("%f",&des);
    flush_in();
    while(des<=0){
        printf("Impossivel nao haver desgaste minimo em uma viagem. Informe o valor novamente : ");
        scanf("%f",&des);
        flush_in();
    }
    des_t = (des * str);
    //Valida a entrada da distancia entre os pedagios
    printf("\nInforme em Km a distancia entre os pedagios : ");
    scanf("%f", &dst);
    flush_in();
    while ((dst>str) || (dst<=0 || dst>10000)){
        printf("Distancia invalida. Informe novamente: ");
        scanf("%f", &dst);
        flush_in();
    }
    qte = str / dst;
    aux = qte;
    //Realiza a contagem de pedagios e a soma do valor de cada
    printf("\nNumero de pedagios pela estrada: %i\n\n", aux);
    for (i=1;i<=qte;i++){
        printf("Informe o valor(R$) do pedagio: ");
        scanf("%f", &preco);
        flush_in();
        while (preco<=0){
            printf("Valor invalido. Informe novamente: ");
            scanf("%f", &preco);
            flush_in();
        }
        precot = precot+preco;
    }
    //Valida a entrada do preco do combustivel
    printf("\nInforme o preco(R$) do litro da gasolina/alcool: ");
    scanf("%f", &gas);
    flush_in();
    if (gas<1.00 || gas>5.00){
        printf("Valor invalido. Informe novamente: ");
        scanf("%f", &gas);
        flush_in();
    }
    //Realiza o calculo de combustivel gasto por KM
    printf("\nInforme quantos Kilometros o seu carro faz por litro: ");
    scanf("%f", &km);
    flush_in();
    if (km<=0){
        printf("Quantidade invalida. Informe novamente: ");
        scanf("%f", &km);
        flush_in();
    }
    multpr = str/km;
    precokm = multpr*gas;
    //Imprime as saidas
    printf("\nValor total gasto com combustivel: R$%.2f", precokm);
    printf("\nValor total gasto com pedagios: R$%.2f", precot);
    printf("\nValor total do desgaste: R$%.2f",des_t);
    vtotal = precokm + precot + des_t;
    printf("\n\nValor total gasto com a viagem: R$%.2f\n", vtotal);
    return 0;
    system("pause");
}
