struct node_biqueue{
    Elem data;
    struct node_biqueue* left;
    struct node_biqueue* right;
}

typedef struct node_biqueue* Node;

struct biqueue{
    Node left_end;
    Node right_end;
}

typedef struct biqueue* Biqueue;

Biqueue new_biqueue(){
    Biqueue new_biqueue = (Biqueue)malloc(sizeof(struct biqueue))
    new_biqueue->left_end = NULL;
    new_biqueue->right_end = NULL;
    return new_biqueue;
}

Node new_node_e(Elem e){
    Node new_node = (Node)malloc(sizeof(struct node_biqueue));
    new_node->data = e;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void append_to_new_biqueue(Biqueue q, Node node){
    if(q->left_end == NULL && q->right_end == NULL){
        q->left_end = node;
        q->right_end = node;
    }else{
        printf("Not a new biqueue");
        return;
    }
}

int is_new_biqueue(Biqueue q){
    return (q->left_end == NULL && q->right_end == NULL);
}

void append_rigth(Biqueue q, Elem e){

    new_node = new_node_e(e);

    if(is_new_biqueue(q))
        append_to_new_biqueue(q, node_new){
    else{
        new_node->left = q->right_end;
        q->right_end->right = new_node;
        q->right_end = new_node;
    }
}

void append_left(Biqueue q, Elem e){

    new_node = new_empty_node;

    if(is_new_biqueue(q))
        append_to_new_biqueue(q, node_new){
    else{
        new_node->right = q->left_end;
        q->left_end->left = new_node;
        q->left_end = new_node;
    }
}

void remove_left(Biqueue q){
    to_be_removed = q->left_end;
    left_penultimate = q->left_end->right;

    left_penultimate->left = NULL;
    q->left_end = left_penultimate;

    free(to_be_removed);
}

void remove_rigth(Biqueue q){
    to_be_removed = q->right_end;
    right_penultimate = q->right_end->left;

    right_penultimate->right = NULL;
    q->right_end = right_penultimate;

    free(to_be_removed);
}

