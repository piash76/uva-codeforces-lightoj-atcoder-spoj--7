#include<bits/stdc++.h>
using namespace std;


int mat[10][10];
int dp[10][10];
int r,c;
int call(int i, int j)
{
    if (i >= 0 && i < r and j >= 0 and j < c) //if still inside the array
    {
        if (dp[i][j] != -1)
            return dp[i][j];
        int ret =-1;
        //try to move to 3 direction,also add current cell's point
        ret = max(ret, call(i + 1, j) + mat[i][j]);
        ret=max(ret,call(i,j+1)+mat[i][j]);
        //ret = max(ret, call(i + 1, j - 1) + mat[i][j]);
       // ret = max(ret, call(i + 1, j + 1) + mat[i][j]);
        return dp[i][j] = ret;
    }
    else
        return 0; //if outside the array
}
int main()
{
    // READ("in");
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++) cin>>mat[i][j];
    }
    memset(dp, -1,sizeof(dp));
    printf("%d\n", call(0, 0));
    return 0;
}
