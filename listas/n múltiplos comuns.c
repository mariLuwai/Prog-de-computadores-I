// encontra os n multiplos comuns entre a e b.


#include <stdio.h> 
#define t printf(" ") //constante de espaço vazio

//assinaturas
int ehMultiplo(int r, int s); 
void multiplos(int q, int x, int y);


int main()
{
    //dicionário de dados
    int n, a, b;

    printf("Digite o numero de multiplos.\n");
    scanf("%d", &n);

    printf("quais os divisores:");
    scanf("%d %d", &a, &b);

    //defesa
    if(a <= 0 && b <= 0 && n <= 0) {
        printf("Numeros invalidos. Insira tres numeros positivos diferentes de zero.\n");
        scanf("%d %d %d", &n, &a, &b);
    }
    //corpo do programa
    multiplos(n, a, b);

    return 0;
}

    
 
int ehMultiplo(int r, int s) { // função de confirmação dse é múltiplo ou não
    if(r % s == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void multiplos(int q, int x, int y){ // printa os q primeiros números 
    //dicionário de dados
    int num = 0;

    //corpo da função
    for(int cont = 0; cont < q; num++) {
        if(ehMultiplo(num, x) || ehMultiplo(num, y)) { //confirma se é múltiplo de x ou de y
            printf("%d", num);
            t;
            cont++;
        }
    }
}
