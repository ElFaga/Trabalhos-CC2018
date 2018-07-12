/*
    Trabalho realizado por:
        Lucas Roberto Raineri Oliveira (38346)
        Joao Vitor de Oliveira (38342)
        Kaledi da Silva Dias (38343)
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{


    setlocale(LC_ALL, "portuguese");

    int ev1 = 0, ev2 = 0, at = 0, d = 0, t = 0;
    int opc, dado;
    int lin, col;
    int vetor[200][8];
    int cont = 0, cont2 = 0;

    lin = 0;
    col = 0;
    printf("\nJOGO DO VAMPIRO\n\n");
    do{
        //Entrada e validação do valor da energia vital do vampiro 1
        opc = 99;
        while((ev1 <=0)||(ev1 > 10)){
            printf("\nInforme a energia vital do vampiro 1: ");
            scanf("%d", &ev1);
            if((ev1 > 0)&&(ev1 <= 10)){
                vetor[lin][col] = ev1;
                col = col + 1;
            }else{
                printf("\nENTRADA INVÁLIDA!\n");
            }
        }
        //Entrada e validação do valor da energia vital do vampiro 2
        while((ev2 <= 0)||(ev2 > 10)){
            printf("\nInfore a energia vital do vampiro 2: ");
            scanf("%d", &ev2);
            if((ev2 <=10)&&(ev2 > 0)){
                vetor[lin][col] = ev2;
                col = col + 1;
            }else{
                printf("\nENTRADA INVÁLIDA!\n");
            }
        }
        //Entrada e validação da força de ataque
        while((at < 1)||(at > 5)) {
            printf("\nInforme a força de ataque: ");
            scanf("%d", &at);
            if((at >= 1)&&(at <= 5)){
                vetor[lin][col] = at;
                col = col + 1;
            }else{
                printf("\nENTRADA INVÁLIDA!\n");
            }
        }
        //Entrada e validação da capacidade de dano
        while((d < 1)||(d > 10)) {
            printf("\nInforme a capacidade de dano: ");
            scanf("%d", &d);
            if((d >= 1)&&(d <=10)){
                vetor[lin][col] = d;
                col = col + 1;
            }else{
                printf("\nENTRADA INVÁLIDA!\n");
            }
        }
        //Entrada e validação do número de turnos que terá
        while((t < 1)||(t > 100)) {
            printf("\nInforme quantos turnos terá: ");
            scanf("%d", &t);
            if((t >= 1)&&(t <=100)){
                vetor[lin][col] = t;
                col = col + 1;
                vetor[lin][col] = 0;
                col = col + 1;
            }else{
                printf("\nENTRADA INVÁLIDA!\n");
            }
        }
        //Verificação para ver se continua com os combates ou para a execução

        while((opc != 0)&&(opc != 1)){
            printf("\n\nDeseja continuar com combates: ");
            printf("\n(1) - SIM ");
            printf("\n(0) - NÃO \n");
            scanf("%d", &opc);
            if(opc == 0){
                vetor[lin][col] = 0;
                col = col + 1;
            }else{
                if((opc != 0)&&(opc != 1)){
                    printf("\nOPÇÃO INVÁLIDA!\n");
                }
            }
        }
        lin = lin + 1;
        col = 0;
        ev1 = 0;
        ev2 = 0;
        at = 0;
        d = 0;
        t = 0;
    }while(opc != 0);

    //PROCESSAMENTO PRINCIPAL

    //jogo com todos os turnos
    while(cont < lin){
        //saida sem com os dados antes de começar o jogo
        printf("\n............................................................\n");
        printf("EV1\tEV2\tAT\tD\tT\tDADO\tquem_ganhou\n");
        printf("%d\t%d\t%d\t%d\t%d\n",vetor[cont][0], vetor[cont][1],vetor[cont][2],vetor[cont][3],vetor[cont][4]);
        //Para o jogo quando acabar os turnos ou até um vencer
        while((cont2 < vetor[cont][4]) && (vetor[cont][0] > 0) && (vetor[cont][1] > 0)){
            //DADO
            do{

            dado = rand()%7;

            }while(dado == 0); //Como o dado não tem 0 em seus lados só sairá numeros de 1 ate 6

            // contadora de turnos
            cont2 = cont2 + 1;

            //caso o vampiro 1 ganhe o turno
            if(dado <= vetor[cont][2]){
                //vampiro 1 ganhara o valor do dano
                vetor[cont][0] = vetor[cont][0] + vetor[cont][3];
                //vampiro 2 perderá o valor do dano
                vetor[cont][1] = vetor[cont][1] - vetor[cont][3];
                //saida caso o vampiro 1 ganhe o turno
                printf("%d\t%d\t%d\t%d\t%d\t%d\tVampiro_1\n",vetor[cont][0], vetor[cont][1],vetor[cont][2],vetor[cont][3],cont2, dado);
            }
            //caso o vampiro 2 ganhe o turno
            else
            {
                //vampiro 2 ganhara o valor do dano
                vetor[cont][1] = vetor[cont][1] + vetor[cont][3];
                //vampiro 1 perderá o valor do dano
                vetor[cont][0] = vetor[cont][0] - vetor[cont][3];
                // saida caso o vampiro 2 ganhe o turno
                printf("%d\t%d\t%d\t%d\t%d\t%d\tVampiro_2\n",vetor[cont][0], vetor[cont][1],vetor[cont][2],vetor[cont][3],cont2, dado);
            }
        }
        //após acabar os turno a contadora será zerada para caso de um nova sequencia de teste do jogo
        cont2 = 0;
        //saida pra caso o vampiro 1 ganhe o jogo
        if(vetor[cont][0] > vetor[cont][1])
        {
            printf("VAMPIRO_1 GANHOU \n");

        }else{
            //saida para o caso do vampiro 2 ganhe oo jogo
            if(vetor[cont][0] < vetor[cont][1]){
                printf("VAMPIRO_2 GANHOU \n");

            }else{
                //saida para o caso de empate entre os vampiros
                if(vetor[cont][0] == vetor[cont][1]){
                    printf("VAMPIRO_2 e VAMPIRO_2 EMPATARAM \n");
                }
            }
        }
        //contadora das linhas
        cont = cont + 1;
    }
    system("pause");


    return 0;
}
