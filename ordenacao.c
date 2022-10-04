#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "busca.h"
#include "ordenacao.h"

void trocar_vinhos(vinhos *cadastro_vinhos, int indice_maior_valor, int *tamanho){
    vinhos struct_aux;

    struct_aux = cadastro_vinhos[indice_maior_valor];
    cadastro_vinhos[indice_maior_valor] = cadastro_vinhos[(*tamanho) - 1];
    cadastro_vinhos[(*tamanho) - 1] = struct_aux;

    /*Diminuir o tamnho para que ele troque o próximo elemento pelo anterior do elemento que já foi trocado
    (caso o elemento que foi trocado está na última posição, o próximo elemento entrará na penúltima posição, após a troca)*/
    --(*tamanho);
}

void ordenar_vinhos(int qtd_structs, vinhos *cadastro_vinhos, char nome_caracteristicas[TAM]){

    int tamanho = qtd_structs;
    int indice_maior_valor;
    double maior_valor;

    if(strcmp(nome_caracteristicas, "ID") == 0){

        for(int i = 0; i < qtd_structs; ++i){
            maior_valor = cadastro_vinhos[0].ID;
            indice_maior_valor = 0;
            //Encontrar o maior valor da característica desejada
            for(int j = 0; j < tamanho; ++j){

                if(cadastro_vinhos[j].citric_acid > maior_valor){
                    maior_valor = cadastro_vinhos[j].ID;
                    indice_maior_valor = j;
                }

            }
            //O maior valor será trocado com o último elemento
            trocar_vinhos(cadastro_vinhos, indice_maior_valor, &tamanho);
            
        }

    }
    else if(strcmp(nome_caracteristicas, "citric_acid") == 0){

        for(int i = 0; i < qtd_structs; ++i){
            maior_valor = cadastro_vinhos[0].citric_acid;
            indice_maior_valor = 0;
            //Encontrar o maior valor da característica desejada
            for(int j = 0; j < tamanho; ++j){

                if(indice_maior_valor != j && cadastro_vinhos[j].citric_acid > maior_valor){
                    maior_valor = cadastro_vinhos[j].citric_acid;
                    indice_maior_valor = j;
                }

            }
            //Descobrir se há algum outro elemento igual ao maior elemento encontrado, caso haja será utilizado o critério de desempate
            for(int j = 0; j < tamanho; ++j){
                if(indice_maior_valor != j && cadastro_vinhos[j].citric_acid == maior_valor && cadastro_vinhos[j].ID > cadastro_vinhos[indice_maior_valor].ID){
                    indice_maior_valor = j;
                }

            }
            //O maior valor será trocado com o último elemento
                trocar_vinhos(cadastro_vinhos, indice_maior_valor, &tamanho);
        
        }

    }
    else if(strcmp(nome_caracteristicas, "residual_sugar") == 0){

        for(int i = 0; i < qtd_structs; ++i){
            maior_valor = cadastro_vinhos[0].residual_sugar;
            indice_maior_valor = 0;
            //Encontrar o maior valor da característica desejada
            for(int j = 0; j < tamanho; ++j){

                if(indice_maior_valor != j && cadastro_vinhos[j].residual_sugar > maior_valor){
                    maior_valor = cadastro_vinhos[j].residual_sugar;
                    indice_maior_valor = j;
                }

            }
            //Descobrir se há algum outro elemento igual ao maior elemento encontrado, caso haja será utilizado o critério de desempate
            for(int j = 0; j < tamanho; ++j){
                if(indice_maior_valor != j && cadastro_vinhos[j].residual_sugar == maior_valor && cadastro_vinhos[j].ID > cadastro_vinhos[indice_maior_valor].ID){
                    indice_maior_valor = j;
                }

            }
            //O maior valor será trocado com o último elemento
                trocar_vinhos(cadastro_vinhos, indice_maior_valor, &tamanho);
        
        }

    }
    else if(strcmp(nome_caracteristicas, "density") == 0){

        for(int i = 0; i < qtd_structs; ++i){
            maior_valor = cadastro_vinhos[0].density;
            indice_maior_valor = 0;
            //Encontrar o maior valor da característica desejada
            for(int j = 0; j < tamanho; ++j){

                if(indice_maior_valor != j && cadastro_vinhos[j].density > maior_valor){
                    maior_valor = cadastro_vinhos[j].density;
                    indice_maior_valor = j;
                }

            }
            //Descobrir se há algum outro elemento igual ao maior elemento encontrado, caso haja será utilizado o critério de desempate
            for(int j = 0; j < tamanho; ++j){
                if(indice_maior_valor != j && cadastro_vinhos[j].density == maior_valor && cadastro_vinhos[j].ID > cadastro_vinhos[indice_maior_valor].ID){
                    indice_maior_valor = j;
                }

            }
            //O maior valor será trocado com o último elemento
            trocar_vinhos(cadastro_vinhos, indice_maior_valor, &tamanho);
            
        
        }

    }
    else if(strcmp(nome_caracteristicas, "pH") == 0){

        for(int i = 0; i < qtd_structs; ++i){
            maior_valor = cadastro_vinhos[0].pH;
            indice_maior_valor = 0;
            //Encontrar o maior valor da característica desejada
            for(int j = 0; j < tamanho; ++j){

                if(indice_maior_valor != j && cadastro_vinhos[j].pH > maior_valor){
                    maior_valor = cadastro_vinhos[j].pH;
                    indice_maior_valor = j;
                }

            }
            //Descobrir se há algum outro elemento igual ao maior elemento encontrado, caso haja será utilizado o critério de desempate
            for(int j = 0; j < tamanho; ++j){
                if(indice_maior_valor != j && cadastro_vinhos[j].pH == maior_valor && cadastro_vinhos[j].ID > cadastro_vinhos[indice_maior_valor].ID){
                    indice_maior_valor = j;
                }

            }
            //O maior valor será trocado com o último elemento
                trocar_vinhos(cadastro_vinhos, indice_maior_valor, &tamanho);
        }

    }
    else{

        for(int i = 0; i < qtd_structs; ++i){
            maior_valor = cadastro_vinhos[0].alcohol;
            indice_maior_valor = 0;
            //Encontrar o maior valor da característica desejada
            for(int j = 0; j < tamanho; ++j){

                if(indice_maior_valor != j && cadastro_vinhos[j].alcohol > maior_valor){
                    maior_valor = cadastro_vinhos[j].alcohol;
                    indice_maior_valor = j;
                }

            }
            //Descobrir se há algum outro elemento igual ao maior elemento encontrado, caso haja será utilizado o critério de desempate
            for(int j = 0; j < tamanho; ++j){
                if(indice_maior_valor != j && cadastro_vinhos[j].alcohol == maior_valor && cadastro_vinhos[j].ID > cadastro_vinhos[indice_maior_valor].ID){
                    indice_maior_valor = j;
                }

            }
            //O maior valor será trocado com o último elemento
                trocar_vinhos(cadastro_vinhos, indice_maior_valor, &tamanho);
        }
    }
}