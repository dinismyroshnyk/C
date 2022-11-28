#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 5.5
int main(){
    //begin_inputs
        int N;
        printf("Introduza um numero: ");
        scanf("%d", &N);
    //end_inputs

    int a = 0, b = 1, c = 1;

    for(int i = 0; i < N; i++){
        a = b;
        b = c;
        c = a + b;
    }

    printf("F(%d)= %d", N, a);

    return 0;
}