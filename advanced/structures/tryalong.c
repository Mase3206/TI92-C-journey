#include <stdio.h>


// initial function declarations

void drawthis() {
	struct point {
		int x;
		int y;
	};

	struct point p;
	p.x = 10;
	p.y = 5;

	// draw(p);
}


int main() {
	drawthis();

	return 0;
}