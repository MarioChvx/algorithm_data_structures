#include "List.h"

typedef List *HashTable;

HashTable new_ht(int size){
    int i;
    HashTable new_table = (HashTable)malloc(sizeof(List)*size);
    for(i = 0; i < size; i++)
        new_table[i] = new_list();
    return new_table;
}

HashTable insert_ht(Elem element, HashTable table, int size){
    return 0;
}
