//Atividade: um vetor preenchido por 0 e 1 corresponde a um campo minado, onde 1 há uma bomba e 0 não. O programa printa um vetor baseado no campo
// informado que contém a quantidade de bombas que estão a uma casa anterior, na casa atual e na casa posterior a cada casa do campo.

#include <stdio.h>
#define TAM 50 // tamanho max do vetor


int main(){
    //dicionário de variáveis
    int campo[TAM], vet[TAM], num;

    //pede o tamanho do campo
    printf("Qual o tamanho do campo?\n");
    scanf("%d", &num);

    //preenche o campo com as bombas com valores 1 ou 0
    printf("digite os valores do campo:\n");
    for(int i=0; i<num; i++){scanf("%d", &campo[i]);}
    

    for(int i=0; i<num; i++){
        int count = 0;
        if(i==0){ // posição inicial ñ possui [i-1]
            if(campo[i] == 1) count+= 1;
            if(campo[i+1] == 1) count+= 1; //ifs independentes
        }
        else if(i == (num-1)){ //última posição, [i+1] ñ existe
            if(campo[i] == 1) count+= 1;
            if(campo[i-1] == 1) count+= 1;
        }
        else{ 
            if(campo[i] == 1) count+= 1;
            if(campo[i+1] == 1) count+= 1;
            if(campo[i-1] == 1) count+= 1;
        }
        vet[i] = count; //atribui a quantidade total de bombas ao vetor
        
    }

  //printa o vetor
  for(int i=0; i<num; i++) {printf("%d,", vet[i]);}  
    
  return 0;
}
