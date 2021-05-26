#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a[100], ch;
    int count;
        gets(a);
    scanf("%c",&ch);
    for(int i=0;a[i]!='\0';i++)
    {
        if(ch==a[i])
           count=count+1;
    }
    printf("%d",count);
    return 0;
}
