#include <stdio.h>

int main(){
    int grau;
    while(scanf("%d", &grau) != EOF){
        grau%6==0? printf("Y\n"):printf("N\n");
    }
    return 0;
}
