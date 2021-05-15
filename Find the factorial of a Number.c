#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n;
    int f=1;
    scanf("%d",&n);
    if(n==0)
        printf("%d",f);
    else if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            f=i*f;
        }
        printf("%d",f);
    }

    else 
    {
        printf("ERROR");
    }
     
    return 0;
}