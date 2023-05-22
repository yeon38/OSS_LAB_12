#include "mylib.h"

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;

}
void add(int* a, int* b) {
	int* c = 0;
	*c = *a + *b;
}
void subtract(int* a, int* b) {
	int* c = 0;
	*c = *a - *b;
}

