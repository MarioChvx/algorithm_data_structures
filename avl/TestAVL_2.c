#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ElemInt.h"
#include "AVL.h"

int main(){
    Elem e;
    AVL x=vacioAB();

    while((e=LeeElem())!=0)
         x=insordAB(e,x);

    printf("Fact bal %d\n",FactBal(x));
    EsAVL(x) ? puts("Si.") : puts("No.");
    PreOrd(x);
    printf("\n");
    //x=rotaIzqDer(x);
    x = HazAVL(x);
    printf("Fact bal %d\n",FactBal(x));
    EsAVL(x) ? puts("Si.") : puts("No.");
    PreOrd(x);
    printf("\n");


    return 0;
}


