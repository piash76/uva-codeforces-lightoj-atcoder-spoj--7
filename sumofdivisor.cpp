#include<bits/stdc++.h>

using namespace std;
const long long n = 111111111;
#define ll long long
bool isprime[n];
long long prime[n],j;

void sieve()
{

   // long long sq=sqrt(n);
    isprime[2]=0; //as 0 indicates prime
    for(long long i=4;i<=n;i+=2) isprime[i]=1;
    for(long long i=3;i*i<=n;i+=2)
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


long long  sumofdivisor(long long n)
{
    ll sum=1;
    for(long long i=0;prime[i]<=sqrt(n);i++)
    {

        if(n%prime[i]==0)
        {
            long long p=1,temp=1;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                p*=prime[i];
                temp+=p;
            }
            sum*=temp;
        }
    }
    if(n!=1)
    {
      sum*=(1+n);
    }


   return sum;

}

/*long long  sumofdivisor(long long a) ///this can give overflow for big numbers
{
    long long sum=1,c,i,sq,s;
    //sq=sqrt(a)+1;  //whenever a is not square rootable
    for(i=0;i<j  and prime[i]*prime[i]<=a;i++)
    {
        if(a%prime[i]==0)
        {
            c=1;
            while(a%prime[i]==0)
            {

                a=a/prime[i];
                c=c*prime[i];
            }
             c=c*prime[i];
             s=(c-1)/(prime[i]-1);
             sum=sum*s;
        }
    }

    if(a>1)
    {
       c=a*a;
       s=(c-1)/(a-1);
       sum=sum*s;

    }

    return sum;
}*/


/*ll sumofdivisor1(ll n)
{
    ll i,ans=0;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i==n/i) ans+=i;
            else ans+=(i+n/i);
        }
    }
    return ans;
}*/
int main()
{
    sieve();
    long long x,i,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
         scanf("%lld",&x);
         printf("%lld\n",sumofdivisor(x)-x);
    }
}

/*

1
9652112269035737

*/
https://www.youtube.com/watch?v=S7ixgyOUIrI&t=850s

