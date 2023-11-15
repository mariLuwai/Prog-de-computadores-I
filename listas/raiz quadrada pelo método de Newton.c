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
    printf("por metodo de Newton: %.*lf\n", 5 , raizN);
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
    scanf("%lf", &x);

    //corpo da função
 while ((fabs(x - xi)>pow(10, -6))){
        xi = x;
        x = x-(pow(x, 2)-num) / (2*x); 
}   
    return x;
}

--------------------------------------------------------------------------------------------------------------------------------------

// código com recursão

    
#include <stdio.h>
#include <math.h> 
double Newton(double num, double x, double xi);  //assinatura da função de Newton

int main(){
// dicionário de dados
    double n, raizN, x;
    float raizS;
    printf("digite o numero:");
    scanf("%lf", &n);
    
    printf("Escolha um chute inicial para o valor da raiz.\n");
    scanf("%lf", &x);
    //defesa
    if(n<0){
    printf("erro, o numero é negativo");
    }

    //corpo do programa
    else{
    raizN = Newton(n, x, 0);
    raizS = sqrt(n);

    printf("calculo da raiz de %lf: \n", n);
    printf("por metodo de Newton: %.*lf\n", 5 , raizN);
    printf("por metodo sqrt: %f\n", raizS);
    }

return 0;
}

// função pelo método de Newton 
double Newton(double num, double x, double xi){

    //corpo da função
 if (fabs(x - xi)>pow(10, -6)){
    xi = x;
        x = x-((pow(x, 2)-num) / (2*x));
        return Newton(num,x, xi); 
}   
    return x;
}
