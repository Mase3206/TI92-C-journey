#include <stdio.h>

void addone_nowork(int *n) {
	// n is a local variable which only exists within the function scope
	(*n)++;  // therefore incrementing it has no effect
}

int main() {
	int n;
	printf("Before: %d\n", n);
	addone_nowork(&n);
	printf("After: %d\n", n);
	return 0;
}