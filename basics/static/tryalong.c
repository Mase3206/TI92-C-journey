#include <stdio.h>
int runner() {
	// this initializes the variable as 0 *only during the first run*
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d \n", runner());
    printf("%d \n", runner());
    return 0;
}