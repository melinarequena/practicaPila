//
// Created by Administrador on 14/6/2023.
//

#ifndef PRACTICAPILA_PILA_H
#define PRACTICAPILA_PILA_H

typedef struct node{
    int num;
    struct node * next;
}Node;

typedef struct stack{
    Node * top;
}Stack;

Node * newNode (int num);
Stack * newStack ();

void push(Stack * stack, Node * nodeToStack);
void pop(Stack * stack);
void printear(Stack * stack);


#endif //PRACTICAPILA_PILA_H
