#include <stdio.h>

int main() {
	int foo[1][2][3];  // this one's 3D!

	char vowels[1][5] = {
		{'a', 'e', 'i', 'o', 'u'}
	};

	// having an `x` dimension isn't required; the compiler can figure it out - but it won't know exactly how big the array is
	char vowels_all[][5] = {
		{'A', 'E', 'I', 'O', 'U'},
		{'a', 'e', 'i', 'o', 'u'}
	};


	// these two are equivalent
	int a[3][4] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};

	int b[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};



	// access a value using the x and y values
	int nine = a[2][1];
	printf("%d", nine);
}
