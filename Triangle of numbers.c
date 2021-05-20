#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
   int a;
    scanf("%d",&a);
   for(int i=a;i>=1;i--)
   {
       for(int k=a-1;k>=i;k--)
           printf(" ");
       for(int j=1;j<=i;j++)
       {
           printf("%d",i);
          
       }
      
       
       printf("\n");
   }
       return 0;
   }
   
