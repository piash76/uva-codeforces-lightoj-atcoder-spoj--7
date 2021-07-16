///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


//Datatypes
#define ll                      long long
#define ULL                     unsigned long long
#define LD                      long double
#define UI                      unsigned int
#define US                      unsigned short
#define pii             pair<int,int>
#define pll             pair<ll,ll>


#define sc1i(a) scanf("%d",&a)
#define sc2i(a,b) scanf("%d %d",&a,&b)
#define   sc3i(a,b,c)       scanf("%d %d %d",&a, &b, &c)
#define    p1i(a)           printf("%d\n",(a))
#define    p2i(a,b)        printf("%d %d\n",(a), (b))
#define    p3i(a,b,c)      printf("%d %d %d\n",(a), (b), (c))


#define sc1l(a) scanf("%lld",&a)
#define sc2l(a,b) scanf("%lld %lld",&a,&b)
#define   sc3l(a,b,c)       scanf("%lld %lld %lld",&a, &b, &c)
#define    p1l(a)           printf("%lld\n",(a))
#define    p2l(a,b)        printf("%lld %lld\n",(a), (b))
#define    p3l(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))


#define c(x)       cout<<x<<endl
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ci   cout<<"Impossible"<<endl
#define f1(i,a,b)  for(ll i=a;i<b;i++)
#define f2(i,a,b) 	for(ll i=a;i<=b;i++)
#define fr(i,a,b)   for(ll i=a;i>=b;i--)
#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))

#define geta(a,n)           for(ll i=0;i<n;i++) cin>>a[i]
#define puta(a,n)           for(ll i=0;i<n;i++) cout<<a[i]<<" "

#define geta1(a,n)           for(ll i=1;i<=n;i++) cin>>a[i]
#define puta1(a,n)           for(ll i=1;i<=n;i++) cout<<a[i]<<" "


#define getar(a,n)           for(int i=0;i<n;i++) scanf("%lld",&a[i])
#define getar1(a,n)           for(int i=1;i<=n;i++) scanf("%lld",&a[i])
#define putar(a,n)           for(int i=0;i<n;i++) printf("%lld ",a[i])
#define putar1(a,n)           for(int i=1;i<=n;i++) printf("%lld ",a[i])
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

#define nl                        printf("\n")
ll caseno=0;

#define  printcase             printf("Case %d: ",++caseno)
#define Debug                   cout<<endl<<"AND I AM IRONMAN"<<endl;
#define binleastsigonebit(x)    __builtin_ffs(x)
#define binleadingzeroes(x)     __builtin_clz(x)
#define bintrailingzeroes(x)    __builtin_ctz(x)
#define bintotalones(x)         __builtin_popcount(x)



//Constants
const int mod = 1000000007; // 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;
const int maxn = 211111;
const int maxn1 = 111111;
#define BOUND 0x100000000    /// 2^32

#define PI                      acos(-1.0)
#define EulerGamma              0.57721566490153286060651209




///-----------------------------GRAPH MOVES----------------------------////
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/


///-----------------------------VARIOUS FUNCTIONS----------------------------////

bool isPrime(long long int n)
{
    bool flag = true;
    for(long long int i = 2; i*i <= n; ++i)
        //for(int i = 2; i <= sqrt(n); ++i)
        //for(int i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

bool ispoweroftwo (ll x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}

inline void normal(ll &a) { a %= mod; (a < 0) && (a += mod); }
inline ll modMul(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a * b) % mod; }
inline ll modAdd(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a + b) % mod; }
inline ll modSub(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while (p) { if (p & 1LL) r = modMul(r, b); b = modMul(b, b); p >>= 1LL; } return r; }
inline ll modInverse(ll a) { return modPow(a, mod - 2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }


ll amar_ceil(ll x,ll y)
{
    return (x+y-1)/y;
}

long long binpow(long long base,long long power)
{
        long long result=1;
        while (power>0)
        {
                if (power%2==1)
                        result = (result*base);
                base = (base*base);
                power/=2;
        }
        return result;
}

long long  binmod(long long base,long long power,long long M)
{
        long long result=1;
        while (power>0)
        {
                if (power%2==1)
                        result = (result*base)%M;
                base = (base*base)%M;
                power/=2;
        }
        return result;
}

///comparator

/*struct cmp
{
    bool operator()(pair<int , int> &a ,pair<int , int> &b){
        return a.first > b.first;
    }
};*/



using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

///ITS NOT WHO I AM UNDERNEATH,BUT WHAT I DO THAT DEFINES ME.
///A, H, I, M, O, T, U, V, W, X, Y.
bool chek(char i,char j)
{
        if(i=='A' && j=='A')
        return 1;
        else if(i=='b' && j=='d')
        return 1;
        else if(i=='d' && j=='b')
        return 1;
        else if(i=='H' && j=='H')
        return 1;
        else if(i=='I' && j=='I')
        return 1;
        else if(i=='M' && j=='M')
        return 1;
        else if(i=='O' && j=='O')
        return 1;
        else if(i=='o' && j=='o')
        return 1;
        else if(i=='p' && j=='q')
        return 1;
        else if(i=='q' && j=='p')
        return 1;
        else if(i=='T' && j=='T')
        return 1;
        else if(i=='U' && j=='U')
        return 1;
        else if(i=='v' && j=='v')
        return 1;
        else if(i=='V' && j=='V')
        return 1;
        else if(i=='b' && j=='d')
        return 1;
        else if(i=='W' && j=='W')
        return 1;
        else if(i=='w' && j=='w')
        return 1;
        else if(i=='X' && j=='X')
        return 1;
        else if(i=='x' && j=='x')
        return 1;
        else if(i=='Y' && j=='Y')
        return 1;
        else
        return 0;
}



int main()
{
    flash()
    ll i,j,t,cas=0,k;
    string s;cin>>s;
    ll n;n=s.size();



    int f=1;
    if(n==1)
    {
        if(!chek(s[0],s[0])) f=0;
    }

    for(i=0;i<n/2;i++)
    {
        if(!chek(s[i],s[n-i-1])) { f=0;break;}
    }

    if(n%2)
    {
        if(!chek(s[n/2],s[n/2])) f=0;
    }



    if(f) cout<<"TAK"<<endl;
    else cout<<"NIE"<<endl;




    see_you;
}



