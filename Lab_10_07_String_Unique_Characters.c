#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int unique(char* uncheck, char* check){
    int lenght = strlen(uncheck);
    int new_lenght = 0;
    for (int i = 0; i < lenght; i++){
        if (uncheck[i] == uncheck[i+1])
            i++;
        else {
            check[new_lenght] = uncheck[i];
            new_lenght++;
        }
    }
    check[new_lenght] = '\0';
    if (new_lenght != lenght){
        strcpy(uncheck, check);
        strcpy(check, "");
        printf("%s\n", uncheck);
        unique(uncheck, check);
    }
    return 0;
 
}
 
int main(){
    char mess[101], mess_check[101]="";
    scanf("%[^\n]", mess);
    unique(mess, mess_check);
    return 0;
}