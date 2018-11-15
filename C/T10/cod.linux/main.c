//Menos completo que o primeiro, tempo falta mais que qualquer outra cosia rgm 38346


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include "unit.h"
#ifndef REGISTRO_H
	#include "registro.h"
	#define REGISTRO_H
#endif

char opcionais[][TAM]={	
	{"4.portas"}, 
	{"cambio.automatico"}, 
	{"vidros.eletricos"}, 
	{"abs"}, 
	{"air.bag"}, 
	{"ar.condicionado"},
	{"banco.couro"}, 
	{"sensor.estacionamento"}};


	void geraCarro(CARRO *c){

		geraPlaca(c->placa);
		geraFabricanteModelo(c->fabricante,c->modelo);
		geraAnoModeloFabricacao(&c->ano_fabricacao, &c->ano_modelo);
		geraCombustivel(c->combustivel);
		geraCor(c->cor);
		geraOpcionais(c->opcional);
		c->preco_compra=geraPrecoCompra();
	}

	void printaCarro(CARRO c) {
		int i;

		printf("\nPlaca     : %s",c.placa);
		printf("\nFabricante: %s",c.fabricante);
		printf("\nModelo    : %s",c.modelo);
		printf("\nAno Fabric: %d",c.ano_fabricacao);
		printf("\nAno Modelo: %d",c.ano_modelo);
		printf("\nComb.     : %s",c.combustivel);
		printf("\nCor       : %s",c.cor);
		printf("\nOpcionais : ");
		for(i=0;i<8;i++)
			if(c.opcional[i]==1)
				printf("%s ", opcionais[i]);
			printf("\nPreco Compra: %.2f",c.preco_compra);
			printf("\n");
		}
		void printaCarroArq(CARRO c, FILE *x) {
			fwrite((void*)&c,sizeof(c),1,x);
		}

		void geraInfCliente(CLIENTE *c) {
			float x;

			geraNomeCliente(c->nome);
			geraCPFValido(c->cpf);
			geraRua(c->endereco.rua);
			c->endereco.numero=geraNumRua();
			geraBairro(c->endereco.bairro);
			geraCidade(c->endereco.cidade);
			geraUF(c->endereco.estado);
			geraCEP(c->endereco.cep);
			geraTelefone(c->residencial.telefone);
			c->quantos_celulares=geraTelefoneCelular(c->celular);
			x=geraRendaMensal();
			c->renda_mensal=geraRendaMensal();
		}

		void printaInfCliente(CLIENTE c) {
			int i;

			printf("\nNome     : %s",c.nome);
			printf("\nCPF      : %s",c.cpf);
			printf("\nRua      : %s, %d.",c.endereco.rua,c.endereco.numero);
			printf("\nBairro   : %s",c.endereco.bairro);
			printf("\nCidade   : %s",c.endereco.cidade);
			printf("\nUF       : %s",c.endereco.estado);
			printf("\nCEP      : %s",c.endereco.cep);
			printf("\nFone Resi: %s",c.residencial.telefone);
			printf("\nFone Celu: ");
			for(i=0;i<c.quantos_celulares;i++)
				printf("%s   ",c.celular[i].telefone);
			printf("\nRenda Men: %.2f",c.renda_mensal);
			printf("\n");
		}


		int main(int argc, char *argv[]) {
			int i,opc,aux=0;
			char opc2;
			FILE* arq;
			arq = fopen("carros.man","wb+");
			CARRO car,car_reg;
			CLIENTE cli[3000];
			myRandom();
			do{
				printf("Bem vindo ao sistema da fornecedora!\n");
				printf("Selecione o seu menu:\n");
				printf("1)Menu carro\n");
				printf("2)Menu cliente\n");
				printf("3)Menu venda\n");
				printf("4)Menu encerrar\n");
				scanf("%d",&opc);
				getchar();
				switch(opc){

					case 1:{
						write(1,"\E[H\E[2J",7);//funcao pra limpar a tela
						printf("Bem vindo ao menu carro:\n");
						printf("A)Inserir um carro no cadastro\n");
						printf("B)Excluir um carro no cadastro\n");
						printf("C)Listar todos os carros disponiveis para a venda\n");
						printf("D)Listar todos os carros disponiveis para venda com ""x"" opcional\n");
						printf("E)Voltar\n");
						scanf("%c",&opc2);
						getchar();
						opc2 =toupper(opc2);
						switch(opc2){
							case 'A':{
								aux = 0;
								geraCarro(&car);
								fseek(arq,0,SEEK_SET);
								do{
									if(fread(&car_reg,sizeof(car_reg),1,arq)>0){
										if (strcmp(car.placa,car_reg.placa) != 0){
										}else{
											printf("Esse carro ja foi registrado!");
											aux++;
											break;
										}
									}
								}while(!feof(arq));
								if(aux == 0){
									printf("Gerado! O carro e:\n");
									printaCarro(car);
									printaCarroArq(car,arq);

								}else{
									break;
								}

								getchar();
								write(1,"\E[H\E[2J",7);//funcao pra limpar a tela
								break;
							}
							case 'B':{
								char placa[8];
								printf("Informe a placa(XXX-YYYY):");
								fgets(placa,8,stdin);
								fseek(arq,0,SEEK_SET);
								do{
									if(strcmp(placa,car_reg.placa) == 0){
										
									}
								}while(!feof(arq));
							}
							case 'C':{

							}
							case 'D':{

							}
							case 'E':{
								write(1,"\E[H\E[2J",7);//funcao pra limpar a tela
								break;
							}
						}
					}
					break;
					case 2:{
						write(1,"\E[H\E[2J",7);//funcao pra limpar a tela
						printf("Bem vindo ao menu cliente:\n");
						printf("A)Inserir um cliente no cadastro\n");
						printf("B)Listar todos os clientes\n");
						printf("C)Voltar\n");
						scanf("%c",&opc2);
						opc2 =toupper(opc2);
						switch(opc2){
							case 'A':{

							}
							case 'B':{

							}
							case 'C':{
								write(1,"\E[H\E[2J",7);//funcao pra limpar a tela
								break;
							}
						}
						break;	
					}
					case 3:{
						write(1,"\E[H\E[2J",7);//funcao pra limpar a tela
						printf("Bem vindo ao menu venda:\n");
						printf("A)Inserir uma venda\n");
						printf("B)Excluir uma venda\n");
						printf("C)Listar os carros vendidos de um determinado fabricante, em ordem crescente pelo modelo\n");
						printf("D)Listar os carros vendidos de um determinado modelo, em ordem crescente pelo ano de fabricação\n");
						printf("E)Informar a quantidade de carros vendidos com o valor totalizado dos preços vendidos\n");
						printf("F)Informar o lucro total das vendas\n");
						printf("G)Voltar\n");
						scanf("%c",&opc2);
						opc2 =toupper(opc2);
						switch(opc2){
							case 'A':{

							}
							case 'B':{

							}
							case 'C':{

							}
							case 'D':{

							}
							case 'E':{

							}
							case 'F':{

							}
							case 'G':{
								write(1,"\E[H\E[2J",7);//funcao pra limpar a tela
								break;
							}
						}
					}
				}
			}while(opc != 4);
			write(1,"\E[H\E[2J",7);//funcao pra limpar a tela
			return 0;
		}
