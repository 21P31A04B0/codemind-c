#include<stdio.h>
int main()
{
    int N,reminder,Largest=0;
    //printf("enter the number: ");
    scanf("%d",&N);
    while(N>0)
    {
        reminder=N%10;
        if(Largest<reminder)
        {
            Largest=reminder;
        }
        N=N/10;
}
printf("%d",Largest);
return 0;
}