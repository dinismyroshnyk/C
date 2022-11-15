#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 3.2
int main(){
    //begin_inputs
        int horas, minutos, segundos;
        printf("Horas: ");
        scanf("%d", &horas);
        printf("Minutos: ");
        scanf("%d", &minutos);
        printf("Segundos: ");
        scanf("%d", &segundos);
    //end_inputs

    printf("%d:%d:%d = %d segundos", horas, minutos, segundos, horas * 3600 + minutos * 60 + segundos);

    return 0;
}