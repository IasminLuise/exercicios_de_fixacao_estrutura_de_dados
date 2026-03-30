#include <stdio.h>

/*------------------MÉTODO PRINCIPAL---------------------*/

int main(){
    
    //declaração feita dentro do laço de repetição for
    //essa declaração é permitida quando se utiliza apenas dentro do laço de repetição
    
    printf("Exibir números naturais: ");  //impressão do texto
    
    for(int i=0; i<=4; i++){  //(inicialização; condição; finalização)
    
    if(i<4){
    printf("%d,", i);    //(impressão dos números cálculados com vírgula)
    
    } else {
        printf("%d.", i);    //(impressão dos números cálculados com ponto final)
    } // finalização da condição
    
    } //finalização do laço de repetição
    
    
    return 0;   //finalização do programa
}