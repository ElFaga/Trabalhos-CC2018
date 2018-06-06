#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>


int main(void){
    int opc1;//controle das opcoes do menu principal
    int opc2;//controle das opcoes do menu gerente
    int opc3;//controle das opcoes do menu abastecer caixa
    //Sistema de deposito
    int caixa = 0, notas_ab = 0, diff = 0, notas_totais = 0; //Total do caixa,qtd de notas abastecidas, diferenca entra o limite de notas, quantidade de notas totais
    int qnt_notas_450 = 0, qnt_notas_250 = 0, qnt_notas_50 = 0, qnt_notas_20 = 0, qnt_notas_10 = 0, qnt_notas_5 = 0, qnt_notas_2 = 0, qnt_notas_1 = 0; //Conta quantas notas em caixa
    //Sistema de saque
    int saque_total = 0;
    //Sistema do CPF
    int pdv1 = 0, pdv2 = 0/*digitos verificadores*/, cpfvd /*verificacao do cpf */ = 0, cpfok = 0;
    long long cpf, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    //Sistema de saques
    int saque = 0, saque_pendente = 0;
    int sd1,sd2,sd3,sd4,sd5,sd6; //Digitos que vao ser separados para a parte extensa
    setlocale(LC_ALL,"");
    do {
        system("cls");
        printf("------------------------------------------------------------------------------------------------------\n");
        printf("______                             _        _____  _____     _______ _____   _   _ _ _ _              \n");
        printf("| ___ \\                           | |      /  __ \\/  __ \\   / /_   _/ __  \\ | \\ | (_) | |             \n");
        printf("| |_/ / __ _ _ __   ___ ___     __| | ___  | /  \\/| /  \\/  / /  | | `' / /' |  \\| |_| | |_ ___  _ __  \n");
        printf("| ___ \\/ _` | '_ \\ / __/ _ \\   / _` |/ _ \\ | |    | |     / /   | |   / /   | . ` | | | __/ _ \\| '_ \\ \n");
        printf("| |_/ / (_| | | | | (_| (_) | | (_| |  __/ | \\__/\\| \\__/\\/ /    | | ./ /___ | |\\  | | | || (_) | | | |\n");
        printf("\\____/ \\__,_|_| |_|\\___\\___/   \\__,_|\\___|  \\____(_)____/_/     \\_/ \\_____/ \\_| \\_/_|_|\\__\\___/|_| |_|\n");
        printf("------------------------------------------------------------------------------------------------------\n");
        printf("\nMENU PRINCIPAL");
        printf("\n\n(1) Saque");
        printf("\n(2) Gerente");
        printf("\n(3) Finalizar");
        printf("\n\nDigite a opção: ");
        scanf("%d",&opc1);
        if((opc1!=1) && (opc1!=2) && (opc1!=3)) {
            printf("\nOpção inválida!\n");
            system("pause");
        } else {
            if(opc1==1) {
                printf("\nVocê escolheu SAQUE!\n");
                system("pause");
                system("cls");  
                printf("------------------------------------------------------------------------------------------------------\n");
                printf("______                             _        _____  _____     _______ _____   _   _ _ _ _              \n");
                printf("| ___ \\                           | |      /  __ \\/  __ \\   / /_   _/ __  \\ | \\ | (_) | |             \n");
                printf("| |_/ / __ _ _ __   ___ ___     __| | ___  | /  \\/| /  \\/  / /  | | `' / /' |  \\| |_| | |_ ___  _ __  \n");
                printf("| ___ \\/ _` | '_ \\ / __/ _ \\   / _` |/ _ \\ | |    | |     / /   | |   / /   | . ` | | | __/ _ \\| '_ \\ \n");
                printf("| |_/ / (_| | | | | (_| (_) | | (_| |  __/ | \\__/\\| \\__/\\/ /    | | ./ /___ | |\\  | | | || (_) | | | |\n");
                printf("\\____/ \\__,_|_| |_|\\___\\___/   \\__,_|\\___|  \\____(_)____/_/     \\_/ \\_____/ \\_| \\_/_|_|\\__\\___/|_| |_|\n");
                printf("------------------------------------------------------------------------------------------------------\n");
                //BLOCO CPF
                printf("Favor informar o CPF:\n");
                scanf("%lld", &cpf);
                //Separa os digitos de cada parte do cpf
                //d == digito do cpf
                d1=cpf / 10000000000;
                d2=(cpf / 1000000000) % 10;
                d3=(cpf / 100000000) % 10;
                d4=(cpf / 10000000) % 10;
                d5=(cpf / 1000000) % 10;    
                d6=(cpf / 100000) % 10;
                d7=(cpf / 10000) % 10;
                d8=(cpf / 1000) % 10;
                d9=(cpf / 100) % 10;
                d10=(cpf / 10) % 10;
                d11=cpf % 10;

                if (cpf == 11111111111 || cpf == 22222222222 || cpf == 33333333333 || cpf == 44444444444 || cpf == 55555555555 || cpf == 66666666666 || cpf == 77777777777 || cpf == 88888888888 || cpf == 99999999999){
                    printf("CPF invalido (nao existe cpf com digitos consecutivos, I.E 111.111.111-11)\n");
                    system("pause");
                }else{
                    pdv1 /*Primeiro digito verificador */= ((d1*10)+(d2*9)+(d3*8)+(d4*7)+(d5*6)+(d6*5)+(d7*4)+(d8*3)+(d9*2))%11; //Multiplica-se os digitos por 10! e depois se compara com o primeiro digito depois do -
                    if (pdv1 < 2){
                        pdv1 = 0;
                    }else{
                        pdv1 = 11 - pdv1;
                    }
                    pdv2 /*Segundo digito verificador */=  ((d1*11)+(d2*10)+(d3*9)+(d4*8)+(d5*7)+(d6*6)+(d7*5)+(d8*4)+(d9*3)+(pdv1*2))%11;
                    if (pdv2 < 2){
                        pdv2 = 0;
                    }else{
                        pdv2 = 11 - pdv2;
                    }

                    //Verificacao da validade do spf
                    cpfok = (d10*10) + d11;
                    cpfvd = (10*pdv1) + pdv2;
                    //debug
                    //printf("%d %d \n",cpfok,cpfvd );

                    if (cpfok != cpfvd){ //Se alguma das duas verificacoes forem diferentes, o cpf sera invalido
                        printf("Cpf invalido, tente novamente.\n");
                        system("pause");
                    }else{
                        //Inicio do bloco saque
                        //Caixa pode ter 188 600 de uma vez so
                        system("cls");
                        printf("------------------------------------------------------------------------------------------------------\n");
                        printf("______                             _        _____  _____     _______ _____   _   _ _ _ _              \n");
                        printf("| ___ \\                           | |      /  __ \\/  __ \\   / /_   _/ __  \\ | \\ | (_) | |             \n");
                        printf("| |_/ / __ _ _ __   ___ ___     __| | ___  | /  \\/| /  \\/  / /  | | `' / /' |  \\| |_| | |_ ___  _ __  \n");
                        printf("| ___ \\/ _` | '_ \\ / __/ _ \\   / _` |/ _ \\ | |    | |     / /   | |   / /   | . ` | | | __/ _ \\| '_ \\ \n");
                        printf("| |_/ / (_| | | | | (_| (_) | | (_| |  __/ | \\__/\\| \\__/\\/ /    | | ./ /___ | |\\  | | | || (_) | | | |\n");
                        printf("\\____/ \\__,_|_| |_|\\___\\___/   \\__,_|\\___|  \\____(_)____/_/     \\_/ \\_____/ \\_| \\_/_|_|\\__\\___/|_| |_|\n");
                        printf("------------------------------------------------------------------------------------------------------\n");
                        printf("Bem vindo cliente!\n");
                        printf("Informe o valor do saque.\n");
                        scanf("%d", &saque);
                        while (saque < 1){
                            printf("O valor do saque nao pode ser menor que 1 R$! Informe novamente.\n");
                            scanf("%d",&saque);
                        }
                        //Valor maximo no caixa 188 600 R$
                        saque_pendente = saque;//Enquanto a varaivel saque mantem a quantidade de dinheiro total a ser gasta, a saque pendente mantem o tracking no quanto falta para o loop completar.
                        //Notas 450 R$
                        while(qnt_notas_450 > 0 && saque_pendente >= 450){
                            saque_pendente = saque_pendente - 450; //Quantidade ainda a ser sacada
                            qnt_notas_450 = qnt_notas_450 - 1; //Novo calculo de celudas de 450.
                            notas_totais = notas_totais - 1; //Novo calculo da quantidade total de cedulas.
                            saque_total = saque_total + 450; //Novo calculo da quantidade de dinheiro total sacado. 
                            caixa = caixa - 450; //Novo calculo do dinheiro em caixa
                            //printf("Exec bloco 450\n");
                        }
                        //Notas 250 R$
                        while(qnt_notas_250 > 0 && saque_pendente >= 250){
                            saque_pendente = saque_pendente - 250; //Quantidade ainda a ser sacada
                            qnt_notas_250 = qnt_notas_250 - 1; //Novo calculo de celudas de 250.
                            notas_totais = notas_totais - 1; //Novo calculo da quantidade total de cedulas.
                            saque_total = saque_total + 250; //Novo calculo da quantidade de dinheiro total sacado. 
                            caixa = caixa - 250; //Novo calculo do dinheiro em caixa
                            //printf("Exec bloco 250\n");
                        }
                        //Notas 50 R$
                        while(qnt_notas_50 > 0 && saque_pendente >= 50){
                            saque_pendente = saque_pendente - 50; //Quantidade ainda a ser sacada
                            qnt_notas_50 = qnt_notas_50 - 1; //Novo calculo de celudas de 50.
                            notas_totais = notas_totais - 1; //Novo calculo da quantidade total de cedulas.
                            saque_total = saque_total + 50; //Novo calculo da quantidade de dinheiro total sacado. 
                            caixa = caixa - 50; //Novo calculo do dinheiro em caixa
                            //printf("Exec bloco 50\n");
                        }
                        //Notas 20 R$
                        while(qnt_notas_20 > 0 && saque_pendente >= 20){
                            saque_pendente = saque_pendente - 20; //Quantidade ainda a ser sacada
                            qnt_notas_20 = qnt_notas_20 - 1; //Novo calculo de celudas de 20.
                            notas_totais = notas_totais - 1; //Novo calculo da quantidade total de cedulas.
                            saque_total = saque_total + 20; //Novo calculo da quantidade de dinheiro total sacado. 
                            caixa = caixa - 20; //Novo calculo do dinheiro em caixa
                            //printf("Exec bloco 20\n");
                        }
                        //Notas 10 R$
                        while(qnt_notas_10 > 0 && saque_pendente >= 10){
                            saque_pendente = saque_pendente - 10; //Quantidade ainda a ser sacada
                            qnt_notas_10 = qnt_notas_10 - 1; //Novo calculo de celudas de 10.
                            notas_totais = notas_totais - 1; //Novo calculo da quantidade total de cedulas.
                            saque_total = saque_total + 10; //Novo calculo da quantidade de dinheiro total sacado. 
                            caixa = caixa - 10; //Novo calculo do dinheiro em caixa
                            //printf("Exec bloco 10\n");
                        }
                        //Notas 5 R$
                        while(qnt_notas_5 > 0 && saque_pendente >= 5){
                            saque_pendente = saque_pendente - 5; //Quantidade ainda a ser sacada
                            qnt_notas_5 = qnt_notas_5 - 1; //Novo calculo de celudas de 5.
                            notas_totais = notas_totais - 1; //Novo calculo da quantidade total de cedulas.
                            saque_total = saque_total + 5; //Novo calculo da quantidade de dinheiro total sacado. 
                            caixa = caixa - 5; //Novo calculo do dinheiro em caixa
                            //printf("Exec bloco 5\n");
                        }
                        //Notas 2 R$
                        while(qnt_notas_2 > 0 && saque_pendente >= 2){
                            saque_pendente = saque_pendente - 2; //Quantidade ainda a ser sacada
                            qnt_notas_2 = qnt_notas_2 - 1; //Novo calculo de celudas de 2.
                            notas_totais = notas_totais - 1; //Novo calculo da quantidade total de cedulas.
                            saque_total = saque_total + 2; //Novo calculo da quantidade de dinheiro total sacado. 
                            caixa = caixa - 2; //Novo calculo do dinheiro em caixa
                            //printf("Exec bloco 2\n");
                        }
                        //Notas 1 R$
                        while(qnt_notas_1 > 0 && saque_pendente >= 1){
                            saque_pendente = saque_pendente - 1; //Quantidade ainda a ser sacada
                            qnt_notas_1 = qnt_notas_1 - 1; //Novo calculo de celudas de 1.
                            notas_totais = notas_totais - 1; //Novo calculo da quantidade total de cedulas.
                            saque_total = saque_total + 1; //Novo calculo da quantidade de dinheiro total sacado. 
                            caixa = caixa - 1; //Novo calculo do dinheiro em caixa
                            //printf("Exec bloco 1\n");
                        }

                        // if (saque_pendente == 0){
                        //     printf("Nada mais a sacar\n");
                        // }else if (saque_pendente > 0){
                        //     saque = saque - saque_pendente; //Calcula quanto foi sacado de fato, caso haja sobras
                        //     printf("Nao foi possivel sacar %d R$ do valor solicitado. Foi sacado %d R$.\n", saque_pendente, saque);
                        // }
                        //PARA DEBUGGING
                        //Antes tinha um codigo enorme que fazia esse metodo gerar muitos bugs, depois de pensar um pouco reduzi ela, por isso a diferenca gritantee de linhas
                        if (saque_pendente > 0){
                            saque = saque - saque_pendente; //Calcula quanto foi sacado de fato, caso haja sobras
                            printf("Nao sera possivel sacar %d R$.\n",saque_pendente );
                        }
                        printf("Sera sacado %d R$.\n", saque);
                        system("pause");
                        //Inicio do sistema por extenso
                        sd6 = (saque / 100000) % 10;  //Da esquerda pra direita
                        sd5 = (saque / 10000) % 10;
                        sd4 = (saque / 1000) % 10;
                        sd3 = (saque / 100) % 10;
                        sd2 = (saque / 10) % 10;
                        sd1 = (saque) % 10;
                        //Debug
                        //printf("%d  %d  %d  %d  %d  %d\n",sd6,sd5,sd4,sd3,sd2,sd1); //Printa os digitos separados
                        
                        system("cls");
                        printf("------------------------------------------------------------------------------------------------------\n");
                        printf("______                             _        _____  _____     _______ _____   _   _ _ _ _              \n");
                        printf("| ___ \\                           | |      /  __ \\/  __ \\   / /_   _/ __  \\ | \\ | (_) | |             \n");
                        printf("| |_/ / __ _ _ __   ___ ___     __| | ___  | /  \\/| /  \\/  / /  | | `' / /' |  \\| |_| | |_ ___  _ __  \n");
                        printf("| ___ \\/ _` | '_ \\ / __/ _ \\   / _` |/ _ \\ | |    | |     / /   | |   / /   | . ` | | | __/ _ \\| '_ \\ \n");
                        printf("| |_/ / (_| | | | | (_| (_) | | (_| |  __/ | \\__/\\| \\__/\\/ /    | | ./ /___ | |\\  | | | || (_) | | | |\n");
                        printf("\\____/ \\__,_|_| |_|\\___\\___/   \\__,_|\\___|  \\____(_)____/_/     \\_/ \\_____/ \\_| \\_/_|_|\\__\\___/|_| |_|\n");
                        printf("------------------------------------------------------------------------------------------------------\n");
                        //Um pouco de maquiagem asubasuasubasuabuh
                        printf("\nVoce sacou ");
                        //Centena de milhar
                        if (sd6 >= 0){
                            if (sd6 > 0 && sd5 == 0 && sd4 == 0 ){
                                printf("cem " );
                            }else if(sd6 > 0 && sd5 != 0 && sd4 != 0){
                                printf("cento e ");
                            }else{
                                printf("");
                            }
                        }
                        //Dezena de milhar
                        if (sd5 >= 0){
                            if (sd5 == 0){
                                printf("");
                            }
                            if (sd5 > 0 && sd4 == 0){
                                switch(sd5){
                                    case 9:
                                        printf("noventa ");
                                        break;
                                    case 8:
                                        printf("oitenta ");
                                        break;
                                    case 7:
                                        printf("setenta ");
                                        break;
                                    case 6:
                                        printf("sessenta ");
                                        break;
                                    case 5:
                                        printf("cinquenta ");
                                        break;
                                    case 4:
                                        printf("quarenta ");
                                        break;
                                    case 3:
                                        printf("trinta ");
                                        break;
                                    case 2:
                                        printf("vinte ");
                                        break;
                                    case 1:
                                        printf("dez ");
                                        break;
                                }
                            }else if (sd5 > 0 && sd4 > 0){
                                switch(sd5){
                                    case 9:
                                        printf("noventa e ");
                                        break;
                                    case 8:
                                        printf("oitenta e ");
                                        break;
                                    case 7:
                                        printf("setenta e ");
                                        break;
                                    case 6:
                                        printf("sessenta e ");
                                        break;
                                    case 5:
                                        printf("cinquenta e ");
                                        break;
                                    case 4:
                                        printf("quarenta e ");
                                        break;
                                    case 3:
                                        printf("trinta e ");
                                        break;
                                    case 2:
                                        printf("vinte e ");
                                        break;
                                    case 1:
                                        if (sd4 > 5)
                                        {
                                            printf("dez"); //O dez e um caso especial infelizmente, so pra ferrar minha vida
                                        }else if (sd4 == 5){
                                            printf("quinze ");
                                        }else if (sd4 == 4){
                                            printf("quatorze ");
                                        }else if (sd4 == 3){
                                            printf("treze ");
                                        }else if (sd4 == 2){
                                            printf("doze ");
                                        }else if (sd4 == 1){
                                            printf("onze ");
                                        }else{
                                            printf("dez ");
                                        }
                                        break;
                                }
                            }
                        }
                        //Unidade de milhar
                        if (sd4 >= 0){
                            if (sd4 == 0){
                                printf("");
                            }
                            if (sd4 > 0 && sd5 == 1){
                                switch(sd4){
                                    case 9:
                                        printf("enove ");
                                        break;
                                    case 8:
                                        printf("eoito ");
                                        break;
                                    case 7:
                                        printf("essete ");
                                        break;
                                    case 6:
                                        printf("esseis ");
                                        break;
                                    case 5:
                                        printf("");
                                        break;
                                    case 4:
                                        printf("");
                                        break;
                                    case 3:
                                        printf("");
                                        break;
                                    case 2:
                                        printf("");
                                        break;
                                    case 1:
                                        printf("");
                                        break;
                                }
                            }else if (sd4 > 0 ){
                                switch(sd4){
                                    case 9:
                                        printf("nove ");
                                        break;
                                    case 8:
                                        printf("oito ");
                                        break;
                                    case 7:
                                        printf("sete ");
                                        break;
                                    case 6:
                                        printf("seis ");
                                        break;
                                    case 5:
                                        printf("cinco ");
                                        break;
                                    case 4:
                                        printf("quatro ");
                                        break;
                                    case 3:
                                        printf("tres ");
                                        break;
                                    case 2:
                                        printf("dois ");
                                        break;
                                    case 1:
                                        printf("um ");
                                        break;
                                }
                            }
                        }
                        if ((sd3 == 0 && sd2 == 0 && sd1 == 0) && (sd6 > 0 || sd5 > 0 || sd4 > 0)){//possibilidades de acontecer numeros "Truncados"
                            printf("mil ");                            
                        }else if ((sd6 != 0 || sd5 != 0 || sd4 != 0) && (sd3 != 0 || sd2 != 0 || sd1 !=0)){
                            printf("mil e ");
                        }else {
                            printf("");
                        }//FIM DO MILHAR
                        //Centena
                        if (sd3 >= 0){
                            if (sd3 == 0){
                                printf("");
                            }
                            if (sd3 > 0 && sd2 == 0 && sd1 == 0){
                                switch(sd3){
                                    case 9:
                                        printf("novecentos ");
                                        break;
                                    case 8:
                                        printf("oitocentos ");
                                        break;
                                    case 7:
                                        printf("setecentos ");
                                        break;
                                    case 6:
                                        printf("seiscentos ");
                                        break;
                                    case 5:
                                        printf("quinhentos ");
                                        break;
                                    case 4:
                                        printf("quatrocentos ");
                                        break;
                                    case 3:
                                        printf("trezentos ");
                                        break;
                                    case 2:
                                        printf("duzentos ");
                                        break;
                                    case 1:
                                        printf("cem ");
                                        break;
                                }
                            }
                            if (sd3 > 0 && sd2 > 0 || sd1 >0){
                                switch(sd3){
                                    case 9:
                                        printf("novecentos e ");
                                        break;
                                    case 8:
                                        printf("oitocentos e ");
                                        break;
                                    case 7:
                                        printf("setecentos e ");
                                        break;
                                    case 6:
                                        printf("seiscentos e ");
                                        break;
                                    case 5:
                                        printf("quinhentos e ");
                                        break;
                                    case 4:
                                        printf("quatrocentos e ");
                                        break;
                                    case 3:
                                        printf("trezentos e ");
                                        break;
                                    case 2:
                                        printf("duzentos e ");
                                        break;
                                    case 1:
                                        printf("cento e ");
                                        break;
                                }
                            }
                        }
                        //Dezena
                        if (sd2 >= 0){
                            if (sd2 == 0){
                                printf("");
                            }
                            if (sd2 > 0 && sd1 == 0){
                                switch(sd2){
                                    case 9:
                                        printf("noventa ");
                                        break;
                                    case 8:
                                        printf("oitenta ");
                                        break;
                                    case 7:
                                        printf("setenta ");
                                        break;
                                    case 6:
                                        printf("sessenta ");
                                        break;
                                    case 5:
                                        printf("cinquenta ");
                                        break;
                                    case 4:
                                        printf("quarenta ");
                                        break;
                                    case 3:
                                        printf("trinta ");
                                        break;
                                    case 2:
                                        printf("vinte ");
                                        break;
                                    case 1:
                                        printf("dez ");
                                        break;
                                }
                            }else if (sd2 > 0 && sd1 > 0){
                                switch(sd2){
                                    case 9:
                                        printf("noventa e ");
                                        break;
                                    case 8:
                                        printf("oitenta e ");
                                        break;
                                    case 7:
                                        printf("setenta e ");
                                        break;
                                    case 6:
                                        printf("sessenta e ");
                                        break;
                                    case 5:
                                        printf("cinquenta e ");
                                        break;
                                    case 4:
                                        printf("quarenta e ");
                                        break;
                                    case 3:
                                        printf("trinta e ");
                                        break;
                                    case 2:
                                        printf("vinte e ");
                                        break;
                                    case 1:
                                        if (sd1 > 5)
                                        {
                                            printf("dez"); //O dez e um caso especial infelizmente, so pra ferrar minha vida
                                        }else if (sd1 == 5){
                                            printf("quinze ");
                                        }else if (sd1 == 4){
                                            printf("quatorze ");
                                        }else if (sd1 == 3){
                                            printf("treze ");
                                        }else if (sd1 == 2){
                                            printf("doze ");
                                        }else if (sd1 == 1){
                                            printf("onze ");
                                        }else{
                                            printf("dez ");
                                        }
                                        break;
                                }
                            }
                            //Unidade
                            if (sd1 >= 0){
                                if (sd1 == 0){
                                    printf("");
                                }
                                if (sd1 > 0 && sd2 == 1){
                                    switch(sd1){
                                        case 9:
                                            printf("enove ");
                                            break;
                                        case 8:
                                            printf("eoito ");
                                            break;
                                        case 7:
                                            printf("essete ");
                                            break;
                                        case 6:
                                            printf("esseis ");
                                            break;
                                        case 5:
                                            printf("");
                                            break;
                                        case 4:
                                            printf("");
                                            break;
                                        case 3:
                                            printf("");
                                            break;
                                        case 2:
                                            printf("");
                                            break;
                                        case 1:
                                            printf("");
                                            break;
                                    }
                                }else if (sd1 > 0 ){
                                    switch(sd1){
                                        case 9:
                                            printf("nove ");
                                            break;
                                        case 8:
                                            printf("oito ");
                                            break;
                                        case 7:
                                            printf("sete ");
                                            break;
                                        case 6:
                                            printf("seis ");
                                            break;
                                        case 5:
                                            printf("cinco ");
                                            break;
                                        case 4:
                                            printf("quatro ");
                                            break;
                                        case 3:
                                            printf("tres ");
                                            break;
                                        case 2:
                                            printf("dois ");
                                            break;
                                        case 1:
                                            printf("um ");
                                            break;
                                    }
                                }
                            }
                        }
                        //espera
                        if (saque == 1){
                            printf("real.\n");
                        }else if (saque == 0){ //caso nao haja notas para sacar
                            printf("Nao foi possivel sacar dinheiro, tente novamente mais tarde.\n");
                        }else{
                            printf("reais.\n");
                        }
                        printf("Obrigado por usar nossos servicos!\n");
                        printf("|-------------------------------------------------|\n");
                        printf("|                   Voce sabia?                   |\n");
                        printf("|-------------------------------------------------|\n");
                        printf("| %d R$ ja foram sacados no total nessa maquina.   |\n",saque_total);
                        printf("| A maquina carrega, nesse momento, %d notas.      |\n",notas_totais);
                        printf("| As notas totalizam %d R$!!!                      |\n",caixa);
                        printf("|-------------------------------------------------|\n");
                        //Fim da maquiagem
                        system("pause");
                    }
                }

            }
            if(opc1==2) {
                printf("\nVocê escolheu GERENTE!\n");
                system("pause");
                do {
                    system("cls");
                    printf("------------------------------------------------------------------------------------------------------\n");
                    printf("______                             _        _____  _____     _______ _____   _   _ _ _ _              \n");
                    printf("| ___ \\                           | |      /  __ \\/  __ \\   / /_   _/ __  \\ | \\ | (_) | |             \n");
                    printf("| |_/ / __ _ _ __   ___ ___     __| | ___  | /  \\/| /  \\/  / /  | | `' / /' |  \\| |_| | |_ ___  _ __  \n");
                    printf("| ___ \\/ _` | '_ \\ / __/ _ \\   / _` |/ _ \\ | |    | |     / /   | |   / /   | . ` | | | __/ _ \\| '_ \\ \n");
                    printf("| |_/ / (_| | | | | (_| (_) | | (_| |  __/ | \\__/\\| \\__/\\/ /    | | ./ /___ | |\\  | | | || (_) | | | |\n");
                    printf("\\____/ \\__,_|_| |_|\\___\\___/   \\__,_|\\___|  \\____(_)____/_/     \\_/ \\_____/ \\_| \\_/_|_|\\__\\___/|_| |_|\n");
                    printf("------------------------------------------------------------------------------------------------------\n");
                    printf("\nMENU GERENTE");
                    printf("\n\n(1) Valor total sacado");
                    printf("\n(2) Valor do saldo existente");
                    printf("\n(3) Quantidade de cédulas existentes");
                    printf("\n(4) Abastecer o caixa eletrônico");
                    printf("\n(5) Voltar ao menu principal");
                    printf("\n\nDigite a opção: ");
                    scanf("%d",&opc2);
                    switch(opc2) {
                        case 1: printf("\nVocê escolheu a opção %d\n",opc2);
                                printf("O valor total sacado foi %d R$\n",saque_total);
                                system("pause");
                                break;
                        case 2: printf("\nVocê escolheu a opção %d\n",opc2);
                                printf("O valor total no caixa e : %d \n", caixa);
                                system("pause");
                                break;
                        case 3: printf("\nVocê escolheu a opção %d\n",opc2);
                                printf("A quantidade de notas existentes e : %d \n",notas_totais);
                                printf("Notas de 450: %d\n",qnt_notas_450);
                                printf("Notas de 250: %d\n",qnt_notas_250);
                                printf("Notas de 50: %d\n",qnt_notas_50);
                                printf("Notas de 20: %d\n",qnt_notas_20);
                                printf("Notas de 10: %d\n",qnt_notas_10);
                                printf("Notas de 5: %d\n",qnt_notas_5);
                                printf("Notas de 2: %d\n",qnt_notas_2);
                                printf("Notas de 1: %d\n",qnt_notas_1);
                                system("pause");
                                break;
                        case 4: printf("\nVocê escolheu a opção %d\n",opc2);
                                system("pause");
                                do {
                                    system("cls");
                                    printf("------------------------------------------------------------------------------------------------------\n");
                                    printf("______                             _        _____  _____     _______ _____   _   _ _ _ _              \n");
                                    printf("| ___ \\                           | |      /  __ \\/  __ \\   / /_   _/ __  \\ | \\ | (_) | |             \n");
                                    printf("| |_/ / __ _ _ __   ___ ___     __| | ___  | /  \\/| /  \\/  / /  | | `' / /' |  \\| |_| | |_ ___  _ __  \n");
                                    printf("| ___ \\/ _` | '_ \\ / __/ _ \\   / _` |/ _ \\ | |    | |     / /   | |   / /   | . ` | | | __/ _ \\| '_ \\ \n");
                                    printf("| |_/ / (_| | | | | (_| (_) | | (_| |  __/ | \\__/\\| \\__/\\/ /    | | ./ /___ | |\\  | | | || (_) | | | |\n");
                                    printf("\\____/ \\__,_|_| |_|\\___\\___/   \\__,_|\\___|  \\____(_)____/_/     \\_/ \\_____/ \\_| \\_/_|_|\\__\\___/|_| |_|\n");
                                    printf("------------------------------------------------------------------------------------------------------\n");
                                    printf("\nMENU ABASTECER O CAIXA ELETRÔNICO");
                                    printf("\n\n(450) Cédulas de 450");
                                    printf("\n(250) Cédulas de 250");
                                    printf("\n(50) Cédulas de 50");
                                    printf("\n(20) Cédulas de 20");
                                    printf("\n(10) Cédulas de 10");
                                    printf("\n(5) Cédulas de 5");                                                                        
                                    printf("\n(2) Cédulas de 2");
                                    printf("\n(1) Cédulas de 1");
                                    printf("\n(0) Voltar ao menu gerente");
                                    printf("\n\nDigite a opção: ");
                                    scanf("%d",&opc3);
                                    switch(opc3) {
                                        case 450:   printf("\nVocê escolheu a opção %d\n",opc3);
                                                    printf("\nInforme a quantidade de notas para abastecer.\n");
                                                    scanf("%d", &notas_ab);
                                                    if (notas_ab == 0){
                                                        break;
                                                    }
                                                    while (notas_ab < 0){
                                                        printf("Quantidade de notas invalidas, informe novamente\n");
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                    }
                                                    qnt_notas_450 = qnt_notas_450 + notas_ab;
                                                    while (qnt_notas_450 > 100){
                                                        diff = qnt_notas_450 - 100;
                                                        printf("\nQuantidade de notas totais de 450 R$ nao pode passar de 100! Informe um numero condiga, %d notas a mais.\n", diff);
                                                        qnt_notas_450 = qnt_notas_450 - notas_ab;
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        } 
                                                        while (notas_ab < 0){
                                                            printf("Quantidade de notas invalidas, informe novamente\n");
                                                            scanf("%d", &notas_ab);
                                                            if (notas_ab == 0){
                                                                break;
                                                            }
                                                        }                        
                                                        qnt_notas_450 = qnt_notas_450 + notas_ab;                               
                                                    }
                                                    caixa = caixa + (notas_ab * 450 );
                                                    notas_totais = notas_totais + notas_ab;
                                                    printf("O total de dinheiro no caixa e : %d R$\n", caixa);
                                                    system("pause");
                                                    break;
                                        case 250:   printf("\nVocê escolheu a opção %d\n",opc3);
                                                    printf("\nInforme a quantidade de notas para abastecer.\n");
                                                    scanf("%d", &notas_ab);
                                                    if (notas_ab == 0){
                                                        break;
                                                    }
                                                    while (notas_ab < 0){
                                                        printf("Quantidade de notas invalidas, informe novamente\n");
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                    }
                                                    qnt_notas_250 = qnt_notas_250 + notas_ab;
                                                    
                                                    while (qnt_notas_250 > 200){
                                                        diff = qnt_notas_250 - 200;
                                                        printf("\nQuantidade de notas totais de 250 R$ nao pode passar de 200! Informe um numero condiga, %d notas a mais", diff);
                                                        qnt_notas_250 = qnt_notas_250 - notas_ab;
                                                        scanf("%d", &notas_ab);         
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                        while (notas_ab < 0){
                                                            printf("Quantidade de notas invalidas, informe novamente\n");
                                                            scanf("%d", &notas_ab);
                                                            if (notas_ab == 0){
                                                                break;
                                                            }
                                                        }                        
                                                        qnt_notas_250 = qnt_notas_250 + notas_ab;                                                  
                                                    }
                                                    caixa = caixa + (notas_ab * 250 );
                                                    notas_totais = notas_totais + notas_ab;
                                                    printf("O total de dinheiro no caixa e : %d R$\n", caixa);
                                                    system("pause");
                                                    break;
                                        case 50:    printf("\nVocê escolheu a opção %d\n",opc3);
                                                    printf("\nInforme a quantidade de notas para abastecer.\n");
                                                    scanf("%d", &notas_ab);
                                                    if (notas_ab == 0){
                                                        break;
                                                    }
                                                    while (notas_ab < 0){
                                                        printf("Quantidade de notas invalidas, informe novamente\n");
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                    }
                                                    qnt_notas_50 = qnt_notas_50 + notas_ab;
                                                    
                                                    while (qnt_notas_50 > 400){
                                                        diff = qnt_notas_50 - 400;
                                                        printf("Quantidade de notas totais de 50 R$ nao pode passar de 400! Informe um numero condiga, %d notas a mais.\n", diff);
                                                        qnt_notas_50 = qnt_notas_50 - notas_ab;
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        } 
                                                        while (notas_ab < 0){
                                                            printf("Quantidade de notas invalidas, informe novamente\n");
                                                            scanf("%d", &notas_ab);
                                                            if (notas_ab == 0){
                                                                break;
                                                            }
                                                        }                        
                                                        qnt_notas_50 = qnt_notas_50 + notas_ab;                                                          
                                                    }
                                                    caixa = caixa + (notas_ab * 50 );
                                                    notas_totais = notas_totais + notas_ab;
                                                    printf("O total de dinheiro no caixa e : %d R$\n", caixa);
                                                    system("pause");
                                                    break;
                                        case 20:     printf("\nVocê escolheu a opção %d\n",opc3);
                                                    printf("\nInforme a quantidade de notas para abastecer.\n");
                                                    scanf("%d", &notas_ab);
                                                    if (notas_ab == 0){
                                                        break;
                                                    }
                                                    while (notas_ab < 0){
                                                        printf("\nQuantidade de notas invalidas, informe novamente\n");
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                    }
                                                    qnt_notas_20 = qnt_notas_20 + notas_ab;
                                                    
                                                    while (qnt_notas_20 > 800){
                                                        diff = qnt_notas_20 - 800;
                                                        printf("\nQuantidade de notas totais de 20 R$ nao pode passar de 800! Informe um numero condiga, %d notas a mais.\n", diff);
                                                        qnt_notas_20 = qnt_notas_20 - notas_ab;
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        }    
                                                        while (notas_ab < 0){
                                                            printf("Quantidade de notas invalidas, informe novamente\n");
                                                            scanf("%d", &notas_ab);
                                                            if (notas_ab == 0){
                                                                break;
                                                            }
                                                        }                        
                                                        qnt_notas_20 = qnt_notas_20 + notas_ab;                                                       
                                                    }
                                                    caixa = caixa + (notas_ab * 20 );
                                                    notas_totais = notas_totais + notas_ab;
                                                    printf("O total de dinheiro no caixa e : %d R$\n", caixa);
                                                    system("pause");
                                                    break;
                                        case 10:     printf("\nVocê escolheu a opção %d\n",opc3);
                                                    printf("\nInforme a quantidade de notas para abastecer.\n");
                                                    scanf("%d", &notas_ab);
                                                    if (notas_ab == 0){
                                                        break;
                                                    }
                                                    while (notas_ab < 0){
                                                        printf("Quantidade de notas invalidas, informe novamente\n");
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                    }
                                                    qnt_notas_10 = qnt_notas_10 + notas_ab;
                                                    
                                                    while (qnt_notas_10 > 1600){
                                                        diff = qnt_notas_10 - 1600;
                                                        printf("\nQuantidade de notas totais de 10 R$ nao pode passar de 1600! Informe um numero condiga, %d notas a mais.\n", diff);
                                                        qnt_notas_10 = qnt_notas_10 - notas_ab;
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                        while (notas_ab < 0){
                                                            printf("Quantidade de notas invalidas, informe novamente\n");
                                                            scanf("%d", &notas_ab);
                                                            if (notas_ab == 0){
                                                                break;
                                                            }
                                                        }                        
                                                        qnt_notas_10 = qnt_notas_10 + notas_ab;                                                           
                                                    }
                                                    caixa = caixa + (notas_ab * 10 );
                                                    notas_totais = notas_totais + notas_ab;
                                                    printf("O total de dinheiro no caixa e : %d R$\n", caixa);
                                                    system("pause");
                                                    break;
                                        case 5:     printf("\nVocê escolheu a opção %d\n",opc3);
                                                    printf("\nInforme a quantidade de notas para abastecer.\n");
                                                    scanf("%d", &notas_ab);
                                                    if (notas_ab == 0){
                                                        break;
                                                    }
                                                    while (notas_ab < 0){
                                                        printf("Quantidade de notas invalidas, informe novamente\n");
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                    }
                                                        qnt_notas_5 = qnt_notas_5 + notas_ab;
                                                        
                                                        while (qnt_notas_5 > 3200){
                                                            diff = qnt_notas_5 - 3200;
                                                            printf("\nQuantidade de notas totais de 5 R$ nao pode passar de 3200! Informe um numero condiga, %d notas a mais.\n", diff);
                                                            qnt_notas_5 = qnt_notas_5 - notas_ab;
                                                            scanf("%d", &notas_ab);
                                                            if (notas_ab == 0){
                                                                break;
                                                            }
                                                        while (notas_ab < 0){
                                                            printf("Quantidade de notas invalidas, informe novamente\n");
                                                            scanf("%d", &notas_ab);
                                                            if (notas_ab == 0){
                                                                break;
                                                            }
                                                        }                        
                                                        qnt_notas_5 = qnt_notas_5 + notas_ab;                     
                                                    }
                                                    caixa = caixa + (notas_ab * 5 );
                                                    notas_totais = notas_totais + notas_ab;
                                                    printf("O total de dinheiro no caixa e : %d R$\n", caixa);
                                                    system("pause");
                                                    break;
                                        case 2:     printf("\nVocê escolheu a opção %d\n",opc3);
                                                    printf("\nInforme a quantidade de notas para abastecer.\n");
                                                    scanf("%d", &notas_ab);
                                                    if (notas_ab == 0){
                                                        break;
                                                    }
                                                    while (notas_ab < 0){
                                                        printf("Quantidade de notas invalidas, informe novamente\n");
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                    }
                                                    qnt_notas_2 = qnt_notas_2 + notas_ab;
                                                    
                                                    while (qnt_notas_2 > 6400){
                                                        diff = qnt_notas_2 - 6400;
                                                        printf("\nQuantidade de notas totais de 2 R$ nao pode passar de 6400! Informe um numero condiga, %d notas a mais.\n", diff);
                                                        qnt_notas_2 = qnt_notas_2 - notas_ab;
                                                        scanf("%d", &notas_ab);  
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                        while (notas_ab < 0){
                                                            printf("Quantidade de notas invalidas, informe novamente\n");
                                                            scanf("%d", &notas_ab);
                                                            if (notas_ab == 0){
                                                                break;
                                                            }
                                                        }                        
                                                        qnt_notas_2 = qnt_notas_2 + notas_ab;                                                         
                                                    }
                                                    caixa = caixa + (notas_ab * 2 );
                                                    notas_totais = notas_totais + notas_ab;
                                                    printf("O total de dinheiro no caixa e : %d R$\n", caixa);
                                                    system("pause");
                                                    break;
                                        case 1:     printf("\nVocê escolheu a opção %d\n",opc3);
                                                    printf("\nInforme a quantidade de notas para abastecer.\n");
                                                    scanf("%d", &notas_ab);
                                                    if (notas_ab == 0){
                                                        break;
                                                    }
                                                    while (notas_ab < 0){
                                                        printf("Quantidade de notas invalidas, informe novamente\n");
                                                        scanf("%d", &notas_ab);
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                    }
                                                    qnt_notas_1 = qnt_notas_1 + notas_ab;
                                                    
                                                    while (qnt_notas_1 > 12800){
                                                        diff = qnt_notas_1 - 12800;
                                                        printf("\nQuantidade de notas totais de 1R$ nao pode passar de 12800! Informe um numero condiga, %d notas a mais.\n", diff);
                                                        qnt_notas_1 = qnt_notas_1 - notas_ab;
                                                        scanf("%d", &notas_ab);                                               
                                                        if (notas_ab == 0){
                                                            break;
                                                        }
                                                        while (notas_ab < 0){
                                                            printf("Quantidade de notas invalidas, informe novamente\n");
                                                            scanf("%d", &notas_ab);
                                                            if (notas_ab == 0){
                                                                break;
                                                            }
                                                        }                        
                                                        qnt_notas_1 = qnt_notas_1 + notas_ab;            
                                                    }
                                                    caixa = caixa + (notas_ab * 1 );
                                                    notas_totais = notas_totais + notas_ab;
                                                    printf("O total de dinheiro no caixa e : %d R$\n", caixa);
                                                    system("pause");
                                                    break;
                                        case 0:     break;
                                        default:printf("\nOpção inválida!\n");
                                                system("pause");
                                                break;
                                    }
                                } while(opc3!=0);
                                break;
                        case 5: break;
                        default:printf("\nOpção inválida!\n");
                                system("pause");
                                break;
                    }
                } while(opc2!=5);
            }
        }
    } while(opc1!=3);
}
