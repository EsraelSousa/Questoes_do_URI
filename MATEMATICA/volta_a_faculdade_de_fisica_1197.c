#include <stdio.h>

int main(){
    int velocidade, tempo;
    while(scanf("%d %d", &velocidade, &tempo) != EOF){
        printf("%d\n", velocidade*(2*tempo));
    }
    return 0;
}
