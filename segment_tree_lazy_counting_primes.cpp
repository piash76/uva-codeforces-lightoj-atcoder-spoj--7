


#include<bits/stdc++.h>


#define ll long long


using namespace std;


const int mod = 1000000007;
const int maxn = 10005;


const int N = 10000005;
///const int SZ = 5761455 + 3;
///const int SZ=6000000;
///const int SZ=1e6+10;
//bool isprime[N+5];
bitset<N> isprime;

void sieve()
{

    int sq=sqrt(N);
    isprime[2]=0; //as 0 indicates prime
    for(int i=4;i<=N;i+=2) isprime[i]=1; ///o(n)
    for(int i=3;i<=sq;i+=2) ///O(nlog(log(n)));
    {
        if(isprime[i]==0)
        {
            for(int j=i*i;j<=N;j+=i)isprime[j]=1;
        }
    }

}


struct seg
{
    int sum,lazy;
};

seg tree[4*maxn];
int a[maxn];

void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum=!(isprime[a[b]]);
        tree[node].lazy=0;
        return;
    }

    int mid=(b+e)/2;
    int left=2*node;
    int right=(2*node)+1;

    build(left,b,mid);
    build(right,mid+1,e);

    tree[node].sum=tree[left].sum+tree[right].sum;
    tree[node].lazy=0;

}


void update(int node,int b,int e,int i,int j,int val)
{
    if(tree[node].lazy)
    {
        int lz=tree[node].lazy;
        tree[node].sum=(e-b+1)*(!(isprime[lz]));
        tree[node].lazy=0;

        if(b!=e)
        {
            tree[2*node].lazy=lz;
             tree[2*node+1].lazy=lz;

        }
    }

    /// no overlap
    if (i > e || j < b)  return;

     ///total overlap

    if (b >= i && e <= j)
    {
        tree[node].sum=(e-b+1)*(!(isprime[val]));
        tree[node].lazy=0;

        if(b!=e)
        {
             tree[2*node].lazy=val;
             tree[2*node+1].lazy=val;
        }
        return;
    }

     ///partial overlap

    int left = node * 2;
    int right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(left, b, mid, i, j, val);
    update(right, mid + 1, e, i, j, val);

    tree[node].sum=tree[left].sum+tree[right].sum;
}

int query(int node,int b,int e,int i,int j)
{
    if(tree[node].lazy)
    {
        int lz=tree[node].lazy;
        tree[node].sum=(e-b+1)*(!(isprime[lz]));
        tree[node].lazy=0;

        if(b!=e)
        {
            tree[2*node].lazy=lz;
             tree[2*node+1].lazy=lz;

        }
    }

    /// no overlap
    if (i > e || j < b)  return 0;

     ///total overlap

    if (b >= i && e <= j)
    {
        return tree[node].sum;
    }

    ///partial overlap

    int left = node * 2;
    int right = (node * 2) + 1;
    int mid = (b + e) / 2;

    int x = query(left, b, mid, i, j);
    int y = query(right, mid + 1, e, i, j);

    return x+y;


}

int main()
{
    sieve();

    int t,cas=0,i,j;
    scanf("%d",&t);

    while(t--)
    {
        printf("Case %d:\n",++cas);

        int n,q;scanf("%d %d",&n,&q);
       /// memset(a,0,sizeof(a));
        for(i=1;i<=n;i++) scanf("%d",&a[i]);

        build(1,1,n);

        //printf("Case %d:\n",++cas);

        while(q--)
        {


        int type;scanf("%d",&type);

        if(type==1)
        {
            int l,r;scanf("%d %d",&l,&r);
            int ans=query(1,1,n,l,r);
            printf("%d\n",ans);
        }
        else
        {
            int l,r,val;scanf("%d %d %d",&l,&r,&val);
            update(1,1,n,l,r,val);
        }

        }
    }

    return 0;


}


