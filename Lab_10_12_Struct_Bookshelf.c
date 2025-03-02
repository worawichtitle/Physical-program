#include <stdio.h>
#include <string.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main(){
    int count, i, found = 0;
    char findid[10];
    scanf("%d %s ", &count, findid);
    struct Book book[count];
    for (i = 0; i < count; i++){
        scanf(" %s %s %s", book[i].id, book[i].name, book[i].author);
        if (strcmp(book[i].id, findid) == 0){
            found = 1;
            printf("%s %s %s", book[i].id, book[i].name, book[i].author);
        }
    }
    if (!found){
        printf("Not Found");
    }
    // for (i = 0; i < count; i++){
    //     printf("%s", book[i].id);
    // }

    return 0;
}