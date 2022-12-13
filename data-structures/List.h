# include <stdlib.h>

struct node{
    Elem data;
    struct node* next;
};

typedef struct node* List;

List new_list(){
    List new_list = (List)malloc(sizeof(struct node));
    return new_list;
}

int is_new_list(List l){
    if(l->next == NULL)
        return 1;
    else
        return 0;
}

Elem get_head_from_list(List l){
    return l->data;
}

List add_to_list(List l, Elem e){
    if(is_new_list(l))
        l->data = e;
    else{
        List new_l = new_list();
        new_l->data = e;
        new_l->next = l;
        l = new_l;
    }
    return l;
}

List remove_from_list(List l){
    List node_to_delete = l;
    l = node_to_delete->next;
    free(node_to_delete);
    return l;
}
