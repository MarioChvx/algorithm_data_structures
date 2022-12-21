#include "List.h"

typedef List *HashTable;

HashTable new_hash_table(int size){
    HashTable new_table = (HashTable)malloc(sizeof(List) * size);
    int i;
    for(i = 0; i < size; i++)
        new_table[i] = new_list();
    return new_table;
}

void print_sublist(List l){
    printf("[");
    print_list(l);
    printf("]\n");
}

void print_table(HashTable table, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("[%d]", i);
        print_sublist(table[i]);
    }
}

int table_position(Elem element, int size){
    return key(element) % size;
}

List is_in_table(Elem element, HashTable table, int size){
    int position = table_position(element, size);
    return is_in_list(element, table[position]);
}

int table_elemnts(HashTable table, int size){
    int i, elements;
    for(i = 0; i < size; i++)
        elements += list_size(table[i]);
    return elements;
}

int add_to_table(Elem element, HashTable table, int size){
    int position = table_position(element, size);
    if(is_in_list(element, table[position]))
        return -1;
    table[position] = insert_head_list(element, table[position]);
    return position;
}

int remove_from_table(Elem element, HashTable table, int size){
    int position = key(element) % size;
    if(!is_in_list(element, table[position]))
        return -1;
    table[position] = remove_node_list(element, table[position]);
    return position;
}


