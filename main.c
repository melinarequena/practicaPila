#include <stdio.h>
#include "Pila.h"

int main() {
   Stack * stack = newStack ();
    push(stack, newNode(1));
    push(stack, newNode(2));
    push(stack, newNode(3));
    push(stack, newNode(4));
    push(stack, newNode(5));

    printear(stack);

    pop(stack);
    pop(stack);

    push(stack, newNode(10));

    printear(stack);



}
