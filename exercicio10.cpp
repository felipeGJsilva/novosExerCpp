#include <iostream>

int main(){

    float saldo = 100000;
    float saque ;

    printf("Digite o valor para ser retirado: ");
    scanf("%f",&saque);

    if (saldo >= saque){
        printf(" você poode retirar \n");
    }
    else if (saldo < saque){
        printf(" Você não pode retirar pois não possui saldo suficiente \n ");
    }
}