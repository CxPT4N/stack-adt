#ifndef STACKADT_LL_H
#define STACKADT_LL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
char elem;
struct node* link;
} *Stack;

void pop(Stack* S);
void push(Stack* S, char x);
char top(Stack *S);
int isEmpty(Stack* S);
int isFull(Stack* S);
void insertBottom1(Stack *S, char x);
void insertBottom2(Stack *S, char x);

void pop(Stack *S){
    if(!isEmpty(S)){
        Stack temp = *S;
        *S = (temp)->link;
        free(temp);
    }
}

void push(Stack *S, char x){
    Stack temp = (struct node*)malloc(sizeof(struct node));
    if (temp != NULL){
        temp->elem = x;
        temp->link = *S;
        *S = temp;
    }
    
}

char top(Stack *S){
    if(!isEmpty(S)){
        return (*S)->elem;
    }
    printf("\nStack is Empty!\n");
}

int isEmpty(Stack *S){
    return (*S == NULL)?1:0; //1 if true, 0 if false
}

int isFull(Stack *S){
    
}
 
// Recursively insert an element at the bottom of a stack
void insertBottom1(Stack *S, char x){
    if(*S != NULL){
        char temp = top(S);
        pop(S);
        insertBottom1(S, x);
        push(S, temp);
    }
    else{
        push(S, x);
    }
}

void insertBottom2(Stack *S, char x){
    Stack temp  =  NULL;
    while(!isEmpty(S)){
        char val = top(S);
        pop(S);
        push(&temp, val);
    }
    push(S, x);
    while(!isEmpty(&temp)){
        char val = top(&temp);
        pop(&temp);
        push(S, val);
    }
}

#endif