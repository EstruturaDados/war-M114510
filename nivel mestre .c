#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//estrutura do projeto:

//definindo a struct Brasil;

typedef struct Brasil {
    char nome[30];
    long populacao;
    char capital[30];

int main() {
    struct brasil pais;

    //atrubuir valores aos campos da struct
    strcpy(pais.nome, "Brasil");
    pais.populacao = 213000000;
    strcpy(pais.capital, "Brasilia");
    //exibir os valores dos campos da struct
    printf("País:%s\n", pais.nome);
    printf("População:%ld\n", pais.populacao);
    printf("Capital:%s\n", pais.capital);
    return 0;
    