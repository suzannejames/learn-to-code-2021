#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()                                        //main function
{
    int a,score=0;
    char ch1,ch2,ch3;
    char ans[20],ans1[]="transponster";
    
    printf("The Sitcom Quiz\n");
    for(int i=0;i<4;i++)                         //to display menu after completion of each quiz
    {
    printf("\n\nChoose the quiz you want to attend\n\n1.F.R.I.E.N.D.S\n2.Brooklyn 99\n3.The Office\n4.Exit");   //display menu 
    scanf("%d",&a);
    switch(a)                                   // displays questions for quiz according to the choice given by user
    {
        case 1: 
            printf("\nF.R.I.E.N.D.S");
            printf("\n\n1.How many times did Ross get divorced?\na.Two\t\t\tb.Three");
            scanf("%s",&ch1);
            if(ch1=='b')
            {
                printf("\nCORRECT!");
                score+=10;                                 //calculates total score 
            }
            else
            {
                printf("\nWRONG!");
            }
            printf("\nTotal Score=%d",score);
            printf("\n\n2. Who was the maid of honor at Monica's wedding?\na.Rachel\t\t\tb.Pheobe");
            scanf("%s",&ch2);
            if(ch2=='a')
            {
                printf("\nCORRECT!");
                score+=10;
            }
            else
            {
            printf("\nWRONG!");
            }
            printf("\nTotal Score=%d",score);
            printf("\n\n3. What does Rachel guess Chandlers job is?\n Type in your answer:");
            scanf("%s",ans);
            if(strcmp(ans,ans1)==0)
            {
                printf("\nCORRECT!");
                score+=10;
                
            }
            else
            {
            printf("\nWRONG!");
                
            }
            printf("\n\nEnd of F.R.I.E.N.D.S Quiz!\nTotal score=%d/30",score);
            break;
            
    case 2: 
    score=0;
    printf("\n\nBrooklyn 99\n\n1.Where did Terry once live while pursuing his college education?\na.China\t\t\tb.Japan\t\t\tc.Russia");
    scanf("%s",&ch1);
    if(ch1=='b')
    {
        printf("\nCORRECT!");
        score+=10;
    }
    else
    {
        printf("\nWRONG!");
        
    }
    printf("\nTotal Score=%d",score);
    printf("\n\n2.Which member of the prqecinct had their car stolen?\na.Terry\t\t\tb.Amy\t\t\tc.Raymond\t\t\td.Jake");
    scanf("%s",&ch2);
    if(ch2=='c')
    {
        printf("\nCORRECT!");
        score+=10;
        
    }
    else
    {
        printf("\nWRONG!");
        
    }
    printf("\nTotal Score=%d",score);
    printf("\n\n3.What type of business did Charles have in season five?\na.a restaurant\t\t\tb.a food truck\t\t\tc.a convenience store");
    scanf("%s",&ch3);
    if(ch3=='b')
    {
        printf("\nCORRECT!");
        score+=10;
        
    }
    else
    {
    printf("\nWRONG!");
        
    }
    printf("\n\nEnd of Brooklyn 99 Quiz!\nTotal Score=%d/30",score);
    break;
    
case 3: 
score=0;
printf("\n\nThe Office\n\n1.What is Jan's candle brand called?\na.Scents by Jan\t\t\tb.Scent Serenity\t\t\tc.Serenity by Jan");
scanf("%s",&ch1);
if(ch1=='c')
{
    printf("\nCORRECT!");
    score+=10;
    
}
else
{
    printf("\nWRONG!");
}
printf("\nTotal Score=%d",score);
printf("\n\n2.What is Jim's costume in the first ever halloween?\na.Popeye\t\t\tb.Three hole punched Jim\t\t\tc.Dave");
scanf("%s",&ch2);
if(ch2=='b')
{
    printf("\nCORRECT!");
    score+=10;
    
}
else
{
    printf("\nWRONG!");
    
}
printf("\nTotal Score=%d",score);
printf("\n\n3.What does Michael use to make a cast after he burns his foot on his George Foreman Grill?\na.Cardboard\t\t\tb.PVC pipe\t\t\tc.Sponge\t\t\td.Bubble wrap");
scanf("%s",&ch3);
if(ch3=='d')
{
    printf("\nCORRECT!");
    score+=10;
}
else
{
    printf("\nWRONG!");
    
}
printf("\n\nEnd of The Office Quiz!");
printf("\nTotal Score=%d/30",score);
break;

case 4: exit(0);     //to exit the program 
break;

}
}
    
    return 0;
}


