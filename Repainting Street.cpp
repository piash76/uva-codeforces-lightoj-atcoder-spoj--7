




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;




const int mod = 1000000007;


const int maxn =1000005;///1e6
ll a[maxn];


int main()
{


    speed()

    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;

        for(i=1;i<=n;i++) cin>>a[i];

        ll ans=LLONG_MAX;
        for(i=1;i<=100;i++)
        {
            ll c=0;
            for(j=1;j<=n;j++)
            {
                if(a[j]!=i and j<=n)
                {
                    j=j+k-1;
                    c++;
                }
                if(j>=n) break;
            }

            ans=min(ans,c);

        }

        cout<<ans<<endl;



    }

}



