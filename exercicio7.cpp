#include <iostream>

int main(){

    int temp;

    char escolhaTemp;

    printf("Digite a temperatura  deseja para realizar a conversão: ");
    scanf("%d",&temp);

    printf("Escolha a conversão em Celsius ou Fahrenheit ( F = Fahrenheit, C = Celsius): ");
    scanf("%s", &escolhaTemp);

    float celsius = ((temp - 32 )/ 1.8);
    float fahren = (temp * 1.8) + 32 ;

    if(escolhaTemp == 'C'|| escolhaTemp == 'c'){
        printf(" A conversão de Celsius para Fahrenheit deu %.2f °c \n", celsius);  
    }
    else if(escolhaTemp == 'F' || escolhaTemp == 'f'){
        printf(" A conversão de Fahrenheit para Celsiu deu %.2f f \n", fahren);
    }

    return 0;
}