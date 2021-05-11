#include <stdio.h>
#include <string.h>

int main(){
    char texto[503];
    scanf("%[^\n]%*c", &texto);
    if(strlen(texto) > 140)
        printf("MUTE");
    else
        printf("TWEET");
    printf("\n");
    return 0;
}
