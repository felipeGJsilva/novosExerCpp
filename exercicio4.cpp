# include <iostream>

int main(){
    float num1, num2, num3;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro  número: ");
    scanf("%f", &num3);

    if( num1  == num2 && num2 == num3 && num1 == num3){
        printf("Equilátero \n");
    }
    else if (((num1)))  {
        printf(" Isósceles \n");
    }
    else if(num1 != num2 && num2 != num3 && num1 != num3){
        printf("Escaleno \n");
    }
    return 0;
}