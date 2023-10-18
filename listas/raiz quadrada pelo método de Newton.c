#include <stdio.h>
#include <math.h> 
double Newton(double num);  //assinatura da função de Newton

int main(){
// dicionário de dados
    double n, raizN;
    float raizS;
    printf("digite o numero:");
    scanf("%lf", &n);
    
    //defesa
    if(n<0){
    printf("erro, o numero é negativo");
    }

    //corpo do programa
    else{
    raizN = Newton(n);
    raizS = sqrt(n);

    printf("calculo da raiz de %lf: \n", n);
    printf("por metodo de Newton: %lf\n", raizN);
    printf("por metodo sqrt: %f\n", raizS);
    }

return 0;
}

// função pelo método de Newton 
double Newton(double num){

    //dicionário de dados
  double xi, x;
    //coleta do chute
    printf("Escolha um chute inicial para o valor da raiz.\n");
    scanf("%lf", &xi);

    //corpo da função
for (double x=1; x<=xi; x++) {
        x = xi;
        do {
        x = (x-(pow(x, 2)-num)) / (2*x);
        } while ((fabs(xi - (xi-1))<pow(10, -6)));
    
}   
return x;
}
