#include "BinaryTree.h"

typedef BTree ABLTree;

void rotate_right_abl(ABLTree t){
    BTree new_left = left_son_bt(left_son_bt(t));
    BTree new_right = build_bt(root_bt(t), right_son_bt(left_son_bt(t)), right_son_bt(t));
    Elem new_root = left_son_bt(root_bt(t));

}