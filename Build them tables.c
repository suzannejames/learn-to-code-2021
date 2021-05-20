#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,ch,prod;
    do
    {
    printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
    scanf("%d",&ch);
    
   if(ch==1) 
   {for(i=1;i<=10;++i)
        {
            prod=1*i;
            printf("%d ",prod);
        }
   }
        
      else  if (ch==2)
        {
            i=1;
        do
        { 
         prod=2*i;
         printf("%d ",prod);
         ++i;
        }
        while (i <= 10);
        }
        
        else if(ch==3)
        {
            for(i=1;i<=10;++i)
        {
            prod=3*i;
            printf("%d ",prod);
        }
        }
        
        else if(ch==4)
        {
            for(i=1;i<=10;++i)
        {
            prod=4*i;
            printf("%d ",prod);
        }
        
        }
        else if(ch==5)
        {
            for(i=1;i<=10;++i)
        {
            prod=5*i;
            printf("%d ",prod);
        }
        }
         else if(ch==6)
             exit(0);
    else
    printf("Enter a valid option!");
    }
    while(1);
    return 0;
        
}
