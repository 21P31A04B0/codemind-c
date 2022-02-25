#include<stdio.h>
int main()
{
    int N,n1,rev=0,rem;
    //printf("enter any number: ");
    scanf("%d",&N);
    n1=N;
    //logic 
    while(N>0)
    {
        rem=N%10;
        rev=rev*10+rem;
        N=N/10;
    }
    printf("%d",rev);
    return 0;
}