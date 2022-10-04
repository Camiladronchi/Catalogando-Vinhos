#ifndef BUSCA_H
    #define BUSCA_H

    #include <stdio.h>
    #include <stdlib.h>

    #define TAM 50

    struct VINHOS{
        int ID;
        double citric_acid;
        double residual_sugar;
        double density;
        double pH;
        double alcohol;
    };

    typedef struct VINHOS vinhos;

    void busca_valor_caracteristicas(vinhos *cadastro_vinhos, int qtd_structs, double valor_caracteristicas, char nome_caracteristicas[TAM]);

    int busca_binaria(int indice_inicial, int indice_final, vinhos *cadastro_vinhos, char nome_caracteristicas[TAM], double chave);

    void printar_vinhos(int primeiro_indice, vinhos *cadastro_vinhos, int qtd_vinhos);

    #endif