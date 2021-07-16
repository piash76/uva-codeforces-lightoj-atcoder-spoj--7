///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>


#define ll long long
#define sqr(x)           (x)*(x)

const int maxn = 100005;  ///1e5

using namespace std;


struct seg
{
    ll sum,sqrsum,lazy1,lazy2;   ///lazy1 for range update ,and lazy2 for all set to val update
};


ll a[maxn];
seg tree[4*maxn];

void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node].sum=a[b];
        tree[node].sqrsum=sqr(a[b]);
        tree[node].lazy1=0;
        tree[node].lazy2=0;

        return;
    }
    ll mid=(b+e)/2;
    ll left=2*node;
    ll right=(2*node)+1;

    build(left,b,mid);
    build(right,mid+1,e);

    tree[node].sum=tree[left].sum+tree[right].sum;
    tree[node].sqrsum=tree[left].sqrsum+tree[right].sqrsum;
    tree[node].lazy1=0;
    tree[node].lazy2=0;
}


/*void propagate(ll node,ll b,ll e)
{

}*/

void update(ll node,ll b,ll e,ll i,ll j,ll val,int type)   ///type 1 for sqr update
{
    if(tree[node].lazy1!=0)
    {
        ll lz=tree[node].lazy1;
        tree[node].sqrsum+=(e-b+1)*sqr(lz) + 2*lz*tree[node].sum; ///(a1+x)^2+(a2+x)^2......;
        tree[node].sum+=((e-b+1)*lz);
        tree[node].lazy1=0;

        if(b!=e)
        {
            tree[2*node].lazy1+=lz;
             tree[2*node+1].lazy1+=lz;
        }
    }

    if(tree[node].lazy2!=0)
    {
        ll lz=tree[node].lazy2;
        tree[node].sqrsum=(e-b+1)*sqr(lz);
        tree[node].sum=(e-b+1)*lz;
        tree[node].lazy2=0;

        if(b!=e)
        {
            tree[2*node].lazy2=lz;
             tree[2*node+1].lazy2=lz;
        }
    }



    /// no overlap
    if (i > e || j < b)  return;


     ///total overlap

    if (b >= i && e <= j)
    {


        if(type==1) ///for sqrsum update
        {
            tree[node].sqrsum+=(e-b+1)*sqr(val) + 2*val*tree[node].sum;

            tree[node].sum+=(e-b+1)*val;
            tree[node].lazy1=0;
            if(b!=e)
             {
              tree[2*node].lazy1+=val;
              tree[2*node+1].lazy1+=val;
             }

        }
        else if(type==0)
        {
            tree[node].sqrsum=(e-b+1)*sqr(val);
            tree[node].sum=(e-b+1)*val;
            tree[node].lazy2=0;
            if(b!=e)
             {
              tree[2*node].lazy2=val;
              tree[2*node+1].lazy2=val;
             }
        }



        return;
    }


     ///partial overlap

    ll left = node * 2;
    ll right = (node * 2) + 1;
    ll mid = (b + e) / 2;
    update(left, b, mid, i, j, val,type);
    update(right, mid + 1, e, i, j, val,type);


     tree[node].sum=tree[left].sum+tree[right].sum;
    tree[node].sqrsum=tree[left].sqrsum+tree[right].sqrsum;

}


ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(tree[node].lazy1!=0)
    {
        ll lz=tree[node].lazy1;
        tree[node].sqrsum+=(e-b+1)*sqr(lz) + 2*lz*tree[node].sum;
        tree[node].sum+=(e-b+1)*lz;
        tree[node].lazy1=0;

        if(b!=e)
        {
            tree[2*node].lazy1+=lz;
             tree[2*node+1].lazy1+=lz;
        }
    }

    if(tree[node].lazy2!=0)
    {
        ll lz=tree[node].lazy2;
        tree[node].sqrsum=(e-b+1)*sqr(lz);
        tree[node].sum=(e-b+1)*lz;
        tree[node].lazy2=0;

        if(b!=e)
        {
            tree[2*node].lazy2=lz;
             tree[2*node+1].lazy2=lz;
        }
    }

        /// no overlap

    if (i > e || j < b)  return 0;

    ///total overlap

    if (b >= i && e <= j)
    {

        return tree[node].sqrsum;
    }

    ///partial overlap

    ll left = node * 2;
    ll right = (node * 2) + 1;
    ll mid = (b + e) / 2;

    ll x = query(left, b, mid, i, j);
    ll y = query(right, mid + 1, e, i, j);

    //return min(x,y);
    return x+y;
}

int main()
{
    ll t,cas=0,i,j;
    scanf("%lld",&t);
    while(t--)
    {


       ll n,q;scanf("%lld %lld",&n,&q);

      for(i=1;i<=n;i++) scanf("%lld",&a[i]);


       build(1,1,n);

       printf("Case %lld:\n",++cas);

        while(q--)
        {

        ll x,l,r,val;
        scanf("%lld",&x);

        if(x==2)   /// to print the squqre sum from l to r
        {
            ll l,r;scanf("%lld %lld",&l,&r);

            ll ans=query(1,1,n,l,r);
            printf("%lld\n",ans);
        }
        else if(x==1) /// to add value
        {
           ll l,r,val;scanf("%lld %lld %lld",&l,&r,&val);
           update(1,1,n,l,r,val,1);
        }
        else /// to set all l-r ==val
        {
            ll l,r,val;scanf("%lld %lld %lld",&l,&r,&val);
            update(1,1,n,l,r,val,0);

        }

        //cout<<"SUMS "<<endl;
       // for(i=1;i<=7;i++) cout<<tree[i].sqrsum<<" "<<tree[i].sum<<endl;

        }


    }

}

