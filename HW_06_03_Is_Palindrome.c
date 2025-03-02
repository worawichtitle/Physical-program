#include <stdio.h>
 
int main(){
    char text[101];
    char revtext[101];
    scanf("%[^\n]s", text);
    int i = 0, len = 0;
    while (text[len] != '\0') {
        len++;
    }
    for (i = 0; i < len; i++){
        revtext[i] = text[len - i - 1];
    }
    revtext[len] = '\0';
    for (i = 0; i < len / 2 + 1; i++){
        int same = text[len - i - 1] == revtext[len - i - 1];
        switch(same){
            case 0:
                printf("It is not Palindrome.");
                return 0;
        }
    }
    printf("It is Palindrome.");
    return 0;
}