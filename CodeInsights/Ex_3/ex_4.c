#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 3.4
int main(){
    //begin_inputs
        float graus_f;
        printf("Temperatura em Fahrenheit: ");
        scanf("%f", &graus_f);
    //end_inputs

    float graus_c = ((graus_f - 32) / 9) * 5;
    printf("%.2fº F = %.1fº C", graus_f, graus_c);

    return 0;
}