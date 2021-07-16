#include<bits/stdc++.h>
#define ll long long
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d %d",&a,&b)
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define f1(i,a,b)  for(int i=a;i<b;i++)
#define f2(i,a,b) 	for(int i=a;i<=b;i++)
#define greatersrt(v)  sort(v.begin(),v.end(),greater<ll>())
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)         max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)         min(min3(a,b,c),min(d,e))
#define mem(a,x)                memset(a,x,sizeof(a))
#define see_you                     return 0
#define sorta(a)                   sort(a,a+n)
#define SORT(v)                 sort(v.begin(),v.end())
#define REV(v)                  reverse(v.begin(),v.end())
int caseno=0;
#define print_case cout<<"Case "<<++caseno<<": ";
using namespace std;
ll chek(ll n,ll x)
{
    ll i,j,k,l,y,z;
    f2(i,2,sqrt(n))
    {
        if(n%i==0 && i!=x)
        {
            y=n/i;
            z=n/y;
            if(x!=y && y!=z && x!=z)
            {
                cout<<x<<" "<<y<<" "<<z<<endl;
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    godspeed()
    ll i,j,n,m,k,l,t,x,y,r,s,d,f,z;
    cin>>t;
    while(t--)
    {
        f=1;
        cin>>n;
        f2(i,2,sqrt(n))
        {
            x=i;
            if(n%i==0 && chek(n/i,x))
                {

                    f=0;
                    break;
                }
        }
        if(f) cn;


    }
    see_you;
}
