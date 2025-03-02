#include <stdio.h>

int main(){
    char text[101];
    scanf("%[^\n]s", text);
    int i = 0, len = 0;
    while (text[len] != '\0') {
        len++;
    }
    for (i = 0; i < len; i++){
        printf("%c", text[len - i - 1]);
    }

    return 0;
}