#include <stdlib.h>

struct node{
    Elem data;
    struct node* next;
};

typedef struct node* Node;

typedef struct node* CList;

CList new_circular_list(){
    CList new_clist = (CList)malloc(sizeof(struct node));
    new_clist->data = NULL;
    new_clist->next = NULL;

    return new_clist;
}

Node new_node(){
    Node new_n = (Node)malloc(sizeof(struct node));
}

int is_new_clist(CList l){
    if(l->data == NULL && l->next == NULL)
        return 1;
    else
        return 0;
}

Elem get_head_from_clist(CList l){
    return l->next->data;
}

void append_to_clist(CList l, Elem e){
    CList new_node = new_circular_list();
    if(is_new_clist(l)){
        new_node->data = e;
        new_node->next = new_node;
        l = new_node;
    }else{
        new_node->data = e;
        new_node->next = l->next;
        l->next = new_node;
    }
}

void remove_from_clist(CList l){
    CList first_node = l->next;
    l->next = l->next->next;
    free(first_node);
}

