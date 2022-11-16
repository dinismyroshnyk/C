#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 4.2
int main(){
    //begin_inputs
        int A, B, C;
        printf("Introduza os valores de A, B e C: ");
        scanf("%d %d %d", &A, &B, &C);
    //end_inputs

    if (A >= B && A >= C) printf("A: %d - B: %d - C: %d - maior: %d", A, B, C, A);
    else if (B >= A && B >= C) printf("A: %d - B: %d - C: %d - maior: %d", A, B, C, B);
    else printf("A: %d - B: %d - C: %d - maior: %d", A, B, C, C);

    return 0;
}