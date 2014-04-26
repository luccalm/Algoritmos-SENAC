#include <stdio.h>

int main() {

	int a = 5, b = 2;
	float c;

	printf("%d", (float) a);
	c =  (float) a / b;

	printf("%d", a);
	printf("%0.2f", c);

	return 0;
}