#define TAM 		50

typedef struct {
    char placa[9];         		
    char modelo[TAM];       
    char fabricante[TAM];  		
    int ano_fabricacao;			
    int ano_modelo;				
    char combustivel[TAM];   	
    char cor[TAM];				
    int opcional[8];        
    float preco_compra;
} CARRO;


typedef struct {
    char rua[TAM];
    int numero;
    char bairro[TAM];
    char cidade[TAM];
    char estado[3];
    char cep[11];    
} ENDERECO;


typedef struct {
    char telefone[14];    
} TELEFONE;


typedef struct {
    char nome[TAM];
    char cpf[15];   	
    ENDERECO endereco;
    TELEFONE residencial;
    TELEFONE celular[5];
    int quantos_celulares;
    float renda_mensal;
} CLIENTE;

typedef struct {
   int dia, mes, ano;
} DATA;

typedef struct {
    char placa_car[9];
    char cpf_cli[15];
    float preco_venda;
    DATA data_venda;
} VENDA_CARRO;
