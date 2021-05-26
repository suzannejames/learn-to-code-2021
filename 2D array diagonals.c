#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100][100], m, n;
    scanf("%d%d",&m,&n);
    if (m!=n)
    {
        printf("ERROR");
    }
    else 
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;++j)
                scanf("%d",&a[i][j]);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    printf("%d ",a[i][j]);
            }
            
        }
        printf("\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;++j)
            {
                
                if((i+j)==n-1)
                    printf("%d ",a[i][j]);
            }
        }
    }
        
        return 0;
}
