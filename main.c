#include <stdio.h>
#include "mylib.h"

int main (void) {
	int a = 3; 
	int b = 5;
	printf("(initial) a = %d , b = %d/n" , a, b);
	swap(&a , &b);
	printf("(swapped) a = %d, b = %d\n" , a ,b);
	add(&a ,&b);
	printf("(added) a + b = %d + %d = %d\n" , a, b);
	subtract(&a, &b);
	printf("(subtracted) a - b = %d - %d = %d\n", a, b);
	return 0;

} 
