#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"ElemInt.h"
#include"AVL.h"

int main(){
    int i,e;
    AVL x=vacioAB();
    srand(time(NULL));

    for(e=1;e<100;e++){
        x=InsAVL(e,x);
        printf("[%d] Fact bal %d\n",e, FactBal(x));
    }
    return 0;
}


