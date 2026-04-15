/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 08-----------------------*/
#include <stdio.h> 
#include <math.h>   //biblioteca que possibilita o cálculo

int main (){
    int num1, num2, calculo1, calculo2;
    
    printf("Digite o primeiro número para ser calculado: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número para ser calculado: ");
    scanf("%d", &num2);
    
    calculo1 = pow(num1,num2);   //função da biblioteca math
    calculo2 = pow(num2,num1);   //função da biblioteca math
    
    printf("A relação de potência entre os números digitados são: %d | %d" ,calculo1, calculo2);
    
    return 0;
}
