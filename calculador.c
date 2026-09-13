#include <stdio.h>

void main(){
    printf("Calculadora");
}

int soma(int a, int b){
    return a + b;
}
    
int subtracao(int a, int b){
    return a - b;
}

float divisao(float a, float b){
    return a/b;
}

int multiplicacao(int a, int b){
    return a * b;
}

int fatorial(int valor){
    if(valor > 0 && valor <= 1){
        return 1;
    }else if(valor > 1){
        return valor * fatorial(valor-1);
    }else{
        return 0;
    }
}