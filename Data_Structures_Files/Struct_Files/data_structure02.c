//
// Created by Kocatas on 5/30/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int n, idx = 0, *stack;


void push(char c) {
    stack[++idx] = c;
}

char pop() {

    return stack[idx];
}

void display(){
    for(int i = idx; i > 0; i--){
        printf("%c\n", stack[i]);
    }
}

int main(){

    stack = (char *) malloc(10 * sizeof(char));

    push('a');
    push('b');
    push('c');
    display();
    printf("Popped element is %c\n", pop());
    push('b');
    printf("Popped element is %c\n", pop());
    push('a');
    printf("Popped element is %c\n", pop());
    printf("\n");
    display();

    return 0;


}











































































