#include<stdio.h>
int main()
{
    float f,cv;
    scanf("%f",&f);
    cv=(f-32)/1.8;
    printf("%.2f",cv);
    return 0;
}