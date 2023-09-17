// C++ to demonstrate %n in scanf()
#include <stdio.h>

// Driver Code
int main()
{
	int check;
	int a, b;

	// Input two variables
	scanf("%d%d%n", &a, &b, &check);

	// Print value of a, b, and check
	printf("%d\n%d\n%d", a, b, check);
	return 0;
}
