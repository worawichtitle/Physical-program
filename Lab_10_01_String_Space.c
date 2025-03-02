#include <stdio.h>
#include <stdlib.h>

void remove_spaces(char* str);

int main() {
    char* text;
    int size = 150;
    text = (char *) malloc(150 * sizeof(char));
    scanf("%[^\n]s", text);
    remove_spaces(text);
    printf("%s", text);
    free(text);

    return 0;
}

void remove_spaces(char* str){
    char* ptr = str;
    while(*str != '\0'){
        while(*ptr == ' '){
            ++ptr;
        }
        *str++ = *ptr++;
    }
}