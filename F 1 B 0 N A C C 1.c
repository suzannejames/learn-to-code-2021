#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a=0,b=1,c;
    c=a+b;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=2;i<n;++i)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
