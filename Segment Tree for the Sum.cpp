///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>

#define ll                      long long

//Constants
const int MOD = 1000000007; // 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;
const int maxn = 211111;
const int N = 1111111;

using namespace std;

//from a loser
ll a[maxn];
ll tree[4*maxn+100];

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

   tree[node]=min(tree[left],tree[right]);
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return INF; ///out of range

    if (b >= i && e <= j) return tree[node]; ///correct range  ///i --b--e--j
    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    ll x=query(left,b,mid,i,j);
    ll y=query(right,mid+1,e,i,j);

    return min(x,y);

}

void update(ll node,ll b,ll e,ll i,ll value)
{
    if(i>e or i<b) return; ///out of range
    if(b>=i and e<=i)     ///correct range  or overlapping range b==i and e===i
    {
        tree[node]=value;
        return;
    }

    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);

    tree[node]=min(tree[left],tree[right]);


}

ll cnt;
ll query1(ll node,ll b,ll e,ll i,ll j,ll val)
{
    if(i>e || j<b) return 0; ///out of range

    if(b==e)
    {
        if(tree[node]==val) cnt++;
        return cnt;
    }
    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    ll x=query1(left,b,mid,i,j,val);
    ll y=query1(right,mid+1,e,i,j,val);

    return x+y;


}



int main()
{
    flash()
    ll n,q;

    //cin>>n>>q;
    sc2l(n,q);
    f2(i,1,n) sc1l(a[i]);

    build(1,1,n);

    while(q--)
    {
        ll x,u,v;
        //cin>>x>>u>>v;
        sc3l(x,u,v);
        if(x==1)
        {
            u++;
            update(1,1,n,u,v);
        }
        else if(x==2)
        {
            cnt=0;
            u++,v++;
            ll val=query(1,1,n,u,v-1);
            query1(1,1,n,u,v-1,val);
            printf("%lld %lld\n",val,cnt);
            //cout<<val<<" "<<cnt<<endl;
        }
    }




    see_you;
}



