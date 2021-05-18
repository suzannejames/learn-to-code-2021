#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int ch,a;
   float b,t;
    scanf("%d%d%f",&ch,&a,&b);
   int ans;
   printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
   switch(ch)
   {
       case 1: ans=(a+b);
       printf("\n%d",ans);
       break;
       case 2: ans=(a-b);
       printf("\n%d",ans);
       break;
       case 3: ans=(a*b);
       printf("\n%d",ans);
       break;
       case 4: if(b==0)
       printf("\nCannot be determined");
       else 
       {t=a/b;
       printf("\n%.1f",t);}
       break;
   }
   return 0;
}
