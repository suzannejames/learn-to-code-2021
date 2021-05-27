#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int a[100][100], m,n,s;
    int count=0;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&s);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==s)
            { 
                count=1;
            printf("Element found at (%d,%d)\n",i,j);
            }
        }
    }    
    if(count!=1)
        printf("Element not found");
    return 0;
}
