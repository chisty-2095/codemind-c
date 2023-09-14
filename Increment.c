#include <stdio.h>
void increment()
{
	int a = 5;
	int b = 5;
	int prefix = ++a;
	printf("Prefix Increment: %d\n", prefix);
	int postfix = b++;
	printf("Postfix Increment: %d", postfix);
}


int main()
{
	increment();
	return 0;
}
