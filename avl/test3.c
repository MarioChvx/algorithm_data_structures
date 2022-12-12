# include <stdio.h>
# include <stdlib.h>
# include "ElemInt.h"
# include "AVL.h"

int main(){
    Elem i;
    AVL t = vacioAB();
    for(i=0;i<10;i++)
        t = InsAVL(i,t);

    printf("In Order\n");
    InOrd(t); printf("\n");

    printf("Print Tree\n");
    printTree(t,0);
    return 0;

    // t = InsAVL(5,t);
    // insordAB(5,t);
    // t = BorrarAVL(5, t);
    // PostOrd(t); printf("\n");
}