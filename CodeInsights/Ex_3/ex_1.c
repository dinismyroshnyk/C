#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 3.1
int main(){
    //begin_inputs
        int numero1, numero2;
        printf("Por favor introduza 2 numeros inteiros: \n");
        scanf("%d%d",&numero1,&numero2);
    //end_inputs

    printf("%d + %d = %d\n",numero1,numero2,numero1+numero2);
    printf("%d * %d = %d",numero1,numero2,numero1*numero2);

	return 0;
}