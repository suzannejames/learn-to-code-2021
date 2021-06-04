#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int a,int b)
{
    int c;
    printf("a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\na=%d b=%d",a,b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
