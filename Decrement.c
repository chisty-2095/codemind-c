// C program to illustrate the decrement operator of both
// types
#include <stdio.h>

void decrement()
{
	int a = 5;
	int b = 5;

	// PREFIX
	int prefix = --a;
	printf("Prefix = %d\n", prefix);

	// POSTFIX
	int postfix = b--;
	printf("Postfix = %d", postfix);
}

// Driver code
int main()
{
	decrement();

	return 0;
}
