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