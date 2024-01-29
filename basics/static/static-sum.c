#include <stdio.h>


// initial function declarations

static int add(int number) {
	static int sum = 0;
	sum = sum + number;
	return sum;
}


int main() {
	printf("%d ", add(55));
	printf("%d ", add(45));
	printf("%d ", add(50));

	return 0;
}