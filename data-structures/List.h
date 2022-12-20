# include <stdlib.h>

typedef struct node{
    Elem data;
    struct node *next;
} *List;

List new_list(){
    return NULL;
}

int is_new_list(List l){
    return l == NULL;
}

Elem list_head(List l){
    return l->data;
}

List list_tail(List l){
    return l->next;
}

List new_node(Elem e){
    List node = (List)malloc(sizeof(struct node));
    node->data = e;
    node->next = NULL;
    return node;
}

List insert_head_list(Elem e, List l){
    List node = new_node(e);
    node->next = l;
    return node;
}

List remove_head_list(List l){
    List new_head = l->next;
    free(l);
    return new_head;
}

List remove_node_list(Elem e, List l){
    if(elem_cmp(list_head(l), e))
        return remove_head_list(l);
    if(is_new_list(list_tail(l)))
        return l;
    return insert_head_list(
        list_head(l),
        remove_node_list(e, list_tail(l))
    );
}

int is_in_list(Elem e, List l){
    if(is_new_list(l))
        return 0;
    if(elem_cmp(e, list_head(l)))
        return 1;
    return is_in_list(e, list_tail(l));
}

void print_list(List list){
    print_elem(list_head(list));
    if(!is_new_list(list_tail(list))){
        printf(", ");
        print_list(list_tail(list));
    }
}