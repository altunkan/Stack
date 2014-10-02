#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include "Stack.h"

int main()
{
	struct anilstack *s = constructStack(2);
	printf("Stack Size: %d\n", s->stacksize);
	push(s, 1);
	push(s, 2);
	push(s, 10);
	return 0;
}