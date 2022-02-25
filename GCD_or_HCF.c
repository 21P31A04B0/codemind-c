#include<stdio.h>
int main()
{
    int N,M,i,GCD_Num;
    scanf("%d%d",&N,&M);
    for(i=1;i<=N&&i<=M;++i)
    {
        if(N%i==0&&M%i==0)
        GCD_Num=i;
    }
    printf("%d",GCD_Num);
    return 0;
}