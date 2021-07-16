#include<stdio.h>
int main()
{
    int n,temp,sum=0,r;
    printf("enter no");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("sum is %d",sum);

}
