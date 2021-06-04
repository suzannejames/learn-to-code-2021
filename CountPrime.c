#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[100],n,prime=0,flag;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
          flag=0;
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
            }
          
        }
        if(flag!=1)
        {
            prime++;
        }
    }
        printf("%d",prime);
    
    return 0;
}
