#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m[100],i;
    scanf("%d",&n);
    printf("Entered array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",m[i]);
    }
    printf("\n%d",m[1]);


    return 0;
}
