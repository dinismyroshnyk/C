#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 5.7
int main(){
    //begin_inputs
        int num_binario;
        printf("Introduza um numero binario: ");
        scanf("%d", &num_binario);
    //end_inputs

    int num_decimal = 0, peso = 1, bin = num_binario;

    while (num_binario != 0){
        int resto = num_binario % 10;
        if (resto == 1 || resto == 0){
            num_decimal += (resto) * peso;
            num_binario /= 10;
            peso *= 2;
        } else {
            printf("numero binario invalido");
            return 0;
        }
    }

    printf("num_binario: %d - num_decimal: %d", bin, num_decimal);

    return 0;
}