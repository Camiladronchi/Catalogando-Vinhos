#ifndef ORDENACAO_H
    #define ORDENACAO_H

    #include <stdio.h>
    #include <stdlib.h>
    #include "busca.h"

    void trocar_vinhos(vinhos *cadastro_vinhos, int indice_maior_valor, int *tamanho);

    void ordenar_vinhos(int qtd_structs, vinhos *cadastro_vinhos, char nome_caracteristicas[TAM]);

    #endif
