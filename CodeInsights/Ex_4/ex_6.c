#include <stdio.h>
//@cikey 2e594556e0c67eecde94429d7c3aa607
//@sid 2021157297
//@aid 4.6
int main(){
    //begin_inputs
        int dia_semana, idade;
        printf("Introduza o dia da semana (1 - 7): ");
        scanf("%d", &dia_semana);
        printf("Introduza a idade: ");
        scanf("%d", &idade);
    //end_inputs

    float ingresso = 10.0;

    switch (dia_semana){
    case 1:
        if (idade < 0 || idade > 120) printf("\nIdade invalida");
        else if (idade > 12 && idade < 21) printf("\ndia da semana: domingo - idade: %d - preco do ingresso: %.2f euros", idade, (ingresso * 0.5) - (ingresso * 0.25 * 0.5));
        else if (idade < 13 || idade > 64) printf("\ndia da semana: domingo - idade: %d - preco do ingresso: %.2f euros", idade, (ingresso * 0.5) - (ingresso * 0.4 * 0.5));
        else printf("\ndia da semana: domingo - idade: %d - preco do ingresso: %.2f euros", idade, ingresso * 0.5);
        break;
    case 5:
        if (idade < 0 || idade > 120) printf("\nIdade invalida");
        else if (idade > 12 && idade < 21) printf("\ndia da semana: quinta-feira - idade: %d - preco do ingresso: %.2f euros", idade, (ingresso * 0.5) - (ingresso * 0.25 * 0.5));
        else if (idade < 13 || idade > 64) printf("\ndia da semana: quinta-feira - idade: %d - preco do ingresso: %.2f euros", idade, (ingresso * 0.5) - (ingresso * 0.4 * 0.5));
        else printf("\ndia da semana: quinta-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso * 0.5);
        break;
    case 2:
        if (idade < 0 || idade > 120) printf("\nIdade invalida");
        else if (idade > 12 && idade < 21) printf("\ndia da semana: segunda-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso - (ingresso * 0.25));
        else if (idade < 13 || idade > 64) printf("\ndia da semana: segunda-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso - (ingresso * 0.4));
        else printf("\ndia da semana: segunda-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso);
        break;
    case 3:
        if (idade < 0 || idade > 120) printf("\nIdade invalida");
        else if (idade > 12 && idade < 21) printf("\ndia da semana: terca-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso - (ingresso * 0.25));
        else if (idade < 13 || idade > 64) printf("\ndia da semana: terca-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso - (ingresso * 0.4));
        else printf("\ndia da semana: terca-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso);
        break;
    case 4:
        if (idade < 0 || idade > 120) printf("\nIdade invalida");
        else if (idade > 12 && idade < 21) printf("\ndia da semana: quarta-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso - (ingresso * 0.25));
        else if (idade < 13 || idade > 64) printf("\ndia da semana: quarta-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso - (ingresso * 0.4));
        else printf("\ndia da semana: quarta-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso);
        break;
    case 6:
        if (idade < 0 || idade > 120) printf("\nIdade invalida");
        else if (idade > 12 && idade < 21) printf("\ndia da semana: quinta-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso - (ingresso * 0.25));
        else if (idade < 13 || idade > 64) printf("\ndia da semana: quinta-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso - (ingresso * 0.4));
        else printf("\ndia da semana: quinta-feira - idade: %d - preco do ingresso: %.2f euros", idade, ingresso);
        break;
    case 7:
        if (idade < 0 || idade > 120) printf("\nIdade invalida");
        else if (idade > 12 && idade < 21) printf("\ndia da semana: sabado - idade: %d - preco do ingresso: %.2f euros", idade, ingresso - (ingresso * 0.25));
        else if (idade < 13 || idade > 64) printf("\ndia da semana: sabado - idade: %d - preco do ingresso: %.2f euros", idade, ingresso - (ingresso * 0.4));
        else printf("\ndia da semana: sabado - idade: %d - preco do ingresso: %.2f euros", idade, ingresso);
        break;
    default: printf("Dia da semana invalido!");
        break;
    }

    return 0;
}