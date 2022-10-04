#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "busca.h"


void busca_valor_caracteristicas(vinhos *cadastro_vinhos, int qtd_structs, double valor_caracteristicas, char nome_caracteristicas[TAM]){

    int primeiro_indice, indice_aux;
    int qtd_vinhos = 0; 

    //Armazenar o valor do indice desejado
    primeiro_indice = busca_binaria( 0, qtd_structs - 1, cadastro_vinhos, nome_caracteristicas, valor_caracteristicas);

    if(strcmp(nome_caracteristicas, "ID") == 0 && primeiro_indice != -1){

        while(cadastro_vinhos[primeiro_indice].ID == valor_caracteristicas){
            --primeiro_indice;
        }

        //Como não atendeu as condições do while é preciso aumentar seu índice novamente, sendo o primeiro elemento na struct
        primeiro_indice += 1;
        indice_aux = primeiro_indice;

        //Verificar quantos vinhos com as características desejados a struct possui
        while(cadastro_vinhos[indice_aux].ID == valor_caracteristicas){
            ++qtd_vinhos;
            ++indice_aux;
        }
    }
    else if(strcmp(nome_caracteristicas, "citric_acid") == 0 && primeiro_indice != -1){

        while(cadastro_vinhos[primeiro_indice].citric_acid == valor_caracteristicas){
            --primeiro_indice;
        }

        //Como não atendeu as condições do while é preciso aumentar seu índice novamente, sendo o primeiro elemento na struct
        primeiro_indice += 1;
        indice_aux = primeiro_indice;

        //Verificar quantos vinhos com as características desejados a struct possui
        while(cadastro_vinhos[indice_aux].citric_acid == valor_caracteristicas){
            ++qtd_vinhos;
            ++indice_aux;
        }
    }
    else if(strcmp(nome_caracteristicas, "residual_sugar") == 0 && primeiro_indice != -1){

        while(cadastro_vinhos[primeiro_indice].residual_sugar == valor_caracteristicas){
            --primeiro_indice;
        }

        //Como não atendeu as condições do while é preciso aumentar seu índice novamente, sendo o primeiro elemento na struct
        primeiro_indice += 1;
        indice_aux = primeiro_indice;

        //Verificar quantos vinhos com as características desejados a struct possui
        while(cadastro_vinhos[indice_aux].residual_sugar == valor_caracteristicas){
            ++qtd_vinhos;
            ++indice_aux;
        }
    }    
    else if(strcmp(nome_caracteristicas, "density") == 0 && primeiro_indice != -1){

        while(cadastro_vinhos[primeiro_indice].density == valor_caracteristicas){
            --primeiro_indice;
        }

        //Como não atendeu as condições do while é preciso aumentar seu índice novamente, sendo o primeiro elemento na struct
        primeiro_indice += 1;
        indice_aux = primeiro_indice;

        //Verificar quantos vinhos com as características desejados a struct possui
        while(cadastro_vinhos[indice_aux].density == valor_caracteristicas){
            ++qtd_vinhos;
            ++indice_aux;
        }
    }
    else if(strcmp(nome_caracteristicas, "pH") == 0 && primeiro_indice != -1){

        while(cadastro_vinhos[primeiro_indice].pH == valor_caracteristicas){
            --primeiro_indice;
        }

        //Como não atendeu as condições do while é preciso aumentar seu índice novamente, sendo o primeiro elemento na struct
        primeiro_indice += 1;
        indice_aux = primeiro_indice;

        //Verificar quantos vinhos com as características desejados a struct possui
        while(cadastro_vinhos[indice_aux].pH == valor_caracteristicas){
            ++qtd_vinhos;
            ++indice_aux;
        }
    }
    else{
        if(primeiro_indice != -1){
            while(cadastro_vinhos[primeiro_indice].alcohol == valor_caracteristicas){
            --primeiro_indice;
            }

            //Como não atendeu as condições do while é preciso aumentar seu índice novamente, sendo o primeiro elemento na struct
            primeiro_indice += 1;
            indice_aux = primeiro_indice;

            //Verificar quantos vinhos com as características desejados a struct possui
            while(cadastro_vinhos[indice_aux].alcohol == valor_caracteristicas){
                ++qtd_vinhos;
                ++indice_aux;
            }
        }
    }

    if(primeiro_indice != -1){
        printar_vinhos(primeiro_indice, cadastro_vinhos, qtd_vinhos);
    }
}

//Busca binária da característica e do valor desejados
int busca_binaria(int indice_inicial, int indice_final, vinhos *cadastro_vinhos, char nome_caracteristicas[TAM], double chave){

    int indice_centro;

    if(strcmp(nome_caracteristicas, "ID") == 0){

        while(indice_inicial <= indice_final){
            indice_centro =(int) ((indice_inicial + indice_final) / 2);

            if(chave == cadastro_vinhos[indice_centro].ID)
                return indice_centro;
            else if(chave <= cadastro_vinhos[indice_centro].ID)
                indice_final = indice_centro - 1;
            else
                indice_inicial = indice_centro + 1; 
        }
    }
    else if(strcmp(nome_caracteristicas, "citric_acid") == 0){
        
        while(indice_inicial <= indice_final){
            indice_centro =(int) ((indice_inicial + indice_final) / 2);

            if(chave == cadastro_vinhos[indice_centro].citric_acid)
                return indice_centro;
            else if(chave <= cadastro_vinhos[indice_centro].citric_acid)
                indice_final = indice_centro - 1;
            else
                indice_inicial = indice_centro + 1; 
        }
    }
    else if(strcmp(nome_caracteristicas, "residual_sugar") == 0){
        
        while(indice_inicial <= indice_final){
            indice_centro =(int) ((indice_inicial + indice_final) / 2);

            if(chave == cadastro_vinhos[indice_centro].residual_sugar)
                return indice_centro;
            else if(chave <= cadastro_vinhos[indice_centro].residual_sugar)
                indice_final = indice_centro - 1;
            else
                indice_inicial = indice_centro + 1; 
        }
    }
    else if(strcmp(nome_caracteristicas, "density") == 0){
        
        while(indice_inicial <= indice_final){
            indice_centro =(int) ((indice_inicial + indice_final) / 2);

            if(chave == cadastro_vinhos[indice_centro].density)
                return indice_centro;
            else if(chave <= cadastro_vinhos[indice_centro].density)
                indice_final = indice_centro - 1;
            else
                indice_inicial = indice_centro + 1;
        }
    }
    else if(strcmp(nome_caracteristicas, "pH") == 0){
        
        while(indice_inicial <= indice_final){
            indice_centro =(int) ((indice_inicial + indice_final) / 2);

            if(chave == cadastro_vinhos[indice_centro].pH)
                return indice_centro;
            else if(chave <= cadastro_vinhos[indice_centro].pH)
                indice_final = indice_centro - 1;
            else
                indice_inicial = indice_centro + 1; 
        } 
    }
    else{

        while(indice_inicial <= indice_final){
            indice_centro =(int) ((indice_inicial + indice_final) / 2);

            if(chave == cadastro_vinhos[indice_centro].alcohol)
                return indice_centro;
            else if(chave <= cadastro_vinhos[indice_centro].alcohol)
                indice_final = indice_centro - 1;
            else
                indice_inicial = indice_centro + 1; 
        }  
    }

    printf("Nenhum vinho encontrado\n");
    return -1;
    
} 

void printar_vinhos(int primeiro_indice, vinhos *cadastro_vinhos, int qtd_vinhos){

    printf("ID: %d, Citric Acid: %.5lf, Residual Sugar %.5lf, Density %.5lf, pH %.5lf, Alcohol %.5lf\n", cadastro_vinhos[primeiro_indice].ID, cadastro_vinhos[primeiro_indice].citric_acid, cadastro_vinhos[primeiro_indice].residual_sugar, cadastro_vinhos[primeiro_indice].density, cadastro_vinhos[primeiro_indice].pH, cadastro_vinhos[primeiro_indice].alcohol);
    printf("Total de vinhos encontrados: %d\n", qtd_vinhos);
}