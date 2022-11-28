#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 5.1
int main(){
    //begin_inputs
        int num_final;
        printf("Introduza um numero: ");
        scanf("%d", &num_final);
    //end_inputs

    int soma = 0;
    for (int i = 0; i <= num_final; i++){
        soma = soma + i;
    }

    printf("num_final: %d - soma: %d", num_final, soma);

    return 0;
}