#include "BinaryTree.h"

typedef BTree SBTree;

SBTree new_sbt(){
    return new_bt();
}

SBTree insert_sbt(Elem e, SBTree t){
    if(is_new_bt(t))
        t = build_bt(e, NULL, NULL);
    else if(e > root_bt(t))
        insert_sbt(elem_greater(e, right_son_bt(t)));
    else
        insert_sbt(e, left_son_bt(t));
}