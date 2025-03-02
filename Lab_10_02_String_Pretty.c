#include <stdio.h>
#include <math.h>
#include <string.h>

void text_in_box(char* text, int len);

int main(){
    int len, i;
    char text_1[51] = {0}, text_2[41] = {0};
    scanf("%d", &len);
    // if(len > 80) {len = 80;}
    char star[len + 1];
    scanf(" %[^\n]s", text_1);
    scanf(" %[^\n]s", text_2);

    // printf("%s", text_2);
    for (i = 0; i < len; i++){
        star[i] = '*';
        // star[i] = (char) (i % 10);
    }
    printf("%s\n", star);
    text_in_box(text_1, len);
    text_in_box(text_2, len);
    printf("%s", star);

    return 0;
}

void text_in_box(char* text, int len){
    int half_f, half_b, i;
    int len_text = strlen(text);
    // char* ptr = text;
    // while(*ptr++ != '\0'){
    //     len_text++;
    // }
    half_f = (len - 2 - len_text) / 2;
    if((len - len_text) % 2) {half_f++;}
    half_b = len - 2 - len_text - half_f;
    printf("*");
    for(i = 0; i < half_f; i++){
        printf(" ");
    }
    printf("%s", text);
    for(i = 0; i < half_b; i++){
        printf(" ");
    }
    printf("*\n");
}
