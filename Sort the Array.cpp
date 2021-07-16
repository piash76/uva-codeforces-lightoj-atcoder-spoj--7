
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define   sc3(a,b,c)       scanf("%lld %lld %lld",&a, &b, &c)
#define    p1(a)           printf("%lld\n",(a))
#define    p2(a,b)        printf("%lld %lld\n",(a), (b))
#define    p3(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))
#define    el             cout<<endl
#define c(x)       cout<<x<<endl
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define f1(i,a,b)  for(ll i=a;i<b;i++)
#define f2(i,a,b) 	for(ll i=a;i<=b;i++)
#define fr(i,a,b)   for(ll i=a;i>=b;i--)
#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define getar(a,n)           for(int i=0;i<n;i++) cin>>a[i]
#define getar1(a,n)           for(int i=1;i<=n;i++) cin>>a[i]
#define putar(a,n)           for(int i=0;i<n;i++) cout<<a[i]<<" "
#define putar1(a,n)           for(int i=1;i<=n;i++) cout<<a[i]<<" "
#define all(a)                  a.begin(),a.end()
#define lla(A)                  A.rbegin(), A.rend()
#define unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end())
#define pb                      push_back
#define mk                      make_pair
#define ff                      first
#define ss                      second
#define greatersrt(v)  sort(v.begin(),v.end(),greater<ll>())
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)         max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)         min(min3(a,b,c),min(d,e))
#define mem(a,x)                memset(a,x,sizeof(a))
#define see_you                     return 0
#define sorta(a,n)                   sort(a,a+n)
#define SORT(v)                 sort(v.begin(),v.end())
#define REV(v)                  reverse(v.begin(),v.end())
int caseno=0;

#define  printcase             printf("Case %d: ",++caseno)
#define Debug                   cout<<endl<<"AND I AM IRONMAN"<<endl;
#define binleastsigonebit(x)    __builtin_ffs(x)
#define binleadingzeroes(x)     __builtin_clz(x)
#define bintrailingzeroes(x)    __builtin_ctz(x)
#define bintotalones(x)         __builtin_popcount(x)

//Datatypes
#define ll                      long long
#define ULL                     unsigned long long
#define LD                      long double
#define UI                      unsigned int
#define US                      unsigned short

//Constants
const int MOD = 1000000007; // 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;
#define PI                      acos(-1.0)
#define EulerGamma              0.57721566490153286060651209

using namespace std;

//from a loser

void merging(ll ar[],ll l,ll m,ll h)
{
    ll i, j, k,x,y;
     x = m - l + 1;
     y =  h - m;


    ll ar1[x+5], ar2[y+5];


    for (i = 0; i <x; i++)
        ar1[i] = ar[l + i];
    for (j = 0; j < y; j++)
        ar2[j] = ar[m + 1+ j];


    i=j=0;
    k = l;
    while (i < x && j < y)
    {
        if (ar1[i] <= ar2[j])
        {
            ar[k] = ar1[i];
            i++;
        }
        else
        {
            ar[k] = ar2[j];
            j++;
        }
        k++;
    }

    while (i < x)
    {
        ar[k] = ar1[i];
        i++;
        k++;
    }

    while (j < y)
    {
        ar[k] = ar2[j];
        j++;
        k++;
    }
}



void mergesort(ll ar[],ll l,ll h)
{
    if (l < h)
    {
        ll m =(l+h)/2;
        mergesort(ar, l, m);
        mergesort(ar, m+1, h);
        merging(ar, l, m, h);
    }
}


int main()
{
    flash()
    ll d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,x,y,a,b;
    cin>>n;
    ll ar[n+5],br[n+5];
    f1(i,0,n)
    {
        cin>>ar[i];
        br[i]=ar[i];
    }
    mergesort(br,0,n-1);

     l=0,r=0;
    f1(i,0,n)
    {
        if(br[i]!=ar[i])
        {
           l=i;break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(br[i]!=ar[i])
        {
           r=i;break;
        }
    }
    reverse(ar+l,ar+r+1);
    f=1;
    f1(i,0,n)
    {
    if(ar[i]!=br[i])
    {
    cout<<"no"<<endl;
    f=0;
    break;

    }

   }
   if(f)
  {
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
   }


    see_you;

}


