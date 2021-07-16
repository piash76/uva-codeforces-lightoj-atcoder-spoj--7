
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

using namespace std;

const ll inf=1e9;


const int N=55;

ll n,req_tme;

ll tme[N][N],tol[N][N],vis[N];

pair<ll,ll> dp[N][1005];

pair<ll,ll> solve(ll cur_city,ll taken_time)  ///minimum toll ,taken time
{
    if(taken_time>req_tme) return {inf,inf};

    if(cur_city==n)
    {
        if(taken_time<=req_tme) return {0,taken_time};
        else return {inf,inf};
    }

    if(dp[cur_city][taken_time].ff!=-1 or dp[cur_city][taken_time].ss!=-1)
    {
        return dp[cur_city][taken_time];

    }

    pair<ll,ll> s={inf,inf};



    for(ll i=1;i<=n;i++)
    {
       if(vis[i]==0)
       {
           vis[i]=1;

           pair<ll,ll> temp=solve(i,taken_time+tme[cur_city][i]); ///toll, time

           temp.first=temp.first+tol[cur_city][i];


           if(temp.first<s.first)
           {
               s=temp;
           }

           ///s=min(s,temp);
           vis[i]=0;

       }
    }



    return dp[cur_city][taken_time]=s;
    ///return s;

}

int main()
{

    ll i,j;
    while(1)
    {


        scanf("%lld %lld",&n,&req_tme);

        if(n==0 and req_tme==0) break;

        memset(dp,-1,sizeof(dp));
        memset(vis,0,sizeof(vis));

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++) scanf("%lld",&tme[i][j]);
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++) scanf("%lld",&tol[i][j]);
        }

        vis[1]=1;

        pair<ll,ll> ans=solve(1,0);

        ///cout<<"ANS "<<ans.ff<<" "<<ans.ss<<endl;

        printf("%lld %lld\n",ans.ff,ans.ss);






    }

    return 0;

}

/*

4 7
0 5 2 3
5 0 2 3
3 1 0 2
3 3 2 0

0 2 2 7
2 0 1 2
2 2 0 5
7 2 5 0


*/



