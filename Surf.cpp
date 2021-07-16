




///https://www.youtube.com/watch?v=cr6Ip0J9izc



///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back




using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=300005;




struct job
{
    ll s,e,p;
};

bool cmp(job x,job y)
{
    return x.e<=y.e;
}

job a[M];
ll dp[M];


ll bs(ll pos)
{
    ll l=0,h=pos-1,idx=-1;

    while(l<=h)
    {
        ll mid=(l+h)/2;

        if(a[mid].e<=a[pos].s)
        {
            idx=mid;
            l=mid+1;
        }
        else h=mid-1;
    }

    return idx;
}

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll i,j;

    ll n;cin>>n;
    for(i=0;i<n;i++)
    {
        ll st,ed,pt;cin>>st>>pt>>ed;
        a[i].s=st;
        a[i].e=st+ed;
        a[i].p=pt;
    }

    sort(a,a+n,cmp);

    dp[0]=a[0].p;

    for(i=1;i<n;i++)
    {
        ///dhore nei i-1 porjonto max ans jani ja dp[i-1]
        ///tyle ekhon i er jonnno closest index ber krbo binary search diye
        ///jar moddde index projnto ans stored thakbe tyle profit[i]+profit[index]
        ///if profit[i]+profit[index] dp[i-1] er cheye boro na hoy then profit[i]=dp[i-1]

        ll ans=a[i].p;

        ll idx=bs(i);

       // cout<<"I "<<i<<" idx "<<idx<<endl;

        if(idx!=-1)
        {
            ans+=dp[idx];
        }

        dp[i]=max(dp[i-1],ans);

    }

   // for(i=0;i<n;i++) cout<<dp[i]<<" ";
   // cout<<endl;



    cout<<dp[n-1]<<endl;







    return 0;

}

/*

4
2 11 80
8 10 50
10 12 40
13 18 20


110


3
2 5 30
1 6 10
7 8 5




*/





