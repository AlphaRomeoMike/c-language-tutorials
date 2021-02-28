#include <stdio.h>
#include <stdlib.h>

// VARIABLE DECLARATION
extern int a, b, c;
extern float f;

int main(int argc, char *argv[]) {
//	VARIABLE DEFINITION
	int a, b, c;
	float f;
	
//	VARIABLE INITIALIZATION
	a = 10;
	b = 20;	
	c = a + b;
	printf("The number is: %d\n ", c);
	f =	12.5/6.56;
	printf("The number is: %f ", f);
	return 0;
}
