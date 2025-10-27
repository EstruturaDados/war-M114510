#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//estrutura do projeto:
typedef struct NivelAventureiro{
    char nome[20];
    char cor[15];
    int tropas;
}terrritorio;

//funções:simular batalha;

void batalha( terrritorio* atacante, terrritorio* defensor){
    printf("\n Batalha entre %s (atacante) e %s (defensor)\n", atacante->nome, defensor->nome);

    int dado_atacante = rand() % 6 + 1;
    int dado_defensor = rand() % 6 + 1;

    printf("Dado do atacante (%s): %d\n", atacante->cor, dado_atacante);
    printf("Dado do defensor (%s): %d\n", defensor->cor, dado_defensor);

    if (dado_atacante    > dado_defensor) {
        defensor->tropas --;
        printf("Vitoria de %s! %sperdeu uma tropa!\n",atacante->cor, defensor->cor);
        
    } else {
        atacante->tropas --;
        printf("Vitoria de %s! %sperdeu uma tropa!\n",defensor->cor, atacante->cor);
    }
}
int main() {
    srand(time(NULL));

    //alocação de memoria para os territorios
    terrritorio* oceania = (terrritorio*)malloc(sizeof(terrritorio));
    terrritorio* america_do_sul = (terrritorio*)malloc(sizeof(terrritorio));

    //inicialização dos territorios
    strcpy(oceania->nome, "Oceania");
    strcpy(oceania->cor, "Azul");
    oceania->tropas = 5;        

    strcpy(america_do_sul->nome, "America do Sul");
    strcpy(america_do_sul->cor, "Vermelho");
    america_do_sul->tropas = 10;

    //estado inicial    
    printf("Estado inicial:\n");    
    printf("%s - Cor: %s, Tropas: %d\n", oceania->nome, oceania->cor, oceania->tropas);
    printf  ("%s - Cor: %s, Tropas: %d\n", america_do_sul->nome, america_do_sul->cor, america_do_sul->tropas);

    //simulação de batalha
    batalha(oceania, america_do_sul);

    //estado final;
    printf("\nEstado final:\n");
    printf("%s - Cor: %s, Tropas: %d\n", oceania->nome, oceania->cor, oceania->tropas);
    printf("%s - Cor: %s, Tropas: %d\n", america_do_sul->nome, america_do_sul->cor, america_do_sul->tropas
);
    //liberação de memoria
    free(oceania);
    free(america_do_sul);

    return 0;
}
    
