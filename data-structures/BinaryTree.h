
struct bin_tree_node {
    Elem root;
    struct bin_tree_node* left_son;
    struct bin_tree_node* right_son;
};

typedef struct bin_tree_node* BTree;

BTree new_bt(){
    return NULL;
}

BTree build_bt(Elem e, BTree l, BTree r){
    BTree t = (BTree)malloc(sizeof(struct bin_tree_node));
    t->root= e;
    t->left_son = l;
    t->right_son = r;
    return t;
}

int is_new_bt(BTree t){
    if( t == NULL )
        return 1;
    else
        return 0;
}

Elem root_bt(BTree t){
    return t->root;
}

BTree left_son_bt(BTree t){
    if( t->left_son == NULL )
        return NULL;
    else
        return t->left_son;
}

BTree right_son_bt(BTree t){
    if( t->right_son == NULL )
        return NULL;
    else
        return t->right_son;
}
