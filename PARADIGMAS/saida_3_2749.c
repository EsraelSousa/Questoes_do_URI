#include <stdio.h>

int main(){
    int i,j;
    for(i=0;i<39;i++)
        printf("-");
    printf("\n");

    for(i=0;i<5;i++){
        for(j=0;j<39;j++){
            if(j==0 || j==38)
                printf("|");
            else if(i==0 || j==1){
                printf("x = 35");
                j=5;
                continue;
            }

            else
                printf(" ");
        }
        printf("\n");
    }


    for(i=0;i<39;i++)
        printf("-");
    printf("\n");
    return 0;
}
