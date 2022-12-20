#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../elem/ElemWord.h"
#include "../data-structures/HashTable.h"

int main(int argc, char **argv){
    int i, sizet = 5;
    HashTable my_table = new_hash_table(sizet);
    Elem word;
    char str[30];
    for(i = 0; i < 5; i++){
        printf("Esp:");
        scanf("%s", str);
        strcpy(word.spanish, str);
        printf("Ing:");
        scanf("%s", str);
        strcpy(word.english, str);
    }
    print_table(my_table, sizet);
    return 0;
}