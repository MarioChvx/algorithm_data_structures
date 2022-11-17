typedef int Elem;

void print_elem(Elem e){printf("%d\n",e);}

Elem read_elem(){
    Elem e;
    scanf("%d",&e);
    return e;
}

int elem_cmp(Elem e1, Elem e2){return e1==e2;}

int elem_greater(Elem e1, Elem e2){return e1>e2;}

