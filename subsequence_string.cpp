
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

const int M=500005;
ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll i,j;
    string s,t;

    while(cin>>s>>t)
    {
        ll n=s.size();
        ll m=t.size();

        ll idx=0;
        for(i=0;i<m;i++)
        {
            if(s[idx]==t[i])
            {
                idx++;
            }
        }

        if(idx==n) cy;
        else cn;


    }

    return 0;

}



