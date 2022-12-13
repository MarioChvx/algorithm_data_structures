#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef char* Elem;


void ImpElem(Elem e){printf("%s\n",e);}
Elem LeeElem(){
     Elem e=(Elem)malloc(sizeof(char)*20);
     scanf("%s",e);
     return e;
}

int EsIgual(Elem e1, Elem e2){return !strcmp(e1,e2);}
int EsMenor(Elem e1, Elem e2){return strcmp(e1,e2)<0;}
int EsMayor(Elem e1, Elem e2){return strcmp(e1,e2)>0;}
int SonIgualesElem(Elem e1, Elem e2){return !strcmp(e1,e2);}
int SonDiferentesElem(Elem e1, Elem e2){return strcmp(e1,e2)!=0;}
