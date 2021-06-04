#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a[100], n,min,max; 
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     min=a[0];
        max=a[0];
    for(int i=0;i<n;i++)
    {
       
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("%d\n%d",min,max);
            return 0;
}
