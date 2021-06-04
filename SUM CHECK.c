#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void reverse (int a,int b)
{
    int sum,c,i;
    int rev,n=0,d;
    rev=0;
    sum=a+b;
    if(sum%2==0)
    {
        d=sum;
        while(sum!= 0)
    {
        c = sum%10;
        rev = rev*10 + c;
        sum /= 10;
    }
        printf("%d\n%d",d,rev);
    }
    else
        { 
            for(i=2;i<=(sum/2);i++)
            {
                if(sum%i==0)
                {
                    
                    n=1;
                }
                
                
            }
            if(n==0)
            {
                 printf("%d\nPrime",sum);
            }
        else 
        {
           printf("%d\nNot prime",sum);
        }
            
        }
    
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    reverse(a,b);
    return 0;

}
