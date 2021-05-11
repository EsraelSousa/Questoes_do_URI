#include <stdio.h>
#include <string.h>

int main(){
    double num;
    scanf("%110lf", &num);
    printf("%+.4E\n", num);
    return 0;
}
