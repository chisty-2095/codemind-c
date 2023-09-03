#include<stdio.h>
int fun(int n) { // n=0
    if (n == 0) return 0; // 0==0
    return 2+3+fun(n-2);  //15
}
int main() {
	int n;
	scanf("%d",&n); //6
	int res = fun(n);
	printf("%d",res);
}
