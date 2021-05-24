#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100], b,c=0,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            c=1;
        
        }
    }
    if(c==1)
    {
    printf("%d is present in this array",b);
    }
    else
    {
        printf("%d is not present in this array",b);
    }
    return 0;
    
}
