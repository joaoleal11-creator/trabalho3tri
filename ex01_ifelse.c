#include <stdio.h>

int main()
{
    int numero;
    
    printf("digite um numero:");
    scanf("%d",&numero);
    
    if(numero>0){
        printf("Positivo\n");
    }
    else if(numero<0){
        printf("Negativo\n");
    }
    else{
        printf ("zero\n");
    }
    
    if(numero%2==0){
        printf ("par");
    }
    else{
      printf ("impar");
    }

    return 0;
}

