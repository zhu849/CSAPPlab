#include <stdio.h>
/* This method use to check pointer content with the GET and PUT macro. */
void main() {
	int tmp = 5;
	int *p = &tmp;
	
	printf("pointer address: %x\n", p);
	printf("type transform: %x\n", (unsigned int *)(p));
	printf("get point address content: %x\n", *(unsigned int *)(p));
	return;
}