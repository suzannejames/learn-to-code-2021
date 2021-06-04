#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int a;
    scanf("%d",&a);
    if(a<1)
    {
        printf("ERROR");
    }
    else
    {
   for(int i=1;i<=a;i++)
   {
       for(int j=1;j<=i;j++)
       {
           printf("%d ",j);
       }
       printf("\n");
   }
    }
    return 0;
}
