#include <stdio.h>

int verifica_o_comportamento_das_temperaturas(int temper1, int temper2, int temper3);

int main(){
    // resultado 0 as pessoas ficam felizes e 1 elas ficam tristes
    int temperatura1, temperatura2, temperatura3, resultado;
    scanf("%d %d %d", &temperatura1, &temperatura2, &temperatura3);
    resultado=verifica_o_comportamento_das_temperaturas(temperatura1, temperatura2, temperatura3);
    if(resultado == 0)
        printf(":)");
    else
        printf(":(");
    printf("\n");
    return 0;
}

int verifica_o_comportamento_das_temperaturas(int temper1, int temper2, int temper3){
    /*
   1� Se a temperatura desceu do 1� para o 2� dia, mas subiu ou permaneceu constante do 2� para o 3�, as pessoas ficam felizes (primeira figura).
   2� Se a temperatura subiu do 1� para o 2� dia, mas desceu ou permaneceu constante do 2� para o 3�, as pessoas ficam tristes (segunda figura).
   3� Se a temperatura subiu do 1� para o 2� dia e do 2� para o 3�, mas subiu do 2� para o 3� menos do que subira do 1� para o 2�,
    as pessoas ficam tristes (terceira figura).
   4� Se a temperatura subiu do 1� para o 2� dia e do 2� para o 3�, mas subiu do 2� para o 3� no m�nimo o tanto que subira do 1� para o 2�,
    as pessoas ficam felizes (quarta figura).
   5� Se a temperatura desceu do 1� para o 2� dia e do 2� para o 3�, mas desceu do 2� para o 3� menos do que descera do 1� para o 2�,
    as pessoas ficam felizes (quinta figura).
    6� Se a temperatura desceu do 1� para o 2� dia e do 2� para o 3�, mas desceu do 2� para o 3� no m�nimo o tanto que descera do 1� para o 2�,
    as pessoas ficam tristes (sexta figura).
    7� Se a temperatura permaneceu constante do 1� para o 2� dia, as pessoas ficam felizes se subiu do 2� para o 3� dia ou tristes
    caso contr�rio (respectivamente, s�tima e oitava figuras).
    */

    int difere1, difere2;
    difere1=temper2-temper1;
    difere2=temper3-temper2;
    if(temper2 < temper1 && temper3 >= temper2)
        return 0;
    else if(temper2 > temper1 && temper3 <= temper2)
        return 1;
    else if(temper2 > temper1 && temper3 > temper2 && difere2 < difere1)
        return 1;
    else if(temper2 > temper1 && temper3 > temper2 && difere2 >= difere1)
        return 0;
    else if(temper2 < temper1 && temper3 < temper2 && difere2 > difere1)
        return 0;
    else if(temper2 < temper1 && temper3 < temper2 && difere2 <= difere1)
        return 1;
    else if(temper1 == temper2 && temper3 > temper2)
        return 0;
    else
        return 1;

}
