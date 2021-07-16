




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;




const int mod = 1000000007;


const int maxn =1000005;///1e6
ll a[maxn],b[maxn],vis[maxn],vis2[maxn],cnt[maxn];


int main()
{


    speed()

    ll t,i,j,cas=0;
    ll n;cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];

    }

    ll s=0;

    for(i=1;i<=n;i++)
    {
        ll x=a[i];///vangte hobe
        for(j=1;j<=n;j++)
        {
            if(b[j]==x  and j!=i)
            {
               // cout<<"J "<<j<<endl;
                s++;
                break;
            }
        }
    }

    cout<<n-s<<endl;




    return 0;

}

/*
3

2 828

4 392

4 903


*/







