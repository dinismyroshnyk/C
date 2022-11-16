#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 4.3
int main(){
    //begin_inputs
        int horas, minutos, segundos;
        printf("Introduza as horas (hh mm ss): ");
        scanf("%d %d %d", &horas, &minutos, &segundos);
    //end_inputs

    if (horas < 0 || horas > 23) printf("%02d:%02d:%02d : hora invalida", horas, minutos, segundos);
    else if (minutos < 0 || minutos > 59) printf("%02d:%02d:%02d : hora invalida", horas, minutos, segundos);
    else if (segundos < 0 || segundos > 59) printf("%02d:%02d:%02d : hora invalida", horas, minutos, segundos);
    else printf("%02d:%02d:%02d : hora valida", horas, minutos, segundos);

    return 0;
}