




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;



const int maxn =505;
int a[505],n,x;
int dp[maxn][maxn][maxn];

int solve(int idx,int X,int last)
{

    //cout<<"IDX "<<idx<<" x "<<X<<" LAST "<<last<<endl;


    if(idx>=n)
    {
        return 0;
    }

    if(dp[idx][X][last]!=-1) return dp[idx][X][last];

    int ans=1e9;

    if(a[idx]>X and X>=last)
    {
        ans=min(ans,1+solve(idx+1,a[idx],X));          ///change korum
      //  ans=min(ans,cnt+solve(idx+1,X,last));   ///change krum na
    }

    if(last<=a[idx]) ans=min(ans,solve(idx+1,X,a[idx]));   ///change krum na

    // cout<<"Ans "<<ans<<endl;



    return dp[idx][X][last]=ans;

}


int main()
{



    int t,i,j,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&x);

        int mx=-1;
        for(i=0;i<n;i++) { scanf("%d",&a[i]); }


         for(i=0;i<=n;i++)
         {
             for(j=0;j<500;i++)
             {
                 for(k=0;k<500;k++) dp[i][j][k]=-1;
             }
         }

            int ans=solve(0,x,0);

            if(ans>=1e9) ans=-1;

            printf("%d\n",ans);


    }

}


