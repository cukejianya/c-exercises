#include <stdio.h>

int main() {
	int *p;
	
	*p = 200; // This is wrong. P is not pointing to anything

	printf("The value is %d\n", *p);

	return 0;
}
