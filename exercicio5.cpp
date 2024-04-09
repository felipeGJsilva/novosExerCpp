# include <iostream>

int main(){
    float n1, n2 ;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    
    char ope;

    printf(" Escolha a operaçao: \n + \n - \n * \n / ");
    scanf("%s", &ope);

    float sub = n1 - n2 ;
    float ad = n1 + n2 ;
    float mult = n1 * n2;
    float divi  = n1 / n2 ;


    if( ope == '+'){
        printf("%f \n", ad);
    }
    
    else if( ope == '+'){
        printf("%f \n", sub);
    }
    else if( ope == '*'){
        printf("%f \n", mult);
    }
    else if( ope == '/'){
        printf("%f \n", divi);
    }
    return false;

}