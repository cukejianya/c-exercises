#include <stdio.h>

int main() {
	int x = 20;
	int *p = &x;
	
	printf("Value of x is: %d\n", x);
	printf("Size if integer: %ld\n", sizeof(x));
	printf("Value of x via pointer is: %d\n", *p);
	printf("Size of pointer variable is: %ld\n", sizeof(p));
	printf("Pointer value is: %p\n", (void *)p);

	return 0;
}
