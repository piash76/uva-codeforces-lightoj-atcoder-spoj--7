#include<stdio.h>
int main()
{
    int n,sum=0,fact,r,i,temp;
    printf("enter no");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        fact=1;
        for(i=1;i<=r;r++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(n==sum)
    {
        printf("strong");

    }
    else
    {
        printf("not strong");
    }

}

