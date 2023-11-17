#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct Data tipoData;

typedef struct Atendimento tipoDisc; 

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Atendimento {
    int id_cliente;
    int id_animal;
    int id_servico;
    float preço; 
    char formadepagamento[50];
};

int main(void){

    system("pause"); 
    return 0;
}
