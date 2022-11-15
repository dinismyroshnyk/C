#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 3.3
int main(){
    //begin_inputs
        int total_segundos;

        printf("Introduza o numero de segundos: ");
        scanf("%d", &total_segundos);
    //end_inputs

    int hr, min, seg, seg_resto;

    hr = total_segundos / 3600;
    seg_resto = total_segundos - hr * 3600;
    min = seg_resto / 60;
    seg_resto = seg_resto - min * 60;
    seg = seg_resto;

    printf("%d segundos = %d:%d:%d", total_segundos, hr, min, seg);

    return 0;
}