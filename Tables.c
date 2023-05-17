#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d%d",&j,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        printf("%d x %d = %d
",j,i,j*i);
    }
}