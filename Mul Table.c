#include <stdio.h>
void print_table(int range, int num)
{
	int mul;
	for (int i = 1; i <= range; i++) {
		mul = num * i;
		printf("%d * %d = %d", num, i, mul);
		printf("\n");
	}
}
int main()
{
	int range = 10;
	int num = 5;
	print_table(range, num);
	return 0;
}
