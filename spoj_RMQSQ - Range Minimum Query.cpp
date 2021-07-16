///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>

using namespace std;

#define ll long long


///https://www.youtube.com/watch?v=o7278rPg_9I&list=PL2q4fbVm1Ik7Ds5cuaoOmExjOQG31kM-p&index=1

///https://www.geeksforgeeks.org/sqrt-square-root-decomposition-technique-set-1-introduction/

const int maxn = 211111;  ///2e5

//ll maxn2=sqrtl(maxn);

ll a[maxn],block[maxn];
ll n;  ///input array size
ll block_size; ///size of each block



///dividing the array by sqrt(n) blocks of each block size sqrt(n)
///time complexity O(N)
void build()
{
    for(ll i=0;i<n;i++)
    {
        ll idx=i/block_size;
        block[idx]=min(block[idx],a[i]);
    }
}


///3*sqrt(n)==sqrt(n)
ll query(ll l,ll r)
{
    ll lb=l/block_size;
    ll rb=r/block_size;

    ll mn=1e18;

    if(lb==rb)
    {
        for(ll i=l;i<=r;i++)
        {
            mn=min(mn,a[i]);
        }
    }
    else
    {


    for(ll i=l;i<(lb+1)*block_size;i++) mn=min(mn,a[i]);  ///sqrt(n)

    for(ll i=lb+1;i<rb;i++) mn=min(mn,block[i]); ///sqrt(n)

    for(ll i=rb*block_size;i<=r;i++) mn=min(mn,a[i]);   ///sqrt(n)

    }

    return mn;
}


void update(ll idx,ll val)
{
    ll block_idx=idx/block_size;  ///which block
    block[block_idx]=min(val,block[block_idx]);
    a[idx]=val;

}





int main()
{
    ll i,j,k;

    scanf("%lld",&n);
    for(i=0;i<n;i++) scanf("%lld",&a[i]);

    block_size=sqrt(n);

    for(i=0;i<=block_size+10;i++) block[i]=1e18;

    build();

    ll q;
    scanf("%lld",&q);
    while(q--)
    {
        ll l,r;scanf("%lld %lld",&l,&r);

        ll ans=query(l,r);
        printf("%lld\n",ans);
    }

    return 0;
}
