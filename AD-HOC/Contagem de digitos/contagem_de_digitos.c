#include <stdio.h>
void conta_e_mostra_algarismos(int A, int B);
int main(){
    int A, B;
    do{
        scanf("%d %d", &A, &B);
        if(A!=0 || B!=0){
            conta_e_mostra_algarismos(A, B);
        }
    }while(A!=0 || B!=0);
}

void conta_e_mostra_algarismos(int A, int B){
    int cont_0=0, cont_1=0, cont_2=0, cont_3=0, cont_4=0, cont_5=0, cont_6=0, cont_7=0, cont_8=0, cont_9=0, alga,i,aux;
    if(B<A){
        aux=B;
        B=A;
        A=aux;
    }
    for(i=A;i<=B;i++){
    aux=i;
    while(aux!=0){
        alga=aux%10;
        aux=aux/10;
        switch (alga){
            case 0: cont_0++;
            break;
            case 1: cont_1++;
            break;
            case 2: cont_2++;
            break;
            case 3: cont_3++;
            break;
            case 4: cont_4++;
            break;
            case 5: cont_5++;
            break;
            case 6: cont_6++;
            break;
            case 7: cont_7++;
            break;
            case 8: cont_8++;
            break;
            default: cont_9++;
        }
    }
    }
        printf("%d ", cont_0);
        printf("%d ", cont_1);
        printf("%d ", cont_2);
        printf("%d ", cont_3);
        printf("%d ", cont_4);
        printf("%d ", cont_5);
        printf("%d ", cont_6);
        printf("%d ", cont_7);
        printf("%d ", cont_8);
        printf("%d\n", cont_9);
}
