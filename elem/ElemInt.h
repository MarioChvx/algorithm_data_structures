typedef int Elem;

void ImpElem(Elem e){printf("%d\n",e);}

Elem LeeElem(){
     Elem e;
     scanf("%d",&e);
}

int EsIgual(Elem e1, Elem e2){return e1==e2;}

int EsMenor(Elem e1, Elem e2){return e1<e2;}

int SonIgualesElem(Elem e1, Elem e2){return e1==e2;}

int SonDiferentesElem(Elem e1, Elem e2){return e1!=e2;}
