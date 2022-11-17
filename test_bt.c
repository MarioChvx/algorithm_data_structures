#include <stdio.h>
#include <stdlib.h>
#include "./elem/ElemInt.h"
#include "./data-structures/BinaryTree.h"

void print_bt(BTree);
int size_bt(BTree);

int main(){
    printf("Test binary tree \n\n");
    BTree t1 = build_bt(1, build_bt(2, NULL, NULL), build_bt(3, NULL, NULL));
    printf("%d\n", size_bt(t1));
}

void print_bt(BTree t){
    if ( is_new_bt(t) )
        print_elem(t->data);
    else
        print_bt(t->left_son);
        print_bt(t->right_son);
}

int size_bt(BTree t){
    if ( is_new_bt(t) )
        return 1;
    else
        return 1 + size_bt(left_son_bt(t)) + size_bt(right_son_bt(t));
}

