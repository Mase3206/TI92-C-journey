#include <stdio.h>
#include <string.h>


void static_string() {
	// this is static
	char * name = "John Smith";
}

void mut_string() {
	// this is mutable
	char name1[] = "John Smith";
	char name2[11] = "John Smith";  // this is equivalent
	// array must be strlen + 1 to allow for special "end of string" character
}

void string_formatting() {
	char * name = "John Smith";
	int age = 27;

	// prints out "John Smith is 27 years old"
	printf("%s is %d years old.\n", name, age);
}

void string_length() {
	char * name = "Nikhil";
	int length = strlen(name);
	printf("%d\n", length);
}

void string_comparison() {
	char * name = "John";

	if (strncmp(name, "John", 4) == 0) {
		printf("Hello, John!\n");
	} else {
		printf("You are not John. Go away.\n");
	}
}

void string_concatenation() {
	char dest[20] = "Hello";
	char src[20] = "World";

	strncat(dest, src, 3);
	printf("%s\n", dest);

	strncat(dest, src, 20);
	printf("%s\n", dest);
}


int main() {
	static_string();
	mut_string();
	string_formatting();
	string_length();
	string_comparison();
	string_concatenation();

	return 0;	
}