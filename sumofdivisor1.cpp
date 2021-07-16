#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int num=i;
        long long ans=0;
       // scanf("%d",&num);
        if(num==1)
            printf("1\n");
        else
        {
            int i,t=sqrt(num);
            for(i=2;i<=t;i++)
            {
                if(num%i==0)
                {
                    if(i==num/i)
                        ans+=i;
                    else
                        ans+=i+num/i;
                }
            }
            ans++;
            printf("%lld\n",ans);
        }
    }
    return 0;
}

///https://codeforces.com/contest/1512/problem/G
///For a given number c, find the minimum n such that d(n)=c.

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1

const int N=1e7+1;


ll sod[N],ans[N];

void fun()
{
    ///nlogn
    for(ll i=1;i<N;i++)
    {
        for(ll j=i;j<N;j+=i)
        {
            sod[j]+=i;
        }

    }
}



int main()
{
    fun();

    for(ll i=1;i<N;i++)
    {
        if(sod[i]<N and ans[sod[i]]==0)
        {
            ans[sod[i]]=i;
        }

    }



    ll t,i,j;
    scanf("%lld",&t);
    while(t--)
    {
        ll sum;scanf("%lld",&sum);

        ll s=ans[sum];

        if(s==0) printf("-1\n");
        else printf("%lld\n",s);




    }

    return 0;

}





