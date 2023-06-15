//
// Created by Administrador on 14/6/2023.
//

#include "Pila.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(int num) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Error de asignacion de memoria\n");
        exit (-1);
    }
    aux->num = num;
    aux->next = NULL;
    return aux;
}

Stack *newStack() {
    Stack * aux = NULL;
    aux = malloc(sizeof(Stack));
    if(aux == NULL){
        printf("Erroror\n");
        exit (-1);
    }
    aux->top = NULL;
    return aux;
}

void push(Stack *stack, Node *nodeToStack) {
    if(stack->top == NULL){ //Stack is empty
        stack->top = nodeToStack;
    }else{ //Stack not empty
        nodeToStack->next = stack->top;
        stack->top = nodeToStack;
    }
}

void printear(Stack *stack) {
    Node * aux = stack->top;
    while(aux != NULL){
        printf("%d\n", aux->num);
        aux = aux->next;
    }
}

void pop(Stack *stack) {
    Node * aux = stack->top;
    stack->top = stack->top->next;
    free(aux);
 
}
