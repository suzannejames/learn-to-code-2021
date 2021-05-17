#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 int a,b;
 float c;
 char g;
 float p;
 scanf("%d%d%f",&a,&b,&c);
 p=((a+b+c)/300)*100;
 printf("%.2f",p);
 if(p>=90)
 {
     g='A';
 }
 else if (p>=80)
 {
     g='B';
 }
else if (p>=70)
{
    g='C';
}
else if (p>=60)
{  g='D';
}
else if (p>=40)
{ g='E';
}
else if (p<40)
{ g='F';
}
printf("\n%c",g);
    return 0;
}
