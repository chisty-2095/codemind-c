#include<stdio.h>
void itc(int h)
{
    float b;
    b=2.54*h;
    printf("%0.2f",b);
}
    int main()
    {
        int h;
        scanf("%d",&h);
        itc(h);
    }