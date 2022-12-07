# include <stdlib.h>

struct node{
    Elem data;
    struct node* next;
};

typedef struct node* Node;

struct queue{
    Node first;
    Node last;
};

typedef struct queue* Queue;

Queue new_queue(){
    Queue new_q = (Queue)malloc(sizeof(struct queue));
    new_q->first = NULL;
    new_q->last = NULL;
    return new_q;
}

int is_new(Queue q){
    return q->first == NULL && q->last == NULL
}

Queue append(Elem e, Queue q){
    Node new_node = (Node)malloc(sizeof(struct node));
    new_node->data = e;
    new_node->next = NULL;
    
    if(is_new(q)){
        q->first = new_node;
        q->last = new_node;
    }else{
        q->last->next = new_node;
        q->last = new_node;
    }
    
    return q;
}

Elem get_first(Queue q){
    return q->first->data;
}

Queue unqueue(Q)