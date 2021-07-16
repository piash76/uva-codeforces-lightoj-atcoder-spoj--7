

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
const int M=500005;

ll a[M];


int main()
{


    ll t,i,j;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;scanf("%lld",&n);

        ll s=0,lim=2*n+1;
        ///a 1 to root 2n+1
        ///then b (a^2-1)/2
        /// then c=b+1


        for(i=1;i*i<=lim;i+=2)
        {
            ll b=(i*i-1)/2;
            ll c=b+1;
            if(b>=1 and b<=n and c>=1 and c<=n and i*i+b*b==c*c) s++;
        }

        printf("%lld\n",s);


    }

    return 0;

}



