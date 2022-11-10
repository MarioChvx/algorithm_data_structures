
struct node{
    Elem data;
    struct node* next;
}

typedef struct node* List;

List new_list(){
    new_list = (List)malloc(sizeof(struct node));

    new_list->data = NULL;
    new_list->next = NULL;

    return new_list;
}

int is_new_list(List l){
    if(l->data == NULL && l->next == NULL)
        return 1;
    else
        return 0;
}

Elem get_head_from_list(List l)

List add_to_list(List l, Elem e){
    if(is_new_list(l))
        l->data = e;
    else{
        new_list = new_list();
        new_list->data = e;
        new_list->next = l;
        l = new_list;
    }
    return l;
}

List remove_from_list(List l){
    node_to_delete = l;
    l = node_to_delet->next;
    free(node_to_delete);
    return l;
}

