// Escreva um programa em C que imprima uma figura como a mostrada abaixo. O número de linhas da figura deve ser informado pelo usuário, mas não pode ser maior que 10. Não crie uma função específica para isso (ou seja, simplesmente escreva toda a lógica na main()).
#include <stdio.h>
#define fim printf("\n");
#define tab printf(" ");
void arvore(int linhas, int invertida); //assinatura


int main() {
    //dicionário de dados
    int linhas, inverso; 

    //coleta de dados
    printf("Digite um numero natural ate 10: \n");
    scanf("%i", &linhas);

    printf("numero de parametro: \n");
    scanf("%d", &inverso);

    
    if(linhas > 10 || linhas < 1) {  // defesa
    printf("erro");
    return -1;
    }
// corpo do programa
    else {
        arvore(linhas, inverso);
        
    }
    return 0;
}


void arvore(int linhas, int invertida){
    int n1, n2;
    
    if(invertida < 0){
        for (int espaco = linhas; espaco >= 1; --espaco) {  

            for (int i = espaco; i >= 1; i--) { //espaçamento
                tab
            }   
            if (linhas >= 1){   
                n1 = espaco + (espaco-1) +1; //número total de asteríscos

                do{
                    printf("*");
                    n1--;
                } while (n1 >= 0);
                
                fim; // troca de linha
            }
            else{ // linha 1
                printf("*");
                fim;
            }
        }
    }
    else{
        for (int espaco = 0; espaco <= linhas; ++espaco) {

            for (int i = espaco; i != linhas; i++) {//espaçamento
                tab
            }   
            if (linhas >= 1){   
                n2 = espaco + (espaco-1) +1;//número total de asteríscos

                do{
                    printf("*");
                    n2--;
                } while (n2 >= 0);
                
                fim; // troca de linha
            }
            else{ // linha 1
                printf("*");
                fim;
            }
        }
    }
    
}
