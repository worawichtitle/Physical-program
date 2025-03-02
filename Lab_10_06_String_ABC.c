#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int compare(const void* a, const void* b){
    return (*(char*)a - *(char*)b);
}
 
int main(){
    char mess[200];
    scanf(" %[^\n]s", mess);
    qsort(mess, strlen(mess), sizeof(char), compare);
    printf("%s", mess);
    return 0;
}