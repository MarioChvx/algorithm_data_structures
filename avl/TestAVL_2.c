#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"C:\Santiago\ClasesEnLinea\Ago2022\2AV2\Elem\ElemInt.h"
#include"C:\Santiago\ClasesEnLinea\Ago2022\2AV2\AVL\AVL.h"

int main(){
    Elem e;
    AVL x=vacioAB();

    while((e=LeeElem())!=0)
         x=insordAB(e,x);
    printf("Fact bal %d\n",FactBal(x));
    EsAVL(x)?puts("Si."):puts("No.");
    x=rotaIzqDer(x);
    printf("Fact bal %d\n",FactBal(x));
    EsAVL(x)?puts("Si."):puts("No.");


    return 0;
}


