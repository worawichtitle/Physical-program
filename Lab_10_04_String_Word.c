#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main(){
    char mess[150];
    int count = 0;
    scanf(" %[^\n]s", mess);
    for (int i = 0; i < strlen(mess); i++){
        if (isspace(mess[i])){
            count += 1;
        }
    }
    count += 1;
    printf("%d words\n", count);
    printf("----\n");
    count = 0;
    for (int i = 0; i < strlen(mess); i++){
        if (isspace(mess[i])){
            for (int j = i-count; j < i; j++){
                printf("%c", tolower(mess[j]));
            }
            printf(" : %d\n", count);
            count = 0;
 
        } else{
            count += 1;
        }
    }
    for (int j = strlen(mess)- count; j < strlen(mess); j++){
        printf("%c", tolower(mess[j]));
    }
    printf(" : %d", count);
}