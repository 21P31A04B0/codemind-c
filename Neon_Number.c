#include<stdio.h>
int main()
{
    int N,d,s=0,sq;
    scanf("%d",&N);
    sq=N*N;
    while(sq!=0)
    {
        d=sq%10;
        s+=d;
        sq=sq/10;
    }
    if(s==N)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}