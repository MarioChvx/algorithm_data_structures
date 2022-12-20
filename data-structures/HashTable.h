#include "List.h"

typedef List *HashTable;

HashTable new_hash_table(int size){
    List new_table[size];
    int i;
    for(i = 0; i < 0; i++)
        new_table[i] = new_list();
    return new_table;
}

int is_in_table(Elem element, HashTable table, int size){
    List list_position = table[key(element) % size];
    return is_in_list(element, list_position);
}

int add_to_table(Elem element, HashTable table, int size){
    List list_position = table[key(element) % size];
    if(!is_in_list(element, list_position)){
        list_position = insert_head_list(element, list_position);
        return 1;
    }else
        return 0;
}

int remove_from_table(Elem element, HashTable table, int size){
    List list_position = table[key(element) % size];
    if(is_in_list(element, list_position)){
        list_position = remove_node_list(element, list_position);
        return 1;
    }else
        return 0;
}

void print_table(HashTable table, int size){
    int i;
    for(i = 0; i < size; i++){
        printf(" %d [", i);
        print_list(table[i]);
        printf("]\n");
    }
}
