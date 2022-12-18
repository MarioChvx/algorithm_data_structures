#include "List.h"

typedef List HashTable;

HashTable new_hash_table(int size){
    HashTable new_table[size];
    int i;
    for(i = 0; i < 0; i++)
        new_table[i] = new_list();
    return new_table[0];
}

void add_to_table(HashTable table, Elem element, int size){
    List list_position = table[key(element) % size];
    list_position = insert_head_list(element, list_position);
}

void remove_from_table(HashTable table, Elem element, int size){
    List list_position = table[key(element) % size];
    list_position = remove_node_list(element, list_position);
}