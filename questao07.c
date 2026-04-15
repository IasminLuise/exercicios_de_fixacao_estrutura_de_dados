/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 07-----------------------*/
#include <stdio.h> 
#include <math.h>   //biblioteca que possibilita o cálculo

int main (){
    int num;
    int resultado;
    
    printf("Digite um número para ser calculado: ");
    scanf("%d", &num);
    
    resultado = pow(num,2);   //função da biblioteca math
    
    printf("O quadrado do número digitado é: %d" ,resultado);
    
    return 0;
}
