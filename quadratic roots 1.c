#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b;
    float c;
    scanf("%f%f%f",&a,&b,&c);
    float r1,r2;
    int d;
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Distinct Real : %.2f , %.2f",r1,r2);
    }
    else 
    if(d==0)
    {
        r1=(-b/(2*a));
        r2=(-b/(2*a));
        printf("Equal Real: %.2f , %.2f",r1,r2);
    }
    else if (d<0)
    {
        r1=(-b/(2*a));
        r2= sqrt(-d)/(2*a);
        printf("Complex: %.2f + i%.2f , %.2f - i%.2f",r1,r2,r1,r2);
    }
    return 0;
}
