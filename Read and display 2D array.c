#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int a[100][100],m,n;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    { 
        for (int j=0;j<m;++j)
            scanf("%d",&a[i][j]);
    } 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;++j)
        {   
            printf("%d ",a[i][j]);
        }
     printf("\n");
    }  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
