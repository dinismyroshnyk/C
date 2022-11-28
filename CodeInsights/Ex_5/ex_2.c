#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 5.2
int main(){
    //begin_inputs
        int A,B;
        printf("Introduza 2 numeros: ");
        scanf("%d %d", &A, &B);
    //end_inputs

    if (A <= B){
        printf("entre %d e %d - resultado: ", A, B);
        for (int i = A; i <= B; i++)
        {
            if (i % 7 == 0 && i % 3 != 0){
                printf("%d ", i);
            }
        }
    } else printf("entre %d e %d - resultado: intervalo invalido", A, B);

    return 0;
}