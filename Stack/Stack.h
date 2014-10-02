#ifndef _STACK_H_
#define _STACK_H_

struct anilstack {
	int top;
	int *content;
	int stacksize;
};

struct anilstack *constructStack(int stacksize);
void push(struct anilstack *s, int data);
int isFull(struct anilstack *s);
int isEmpty(struct anilstack *s);


#endif