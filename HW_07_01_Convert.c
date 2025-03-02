#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertReverse(char text[]);
int checkSame(char text_1[], char text_2[]);

int main(){
    char f_text[101], s_text[101];
    int check;
    scanf("%[^\n]s", f_text);
    scanf(" %[^\n]s", s_text);
    convertReverse(f_text);
    convertReverse(s_text);
    printf("*** Results ***\n%s\n%s\n", f_text, s_text);
    printf("***************\n");
    check = checkSame(f_text, s_text);
    if(check){
        printf("Both strings are the same.");
    } else {
        printf("Both strings are not the same.");
    }

    return 0;
}

void convertReverse(char text[]){
    for (int i = 0; text[i] != '\0'; i++){
        if (text[i] >= 'A' && text[i] <= 'Z'){
            text[i] += 32;
        } else if (text[i] >= 'a' && text[i] <= 'z'){
            text[i] -= 32;
        }
    }
}

int checkSame(char text_1[], char text_2[]){
    int maxlen;
    if(strlen(text_1) >= strlen(text_2)){
        maxlen = strlen(text_1);
    } else {
        maxlen = strlen(text_2);
    }
    for (int i = 0; i < maxlen; i++){
        if(tolower(text_1[i]) != tolower(text_2[i])){
            return 0;
        }
    }
    return 1;
}