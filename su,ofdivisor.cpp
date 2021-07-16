#include<bits/stdc++.h>
#define n 1000000
using namespace std;

bool isprime[1000000];
long long prime[1000000],j;

int sieve()
{

    long long sq=sqrt(n);
    isprime[2]=0; //as 0 indicates prime
    for(long long i=4;i<=n;i+=2) isprime[i]=1;
    for(long long i=3;i<=sq;i+=2)
    {
        if(isprime[i]==0)
        {
            for(long long j=i*i;j<=n;j+=i)isprime[j]=1;
        }
    }

    long long j=0;
    for(long long i=2;i<=n;i++)
    {
        if(isprime[i]==0)
        {
            prime[j]=i;
            j++;
        }
    }

    /*for(long long i=0;i<j;i++)
    {
        cout<<prime[i]<<endl;
    }*/



}

int Sum_Divisor(int  a)
{
int i,val,sum,p,s;
val=sqrt(a)+1;
sum=1;
for(i=0;prime[i]<val;i++)
{
if(a%prime[i]==0)
{
p=1;
while(a%prime[i]==0)
{
a/=prime[i];
p=p*prime[i];
}
p=p*prime[i];
s=(p-1)/(prime[i]-1);
sum=sum*s;
}
}

if(a>1)
{
p=a*a;
s=(p-1)/(a-1);
sum=sum*s;
}
return sum;

}

int main()
{
    sieve();
    long long x,i,t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        cout<<Sum_Divisor(x)<<endl;

    }
}

