#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 5.3
int main(){
    //begin_inputs
        int numero;
        printf("Introduza um numero: ");
        scanf("%d", &numero);
    //end_inputs

    int num_user = numero;
    printf("numero: %d - divisores: ", numero);
    do{
        if(num_user % numero == 0){
            printf("%d ", numero);
        }
        numero --;
    } while (numero > 0);

    return 0;
}