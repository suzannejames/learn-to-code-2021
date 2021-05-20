#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c=0;
    int num;
    scanf("%d",&num);
    a=num;
     while ( a> 0)
     {
      b= a%10;
      c = ((c *10)+ b);
      a = a/10;
   }
   if(c==num)
       printf("Yes");
   else
   printf("No");
    return 0;
}
