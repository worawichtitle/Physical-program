#include<stdio.h>

int main(){
    char text[6];
    scanf("%s", text);
    printf("%.1s", text);
    printf(" %81.2s", text);
    printf(" %81.3s", text);
    printf(" %81.4s", text);
    printf(" %81s", text);
    return 0;
}