#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 5.4
int main(){
    //begin_inputs
        int altura_pedro, altura_maria;
        printf("Introduza a altura do Pedro(cm): ");
        scanf("%d", &altura_pedro);
        printf("Introduza a altura da Maria(cm): ");
        scanf("%d", &altura_maria);
    //end_inputs

    int contador = 0;
    printf("Pedro: %d - Maria: %d - anos: ", altura_pedro, altura_maria);

    while (altura_pedro >= altura_maria){
        altura_pedro++;
        altura_maria+= 3;
        contador++;
    }

    printf("%d", contador);

    return 0;
}