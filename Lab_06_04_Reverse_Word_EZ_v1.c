#include <stdio.h>
 
int main(){
    char text[101];
    char newtext[101];
    scanf("%[^\n]s", text);
    int i = 0, len = 0;
    while (text[len] != '\0') {
        len++;
    }
    // printf("%d\n", len);
    for (i = 0; i < len; i++){
        // printf("%d: ", i);
        newtext[i] = text[len - i - 1];
        // printf("%c\n", newtext[i]);
    }
    newtext[len] = '\0';
    printf("%s", newtext);
 
    return 0;
}