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
#include <stdlib.h>

void flush_in()
{
    int ch;
    while ((ch=fgetc(stdin)) != EOF && (ch != '\n')){};
}

int main()
{
    printf("\n3-PEDÁGIO: A invenção do carro tornou muito mais rápido e mais barato");
    printf("\nrealizar viagens de longa distância. Realizar uma viagem rodoviária tem");
    printf("\ndois tipos de custos: cada quilômetro percorrido na rodovia tem um custo");
    printf("\nassociado (não só devido ao consumo de combustível mas também devido");
    printf("\nao desgaste das peças do carro, pneus, etc.), mas também é necessário");
    printf("\npassar por vários pedágios localizados ao longo da rodovia. Os pedágios");
    printf("\nsão igualmente espaçados ao logo da rodovia; o começo da estrada não");
    printf("\npossui um pedágio, mas o seu final pode estar logo após um pedágio (por");
    printf("\nexemplo, se a distância entre dois pedágios consecutivos for de 37 km e a");
    printf("\nestrada tiver 111 km, o motorista deve pagar um pedágio aos 37 km, aos");
    printf("\n74 km e aos 111 km, logo antes de terminar a sua viagem). Dadas as");
    printf("\ncaracterísticas da rodovia e os custos com gasolina e com pedágios,");
    printf("\ninforme o custo total da viagem. Considere que o comprimento (C) da");
    printf("\nestrada é 1 ≤ C ≤ 104");
    printf("\ne a distância (D) entre pedágios é 1 ≤ D ≤ 104");
    printf("\n.");

    float qte, str, dst, preco, gas, km, precokm, multpr, precot, vtotal,des, des_t;
    int i, aux;
    //Valida a entrada da distancia do percurso
    printf("\nInforme a distancia em Km do percurso(estrada): ");
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
