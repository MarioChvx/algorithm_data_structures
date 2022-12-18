#include <stdlib.h>
#include <stdio.h>
#include "../elem/ElemInt.h"
#include "../data-structures/List.h"

int main(){
    List list = new_list();
    int i = 0;
    for(i = 0; i < 10; i++)
        list = insert_head_list(i, list);
    print_elem(list_head(list));
    print_list(list);
}
