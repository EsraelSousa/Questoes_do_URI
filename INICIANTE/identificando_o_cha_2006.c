#include <stdio.h>

int main(){
    // (1) o ch� branco; (2) ch� verde; (3) ch� preto; ou (4) ch� de ervas
    int cha_correto, competidor1, competidor2, competidor3, competidor4, competidor5;
    int cont_acertos=0;
    scanf("%d %d %d %d %d %d", &cha_correto, &competidor1, &competidor2, &competidor3, &competidor4, &competidor5);
    if(cha_correto==competidor1)
        cont_acertos++;
    if(cha_correto==competidor2)
        cont_acertos++;
    if(cha_correto==competidor3)
        cont_acertos++;
    if(cha_correto == competidor4)
        cont_acertos++;
    if(cha_correto == competidor5)
        cont_acertos++;
    printf("%d", cont_acertos);
    printf("\n");
    return 0;
}
