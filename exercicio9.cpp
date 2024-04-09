#include <iostream>

int main(){

    float x;
    float y;

    printf("Digite a coordenada Y: ");
    scanf("%f", &y);
    printf("Digite a coordenada X: ");
    scanf("%f", &x);

    if (x > 0 && y > 0){
        printf(" Está no quadrante 1 \n");
    }
    else if(x < 0 && y > 0){
        printf(" Está no quadrante 2 \n");
    }
    else if( x < 0 && y < 0){
        printf(" Está no quadrante 3 \n");
    }
    else if (x >0 && y < 0){
        printf(" Está no quadrante 4 \n");
    }
    
    return false;
}