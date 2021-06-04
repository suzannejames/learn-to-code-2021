#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int v,c,s;
    c=v=s=0;
    char a[200];
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            v++;
        }
        else if(a[i]==' ')
        {
            s++;
        }
        else 
        {
            c++;
        }
    }
    printf("%d\n%d\n%d",v,c,s);
    return 0;
}
