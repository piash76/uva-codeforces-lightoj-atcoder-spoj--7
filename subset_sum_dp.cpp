ll solve(ll idx,ll sum) ///subset sum
{
    if(sum==0) return 1;

    if(idx<0 or sum<0) return 0;

    if(dp[idx][sum]!=-1) return dp[idx][sum];

    ll ans=solve(idx-1,sum-a[idx]) || solve(idx-1,sum);

    return dp[idx][sum]=ans;

}


ll solve(ll idx,ll sum)
{
    if(sum==0) return 1;

    if(idx>=n)
    {
        return 0;
        ///if(sum==0) return 1;
       /// else return 0;

    }

    if(dp[idx][sum]!=-1) return dp[idx][sum];

    ll s=solve(idx+1,sum-a[idx]) || solve(idx+1,sum);

    return dp[idx][sum]=s;
}

