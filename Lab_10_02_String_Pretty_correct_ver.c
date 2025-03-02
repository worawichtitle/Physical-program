#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int print(char* mess, int lenght){
    int i;
    int posi = lenght/2 - (strlen(mess)/2);
    if (lenght - 2 == strlen(mess)){
        printf("*%s*\n", mess);
    } else if (lenght % 2 != 0 && strlen(mess) % 2 == 0){
        printf("*");
        for(i = 1; i < lenght; i++){
            if (i == posi){
               printf(" %s", mess);
            } else if (i == lenght -1){
                printf("*\n");
             } else if (i < posi) {
                printf(" ");
            } else if(i > posi + strlen(mess)){
                printf(" ");
            }    
        }
    } else {
        printf("*");
        for(i = 1; i < lenght; i++){
            if (i == posi){
               printf("%s", mess);
            } else if (i == lenght -1){
                printf(" *\n");
             } else if (i < posi) {
                printf(" ");
            } else if(i > posi + strlen(mess)){
                printf(" ");
            }    
        }
    }
    return 0;
}
 
int main(){
    int lenght;
    char first[50];
    char last[50];
    scanf("%d", &lenght);
    scanf(" %[^\n]s", first);
    scanf(" %[^\n]s", last);
    for (int i = 0; i < lenght; i++){
        printf("*");
    }
    printf("\n");
    print(first, lenght);
    print(last, lenght);
    for (int i = 0; i < lenght; i++){
        printf("*");
    }
    return 0;
}