#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 5.6
int main(){
    //begin_inputs
        int altura;
        printf("Introduza a altura: ");
        scanf("%d", &altura);
    //end_inputs

    for (int i = 0; i < altura; i++){
        for (int j = altura; j > i; j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}