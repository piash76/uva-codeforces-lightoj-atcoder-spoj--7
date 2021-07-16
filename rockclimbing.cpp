#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dp[1000][40],a[1000][40];
int n;
int rock(int i,int j)
{
    if(i==n || j==n) return a[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int x=0,y=0,z=0;
    x=a[i][j]+rock(i+1,j);
    y=a[i][j]+rock(i+1,j-1);
    z=a[i][j]+rock(i+1,j+1);
    int r=max(x,max(y,z));
    dp[i][j]=r;
    return dp[i][j];
}

int main()
{
    int n,i,j;
    while(cin>>n)
    {
        memset(dp,-1,sizeof(dp));
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<rock(1,1)<<endl;
    }
}
