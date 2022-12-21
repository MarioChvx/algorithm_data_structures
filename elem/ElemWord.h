struct word{
    char *spanish;
    char *english;
};

typedef struct word Elem;

Elem new_word(){
    Elem word;
    word.spanish = (char*)malloc(30);
    word.english = (char*)malloc(30);
    printf(" - spanish: ");
    scanf("%s", word.spanish);
    printf(" - english: ");
    scanf("%s", word.english);
    return word;
}

Elem esp_word(){
    Elem word;
    word.spanish = (char*)malloc(30);
    word.english = (char*)malloc(30);
    printf("spanish: ");
    scanf("%s", word.spanish);
    return word;
}

Elem read_word(FILE *input){
    Elem word;
    word.spanish = (char*)malloc(30);
    word.english = (char*)malloc(30);
    fscanf(input, "%s", word.spanish);
    fscanf(input, "%s", word.english);
    return word;
}

int key(Elem word){
    int i = 0, k = 0;
    while(word.spanish[i]){
        k += word.spanish[i] * word.spanish[i];
        i++;
    }
    return k;
}

int elem_cmp(Elem a, Elem b){
    // printf("%s, %s\n", a.spanish, b.spanish);
    return strcmp(a.spanish,b.spanish);
}

void print_elem(Elem e){
    printf("(esp:%s, ing:%s)", e.spanish, e.english);
}