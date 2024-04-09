# include <iostream>

int main(){

    int temp;

    char escolhaTemp;

    printf("Digite a temperatura  deseja para realizar a conversão: ");
    scanf("%d",&temp);

    printf("Escolha a conversão em Celsius ou Fahrenheit ( F = Fahrenheit, C = Celsius): ");
    scanf("%s", &escolhaTemp);

    int celsius = (temp - 32 )/ 1.8;
    int fahren = (temp * 18) + 32 ;

    if(escolhaTemp == 'C'|| 'c'){
        printf(" A conversão de Celsius para Fahrenheit deu %d °c \n", celsius);  
    }
    else if(escolhaTemp == 'F' || 'f'){
        printf(" A conversão de Fahrenheit para Celsiu deu %d f \n", fahren);
    }

    return 0;
}