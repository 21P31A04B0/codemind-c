#include<stdio.h>
int main()
{
    int N,r,sum=0,temp;
    scanf("%d",&N);
    temp=N;
    while(N>0)
    {
        r=N%10;
        sum=(sum*10)+r;
        N=N/10;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}