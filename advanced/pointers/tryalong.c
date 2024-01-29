#include <stdio.h>


// initial function declarations
void int_pointer() {
	// define local variable a
	int a = 1;

	// define a pointer variable and point to it using the `&` operator
	int * pointer_to_a = &a;

	printf("The value of `a` is %d\n", a);
	printf("The value of the dereferenced pointer to a is also %d\n", *pointer_to_a);

	// now change the value of a (*pointer_to_a)
	a += 1;
	printf("The value of `a` is now %d\n", a);

	*pointer_to_a += 1;
	printf("The value of the dereferenced pointer to a is now %d\n", *pointer_to_a);
}



int main() {
	int_pointer();


	return 0;
}