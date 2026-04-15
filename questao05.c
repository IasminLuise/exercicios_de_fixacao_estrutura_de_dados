/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 05-----------------------*/
#include <stdio.h> 

int main (){
    int num1;
    int calculo;
    
    printf("Digite um número para ser calculado: ");
    scanf("%d", &num1);
    
    calculo = (num1 - 1);
    
    printf("O número sucessor do número digitado é: %d" ,calculo);
    
    return 0;
}
