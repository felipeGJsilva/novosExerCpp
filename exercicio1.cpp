# include <iostream>

int main(){
    int num;

    printf("Digite um número:   ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O número que foi digitado é par \n");
    }
    else{
        printf("O número que foi digitado não é par \n");
    }
    return 0;
}