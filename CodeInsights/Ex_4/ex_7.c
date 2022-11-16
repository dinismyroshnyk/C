#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 4.7
int main(){
    //begin_inputs
        float valor_imovel;
        printf("Introduza o valor do imovel: ");
        scanf("%f", &valor_imovel);
    //end_inputs

    if (valor_imovel < 0) printf("Erro!");
    else if (valor_imovel < 93331 && valor_imovel >= 0) printf("valor do imovel: %.2f - IMT: isento", valor_imovel);
    else if (valor_imovel < 127667 && valor_imovel >= 93331) printf("valor do imovel: %.2f - IMT: %.2f", valor_imovel, valor_imovel * 0.02 - 1866.62);
    else if (valor_imovel < 174071 && valor_imovel >= 127667) printf("valor do imovel: %.2f - IMT: %.2f", valor_imovel, valor_imovel * 0.05 - 5696.63);
    else if (valor_imovel < 290085 && valor_imovel >= 174071) printf("valor do imovel: %.2f - IMT: %.2f", valor_imovel, valor_imovel * 0.07 - 9178.07);
    else if (valor_imovel < 580066 && valor_imovel >= 290085) printf("valor do imovel: %.2f - IMT: %.2f", valor_imovel, valor_imovel * 0.08 - 12078.85);
    else if (valor_imovel < 1010000 && valor_imovel >= 580170) printf("valor do imovel: %.2f - IMT: %.2f", valor_imovel, valor_imovel * 0.06);
    else if (valor_imovel >= 1010000) printf("valor do imovel: %.2f - IMT: %.2f", valor_imovel, valor_imovel * 0.075);

    return 0;
}