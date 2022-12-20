struct word{
    char *spanish;
    char *english;
};

typedef struct word Elem;

int key(Elem word){
    int i = 0, k = 0;
    while(word.spanish[i])
        k += word.spanish[i++];
    return k;
}

int elem_cmp(Elem a, Elem b){
    int sp = a.spanish == b.spanish;
    int en = a.english == b.english;
    return en && sp;
}

void print_elem(Elem e){
    printf("(esp:%s, ing:%s)", e.spanish, e.english);
}