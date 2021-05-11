#include <stdio.h>

int main(){
    int distancia, diametro1, diametro2;
    scanf("%d %d %d", &distancia, &diametro1, &diametro2);
    printf("%.2lf", (double)distancia/(diametro1+diametro2));
    printf("\n");
    return 0;

}
