#include <stdio.h>

int main(){
    int qtd_caso, i;
    char pergunta[200];
    scanf("%d%*c", &qtd_caso);
    for(i=0;i<qtd_caso;i++){
        scanf("%[^\n]%*c", pergunta);
        printf("gzuz\n");
    }
    return 0;
}
