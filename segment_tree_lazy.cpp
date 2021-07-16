///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>

#define ll                      long long

const int MOD = 1000000007; // 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;


const int maxn = 200009;

using namespace std;

///https://www.youtube.com/watch?v=REX-rVnnHBY
///https://www.youtube.com/watch?v=wQSnKUs93DU

ll a[maxn],tree[4*maxn],lazy[4*maxn],b[maxn];



void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=a[b];
        return;
    }
    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);

    //tree[node]=min(tree[left],tree[right]);
    tree[node]=__gcd(tree[left],tree[right]);
}



void update(ll node,ll b,ll e,ll i,ll j, ll val)
{

    if(lazy[node]!=0)
    {
        ll lz=lazy[node];
        tree[node]+=lz*(e-b+1);   ///for sqr sum this will be (e-b+1)*lz + 2*lz+(sum of tree[node])
        lazy[node]=0;

        if(b!=e)
        {
            lazy[2*node]+=lz;
            lazy[2*node+1]+=lz;
        }

    }


    /// no overlap
    if (i > e || j < b)  return;

    ///total overlap

    if (b >= i && e <= j)
    {
        tree[node]+=val*(e-b+1);

        if(b!=e)
        {
            lazy[2*node]+=val;
            lazy[2*node+1]+=val;
        }


        return;
    }

    ///partial overlap

    ll left = node * 2;
    ll right = (node * 2) + 1;
    ll mid = (b + e) / 2;
    update(left, b, mid, i, j, val);
    update(right, mid + 1, e, i, j, val);

    //tree[node]=min( tree[left], tree[right] );
    tree[node]=__gcd(tree[left],tree[right]);
}

ll query(ll node,ll b,ll e,ll i,ll j)
{


    if(lazy[node]!=0)
    {
        ll lz=lazy[node];
        tree[node]+=lz*(e-b+1);
        lazy[node]=0;

        if(b!=e)
        {
            lazy[2*node]+=lz;
            lazy[2*node+1]+=lz;
        }


    }

    /// no overlap
    //if (i > e || j < b)  return inf;
    if (i > e || j < b)  return 0;

    ///total overlap

    if (b >= i && e <= j)
    {

        return tree[node];
    }

    ///partial overlap

    ll left = node * 2;
    ll right = (node * 2) + 1;
    ll mid = (b + e) / 2;

    ll x = query(left, b, mid, i, j);
    ll y = query(right, mid + 1, e, i, j);

    //return min(x,y);
    return __gcd(x,y);
}

int main()
{


ll i,j;

    ll n,m;scanf("%lld %lld",&n,&m);

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&b[i]);
    }


        build(1,1,n);


        for(i=1;i<=n;i++)
        {
            ll val=b[i];
            update(1,1,n,1,n,val);
            ll ans=query(1,1,n,1,n);

            printf("%lld\n",ans);
        }






}
