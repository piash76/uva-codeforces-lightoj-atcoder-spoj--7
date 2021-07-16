#include<bits/stdc++.h>
#define ll long long

using namespace std;


///https://www.geeksforgeeks.org/how-is-the-time-complexity-of-sieve-of-eratosthenes-is-nloglogn/



const int N = 100000005;
const int SZ = 5761455 + 3;
///const int SZ=6000000;
///const int SZ=1e6;
bool isprime[N+5];
ll prime[SZ+5],tot;
//bitset<N> isprime;




void sieve()
{

    ll sq=sqrt(N);
    isprime[2]=0; //as 0 indicates prime
    for(ll i=4;i<=N;i+=2) isprime[i]=1; ///o(n)
    for(ll i=3;i<=sq;i+=2) ///O(nlog(log(n)));
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i;j<=N;j+=i)isprime[j]=1;
        }
    }

   // ll j=0;
    for(ll i=2;i<=N;i++)
    {
        if(isprime[i]==0)
        {
            prime[tot]=i;
            tot++;
        }
    }
  /*  cout<<j<<endl; ///86537

    for(ll i=0;i<j;i++)
    {
        cout<<prime[i]<<endl;
    }*/


}
const int N = 1e7 + 5;
//const int SZ = 5761455 + 3;
const int SZ=1e6;


const int N = 1e8 + 3;
const int SZ = 5761455 + 3;

bitset<N> isprime;
//bool status[MAXN];
int prime[SZ];
unsigned  cum[SZ];

ll primecnt = 0;

void sieve()
{
    ll sq=sqrt(N);

    isprime[2]=false; //as 0 indicates prime
    for(ll i=4;i<=N;i+=2) isprime[i]=true;

    for(ll i = 3; i < sq; i+=2)
        if(!isprime[i])
            for(ll j = i*i; j <N; j+=(i<<1))
                isprime[j] = true;

    prime[primecnt++] = 2;

    for(ll i = 3; i <N; i+=2)
        if(!isprime[i])

}

vector<ll> v;
void gen_prime_factor(ll num)
{
    if(isprime[num]==0) v.push_back(num);
    for(ll i=2;i*i<=(num);i++)
    {
        if(num%i==0)
        {
            if(isprime[i]==0) v.push_back(i);
            if(isprime[num/i]==0 and num/i!=i) v.push_back(num/i);
        }
    }
}

vector<ll> v1;
void gen_factor(ll num)
{

    for(ll i=2;i*i<=(num);i++)
    {
        if(num%i==0)
        {
             v1.push_back(i);
            if(num/i!=i) v1.push_back(num/i);
        }
    }
}



const int N = 1e7 + 5;
//const int SZ = 5761455 + 3;

const int SZ=1e6;

bitset<N+5> isprime;
//bool isprime[N+5];

int prime[SZ+5];


ll primecnt = 0;

int main()
{

   ll i,j,f,n,t;
   sieve();

}
