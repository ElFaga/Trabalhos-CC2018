#ifndef REGISTRO_H
	#include "registro.h"
	#define REGISTRO_H
#endif

//objetivo: inicializa o gerador de numeros aleatorios 
//parametros: nenhum
//retorno: nenhum
void myRandom();
//objetivo: escolhe do alfabeto ('a'..'z') uma letra aleatoriamente
//parametros: nenhum
//retorno: a letra do alfabeto
char geraAlfabeto();
//objetivo: escolhe do conjunto de numero inteiros e positivos (0..9) um numero aleatoriamente
//parametros: nenhum
//retorno: o numero
char geraNumero();
//objetivo: gera uma placa de carro aleatoriamente no formato XXX-9999
//parametros: p, armazenara a placa gerada
//retorno: nenhum
void geraPlaca(char p[9]);
//objetivo: gera aleatoriamente um fabricante e um modelo de automovel
//parametros: f, armazenara o fabricante; m, armazenara o modelo
//retorno: nenhum
void geraFabricanteModelo(char f[50], char m[50]);
//objetivo: gera aleatoriamente um ano e modelo de fabricacao entre 2014 e 2019
//parametros: ano_fab, armazenara o ano de fabricacao; ano_mod, armazenara  o ano de modelo.
//            O ano de modelo e igual ao ano de fabricacao ou um ano para frente
//retorno: nenhum
void geraAnoModeloFabricacao(int *ano_fab, int *ano_mod);
//objetivo: gera aleatoriamente um combustivel
//parametros: comb, armazenara o combustivel
//retorno: nenhum
void geraCombustivel(char comb[50]);
//objetivo: gera aleatoriamente uma cor
//parametros: cor, armazenara a cor
//retorno: nenhum
void geraCor(char cor[50]);
//objetivo: gera aleatoriamente um conjunto de opcionais, no maximo 8, entre 1 e 8 conforme matriz de opcionais
//parametros: op, armazenara o conjunto de opcionais, valores entre 1 e 8 representando cada opcional
//retorno: nenhum
void geraOpcionais(int op[8]);
//objetivo: gera aleatoriamente um preco de compra
//parametros: nenhum
//retorno: o preco gerado
float geraPrecoCompra();
//objetivo: gera um nome de cliente aleatorio
//parametros: nome, armazenara o cliente gerado
//retorno: nenhum
void geraNomeCliente(char nome[50]);
//objetivo: verifica se um cpf no formato 999.999.999-99 e valido
//parametros: cpf, o cpf a ser verificado
//retorno: 1 se cpf e valido ou 0 se nao e valido
int verifica_cpf_valido(char cpf[15]);
//objetivo: insere pontuacoes '.' e '- ' em um cpf
//parametros: cpf_origem, o cpf recebido no format 99999999999
//            cpf_destino, armazenara o cpf com as pontuacoes no formato 999.999.999-99
//retorno: nenhum
void insere_pontuacao_cpf(char cpf_origem[15], char cpf_destino[15]);
//objetivo: obtem o primeiro digito verificador de um cpf no formato 999999999
//parametros: cpf, o cpf sem os digitos verificadores
//retorno: o calculo do primeiro digito verificador
int obtem_primeiro_digito_verificador(char cpf[15]);
//objetivo: obtem o segundo digito verificador de um cpf no formato 999999999
//parametros: cpf, o cpf sem os digitos verificadores
//retorno: o calculo do segundo digito verificador
int obtem_segundo_digito_verificador(char cpf[15]);
//objetivo: gera aleatoriamente um cpf valido no formato 999.999.999-99
//parametros: cpf, o cpf armazenara o cpf valido
//retorno: nenhum
void geraCPFValido(char cpf[15]);
//objetivo: gera um nome de rua aleatorio
//parametros: nome, armazenara a rua gerada
//retorno: nenhum
void geraRua(char nome[50]);
//objetivo: gera um numero de rua aleatorio
//parametros: nenhum
//retorno: numero de rua
int geraNumRua();
//objetivo: gera um nome de bairro aleatorio
//parametros: nome, armazenara o bairro gerado
//retorno: nenhum
void geraBairro(char nome[50]);
//objetivo: gera um nome de cidade aleatorio
//parametros: nome, armazenara a cidade gerada
//retorno: nenhum
void geraCidade(char nome[50]);
//objetivo: gera um nome de estado aleatorio
//parametros: nome, armazenara o estado gerado
//retorno: nenhum
void geraUF(char nome[3]);
//objetivo: gera um cep aleatorio no formato 99.999-999
//parametros: cep, armazenara o cep gerado
//retorno: nenhum
void geraCEP(char cep[11]);
//objetivo: gera um telefone aleatorio no formato 99 99999-9999
//parametros: fone, armazenara o telefone gerado
//retorno: nenhum
void geraTelefone(char fone[14]);
//objetivo: gera telefones celulares, no maximo 5, no formato 99 99999-9999
//parametros: fone, armazenara o telefone gerado
//retorno: quantos celulares gerados
int geraTelefoneCelular(TELEFONE f[5]);
//objetivo: gera aleatoriamente uma renda mensal
//parametros: nenhum
//retorno: a renda gerada
float geraRendaMensal();
