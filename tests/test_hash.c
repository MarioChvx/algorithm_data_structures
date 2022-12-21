#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "../elem/ElemWord.h"
#include "../data-structures/HashTable.h"

void cls();
void test(char *, int);
void consult(char *);
void add_word(char *);
void print_dictionary(char *);

int main(int argc, char **argv){
    int option;
    while(!option){
        printf("\n\n~~~~~~ MENU ~~~~~~\n");
        printf(" 1.- Test\n 2.- Consult\n 3.- Add Word\n 4.- Dictionary\n 0.- Exit\n --> ");
        scanf("%d", &option);
        switch (option){
        case 1:
            test(argv[1], 3);
            option = 0;
            break;
        case 2:
            consult(argv[1]);
            option = 0;
            break;
        case 3:
            add_word(argv[1]);
            option = 0;
            break;
        case 4:
            print_dictionary(argv[1]);
            option = 0;
            break;
        case 0:
            return 0;
        default:
            break;
        }
    }
}

void cls(){
    printf("\e[1;1H\e[2J");
}

void test(char *direction, int questions){
    FILE *data_base = fopen(direction, "r");
    srand(time(NULL));
    double grade;
    int i,
        number_words,
        random,
        points = 0;
    fscanf(data_base, "%d", &number_words);
    HashTable words_table = new_hash_table(number_words);
    Elem word;
    char answer[30];
    for(i = 0; i < number_words; i++){
        word = read_word(data_base);
        add_to_table(word, words_table, number_words);
    }
    fclose(data_base);
    printf("\n\n~~~~~~ TEST ~~~~~~\n");
    printf("Give the traducction to englis to the following words\n");
    for(i = 0; i < questions; i++){
        random = rand() % number_words;
        while(is_new_list(words_table[random]))
            random = rand() % number_words;
        printf("%d.- %s\t-->\t", i, list_head(words_table[random]).spanish);
        scanf("%s", answer);
        if(strcmp(answer, list_head(words_table[random]).english) == 0)
            points++;
    }
    printf("~~~~~~ END ~~~~~~\n");
    grade = (10.0 * points / questions);
    grade >= 6 ? printf("Good") : printf("Bad");
    printf(" %.1f\n", grade);
}

void consult(char *direction){
    FILE *data_base = fopen(direction, "r");
    int i,
        position,
        number_words;
    fscanf(data_base, "%d", &number_words);
    HashTable words_table = new_hash_table(number_words);
    Elem word;
    for(i = 0; i < number_words; i++){
        word = read_word(data_base);
        add_to_table(word, words_table, number_words);
    }
    fclose(data_base);

    printf("\n\n~~~~~~ CONSULT WORD ~~~~~~\n");
    printf("Give the word in ");
    Elem search = esp_word();
    List in_table = is_in_table(search, words_table, number_words);
    if(in_table){
        printf("Traduction: %s\n", list_head(in_table).english);
        return;
    }else{
        printf("Doesn't exist\n");
        printf("Do you want to add it [y/n]?: ");
        char res = '.';
        scanf("%c", &res);
        switch (res){
        case 'y':
            add_word(direction);
            return;
        case 'Y':
            add_word(direction);
            return;
        case 'n':
            return;
        case 'N':
            return;
        default:
            printf("Invalid option please select a valid option [y/n]?: ");
            scanf("%s", &res);
        }
    }
}

void add_word(char *direction){
    FILE *data_base = fopen(direction, "r");
    int i,
        position,
        number_words;
    fscanf(data_base, "%d", &number_words);
    HashTable words_table = new_hash_table(number_words);
    Elem word;
    for(i = 0; i < number_words; i++){
        word = read_word(data_base);
        add_to_table(word, words_table, number_words);
    }
    fclose(data_base);

    printf("\n\n~~~~~~ ADD NEW WORD ~~~~~~\n");
    printf("Give the new word\n");
    Elem search = new_word();
    List in_table = is_in_table(search, words_table, number_words);
    if(in_table){
        printf("The element ");
        print_elem(list_head(in_table));
        printf(" already exist.\n");
    }else{
        printf("Element ");
        print_elem(list_head(in_table));
        printf(" added.\n");
    }

    FILE *dictionary = fopen(direction, "w");
    int elements = table_elemnts(words_table, number_words);
    fprintf(dictionary, "%d\n", elements);
    List node;
    for(i = 0; i < number_words; i++){
        if(!words_table[i]){
            node = words_table[i];
            while (node){
                fprintf(dictionary, "%s%s\n", list_head(node).spanish, list_head(node).english);
                node = list_tail(node);
            }
        }
    }
    fclose(dictionary);
    return;
}

void print_dictionary(char *direction){
    FILE *data_base = fopen(direction, "r");
    srand(time(NULL));
    double grade;
    int i,
        number_words,
        random,
        points = 0;
    fscanf(data_base, "%d", &number_words);
    HashTable words_table = new_hash_table(number_words);
    Elem word;
    char answer[30];
    for(i = 0; i < number_words; i++){
        word = read_word(data_base);
        add_to_table(word, words_table, number_words);
    }
    fclose(data_base);
    printf("\n\n~~~~~~ DICTINARY ~~~~~~\n");
    print_table(words_table, number_words);
    return;
}