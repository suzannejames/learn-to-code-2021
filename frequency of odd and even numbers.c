#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a[100], size,ce=0,co=0;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            ce=ce+1;
        }
        else 
        {
            co=co+1;
        }
    }
    printf("%d\n%d",ce,co);
    return 0;
}
