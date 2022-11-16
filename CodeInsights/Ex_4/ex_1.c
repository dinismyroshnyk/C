#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 4.1
int main(){
    //begin_inputs
        float salario;
        printf("Introduza o salario: ");
        scanf("%f", &salario);
    //end_inputs

    if (salario <= 800) printf("salario: %.2f - imposto: isento", salario);
    else if (salario > 800 && salario <= 2000) printf("salario: %.2f - imposto: %.2f", salario, salario * 0.2);
    else printf("salario: %.2f - imposto: %.2f", salario, salario * 0.4);

    return 0;
}