//Atividade: receba 3 notas e faça a média das duas maiores notas (necessita de otmização)

#include <stdio.h>
int main()
{
    // dicionario de dados
    float n1, n2, n3;
    float m = 0;
    
    //busca das maiores notas
    scanf("%f %f %f", &n1, &n2, &n3);
    
    if(n1>=n2 && n2>=n3){
        m = (n1+n2)/2;
        printf("a media eh: %f \n", m);
    }
    else if(n2>=n3 && n3>=n1) {
        m = (n2+n3)/2;
        printf("a media eh: %f \n", m);

    }
    else {
        m = (n1+n3)/2;
        printf("a media eh: %f \n", m);

    }

    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------

  //atividade: recebe n inteiro de 3 digitos e informe se c³+d³+u³ = namespace

#include <stdio.h>
#include <math.h>

int main(){
    
    //dicionario de dados
    int n, c, d, u;
    
    // corpo do programa
    scanf("%d", &n);
    c = n / 100;
    d = (n / 10) % 10;
    u = n % 10;
    
    if (n = (pow(c,3))+(pow(d,3))+(pow(u,3))) {
        printf("centenas: %d, dezenas: %d, unidades: %d \n", c, d, u);
        printf("certo");
        
    }
    else {
        printf("erro");
    }
    
    return 0;
}


------------------------------------------------------------------------------------------------------------------------------------------------

  //atividade: receber as coordenadas de um ponto em um plano cartesiano e determinar o quadrante em que se localiza
  
  #include <stdio.h>

int main(){
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    if (x==0 && y == 0){
        printf("origem");
    }
   else if (x==0){
       printf("eixo X");
   }
   else if (y==0){
       printf("eixo y");
   }
   else if (y>0 && x>0){
       printf("primeiro quadrante");
   }
   else if (y>0 && x<0){
       printf("segundo quadrante");
   }
   else if (y<0 && x<0){
       printf("terceiro quadrante");
   }
   else {
       printf("quarto quadrante");
   }
   
   
    return 0;
}
