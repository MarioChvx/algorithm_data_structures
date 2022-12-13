#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "elem/ElemWord.h"
#include "data-structures/HashTable.h"

int main(int argc, char **argv){
    Elem word;
    char str[30];
    scanf("Spanish: %s", word.spanish);
    scanf("Inglish: %s", word.english);
    int k = key(word);
    printf("%d\n", k);
    return 0;
}