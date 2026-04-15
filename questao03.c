#include <stdio.h> 

int main (){
    int num1;
    int num2;
    int calculo;
    
    printf("Digite um numero para ser calculado: ");
    scanf("%d", &num1);
    printf("Digite um numero para ser calculado: ");
    scanf("%d", &num2);
    
    calculo = num1 + num2;
    
    printf("A soma desses dois números é: %d" ,calculo);
    
    return 0;
}
