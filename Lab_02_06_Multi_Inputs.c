#include <stdio.h>

int main(){
    char word1[31];
    char word2[31];
    char word3[31];
    char word4[31];
    scanf("%s %s %s %s", word1, word2 , word3, word4);
    printf("String 1: %.3s\nString 2: %.4s\nString 3: %.5s\nString 4: %.6s"\
    , word1, word2, word3, word4);
    return 0;
}
