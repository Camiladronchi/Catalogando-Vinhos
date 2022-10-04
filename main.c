/*
  Nome: Camila Donda Ronchi                                      N° USP: 13672220
  Disciplina: Introdução à Ciência de Computação II              Professor: Fernando Pereira dos Santos
  
  Objetivo: Desenvolver um programa em C que leia todos os dados de um arquivo csv e que possa realizar buscas
  e contagem dos vinhos com o valor da característica quantas vezes forem desejadas.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "busca.h"
#include "ordenacao.h"

int contagem_structs(FILE *arq);

vinhos *alocar_memoria_struct(int qtd_structs);

void cadastrar_vinhos(FILE *arq, vinhos *cadastro_vinhos);


int main(){

    char nome_arquivo[TAM];
    int qtd_buscas;
    char nome_caracteristicas[TAM];
    double valor_caracteristicas;

    //Leitura dos dados 
    scanf("%s %d", nome_arquivo, &qtd_buscas);

    int qtd_structs;
    FILE *arq; 
    arq = fopen(nome_arquivo, "r");
    
    if(arq == NULL){
        fclose(arq);
        return -1;
    }

    vinhos *cadastro_vinhos;

    //Identificar a quantidade de structs para poder alocar toda a memória necessária
    qtd_structs = contagem_structs(arq);
    //Devolver o cursor para o início do arquivo
    fseek(arq, 0, SEEK_SET);
    //Alocar memória para o vetor de struct
    cadastro_vinhos = alocar_memoria_struct(qtd_structs);
    if(cadastro_vinhos == NULL){
        fclose(arq);
        return -1;
    }
    //Armazenar os dados do arquivo no vetor de struct
    cadastrar_vinhos(arq, cadastro_vinhos);

    //Já que o arquivo não será mais ultilizado, já será fechado
    fclose(arq);

    for(int i = 0; i < qtd_buscas; ++i){
        scanf("%s %lf", nome_caracteristicas, &valor_caracteristicas);
        ordenar_vinhos(qtd_structs, cadastro_vinhos, nome_caracteristicas);
        busca_valor_caracteristicas(cadastro_vinhos, qtd_structs, valor_caracteristicas, nome_caracteristicas);

    }

    free(cadastro_vinhos);

    return 0;
}

int contagem_structs(FILE *arq){

    char string_aux[TAM];
    int qtd_linhas = 0;

    //Leitura do cabeçalho
    fscanf(arq, "%s", string_aux);

    //Leitura até o final do arquivo
    while(feof(arq) == 0){

        fscanf(arq,"%s", string_aux);
        ++qtd_linhas;
    }

    return qtd_linhas;
}

vinhos *alocar_memoria_struct(int qtd_structs){

    vinhos *alocar_structs;

    alocar_structs = (vinhos *) calloc(qtd_structs, sizeof(vinhos));

    //Caso a memoria não seja alocada
    if(alocar_structs == NULL){
        printf("Erro ao alocar memoria");
        exit(1);
    }

    return alocar_structs;
}

void cadastrar_vinhos(FILE *arq, vinhos *cadastro_vinhos){

    char string_aux[TAM];
    int indice = 0;

    //Leitura do cabeçalho
    fscanf(arq, "%s", string_aux);

    //Leitura até o final do arquivo
    while(feof(arq) == 0){

        fscanf(arq,"%d,%lf,%lf,%lf,%lf,%lf",&cadastro_vinhos[indice].ID, &cadastro_vinhos[indice].citric_acid, &cadastro_vinhos[indice].residual_sugar, &cadastro_vinhos[indice].density, &cadastro_vinhos[indice].pH, &cadastro_vinhos[indice].alcohol);
        ++indice;
    }

}