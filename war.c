// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//        
// ============================================================================
//
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// 
//estrutura do projeto:
# define NUM_terrotorios 4
typedef struct Territorio{
    char nome[30];
    char cor [15];
    int tropas ;
}territorio;
//funções:
int main() {
    territorio territorios[NUM_terrotorios]={
    {"oceania","Vermelho",10},
    {"africa,"Azul",20},
    {"europa","Verde",30},
    {"america do sul ","Amarelo",40}
    };

printf("estado inicial dos territorios:\n");
for(int i=0;i<NUM_terrotorios;i++){ 
    printf("| cor:%s:%d tropas(%s)\n",territorios[i].cor,territorios[i].tropas,territorios[i].nome);
}
    char cor_atacante[10],cor_defensor[20];
printf ("\n digite a cor do territorio atacante:");
scanf("%s",cor_atacante);
printf ("\n digite a cor do territorio defensor:"); 
scanf("%s",cor_defensor);

int idx_atacante=enontrar_territorio(territorios,NUM_terrotorios,cor_atacante);
int idx_defensor=enontrar_territorio(territorios,NUM_terrotorios,cor_defensor); 
if(idx_atacante==-1 || idx_defensor==-1){
    printf("territorio invalido\n");
    return 1;
}
    bataha(territorios,&territorios[idx_atacante],&territorios[idx_defensor]);
printf("\n estado apos a batalha :\n"); 
for(int i=0;i<NUM_terrotorios;i++){ 
    printf("| cor:%s:%d tropas(%s)\n",territorios[i].cor,territorios[i].tropas,territorios[i].nome);
}
    return 0;
}








