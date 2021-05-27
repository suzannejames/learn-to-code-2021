#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a[100][100],b[100][100],m,n,prod[100][100];
    int p,q;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    scanf("%d%d",&p,&q);
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
    if (n==p)
    {
       for(int i=0;i<m;i++)    
       {    
          for(int j=0;j<q;j++)    
          {        
              prod[i][j]=0;
              for(int k=0;k<p;k++)    
              {  
                  prod[i][j]=prod[i][j]+(a[i][k]*b[k][j]);    
              }    
          }    
       }   
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
                printf("%d ",prod[i][j]);
            printf("\n");
        } 
    }
    else 
    printf("ERROR");
    return 0;
}
