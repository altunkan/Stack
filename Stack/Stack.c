#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

struct anilstack *constructStack(int stacksize) {
	struct anilstack *newStack; 
	newStack = (struct anilstack *)malloc(sizeof(struct anilstack));
	if (newStack == NULL) {
		printf("Cannot construct stack! Not enough memory!\n");
		//exit(1);
	}
	newStack->stacksize = stacksize;
	newStack->top = -1;
	newStack->content = (int *)malloc(sizeof(int)*stacksize);
	if (newStack->content == NULL) {
		printf("Cannot construct stack! Not enough memory!\n");
		//exit(1);
	}
	return newStack;
}

void push(struct anilstack *s, int data) {
	if (isFull(s)) {
		printf("Stack is full!\n");
		//exit(EXIT_FAILURE);
	}
	s->content[++s->top] = data;
}

int isFull(struct anilstack *s) {
	if (s->top >= s->stacksize - 1)
		return 1;
	else
		return 0;
}

int isEmpty(struct anilstack *s) {
	if (s->top < 0)
		return 1;
	else
		return 0;
}