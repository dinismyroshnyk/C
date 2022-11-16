#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 4.4
int main(){
    //begin_inputs
        int nota;
        printf("Digite a nota do aluno: ");
        scanf("%d", &nota);
    //end_inputs

    switch (nota){
    case 10: case 11: case 12: printf("nota: %d - Regular", nota);
        break;
    case 13: case 14: case 15: printf("nota: %d - Bom", nota);
        break;
    case 16: case 17: case 18: printf("nota: %d - Muito bom", nota);
        break;
    case 19: case 20: printf("nota: %d - Excelente", nota);
        break;
    default: printf("nota: %d - Nota invalida", nota);
        break;
    }

    return 0;
}